#-*- coding: utf-8 -*-

import csv
import sys
import math
import os

input_data  = sys.argv[1]
output_data = sys.argv[2]
error_num   = 0

#------------- recovery equations ---------------------------------------------
def avg(a, b):
  return 1/2*(a + b)

# recovery equation for the threshold (use values in same FE)
def recover_thr(nth_FE, pixel_type, value_type, recover_list):
  global cure
  cure = data[nth_FE][pixel_type][value_type]
  # bring value from same FEs
  if data[nth_FE][pixel_type][value_type] == 0 and data[nth_FE]["normal"][value_type] + data[nth_FE]["long"][value_type] + data[nth_FE]["ganged"][value_type] >= 6000:
    if pixel_type == "normal":
      cure = avg(data[nth_FE]["long"][value_type], data[nth_FE]["ganged"][value_type])
    if pixel_type == "long":
      cure = avg(data[nth_FE]["normal"][value_type], data[nth_FE]["ganged"][value_type])
    if pixel_type == "ganged":
      cure = avg(data[nth_FE]["long"][value_type], data[nth_FE]["normal"][value_type])
  # bring value from different FEs
  if cure == 0:
    if recover_list == []:
      cure = 0.0
    else:
      cure = sum(recover_list)/len(recover_list)
  return round(cure, 1)

# recovery equation for other than the threshold (use values in different FEs)
def recover_diff(nth_FE, pixel_type, parameter, recover_list):
  cure = data[nth_FE][pixel_type][parameter]
  if cure == 0:
    if recover_list == []:
      cure = 0.0
    else:
      cure = sum(recover_list)/len(recover_list)
  return float('%.6g' % cure)

#------------------------------------------------------------------------------



#------------- recover the partially "0" component ----------------------------

test_data = open(input_data, "r")
result    = open("partial_recover.dat","w+")

path_to_summary = "./20210608_CalibSummary.txt" 

summary   = open(path_to_summary, "r+")
summary_line = summary.readlines()


contents_part = test_data.read()
test_data.close()
elements_part = contents_part.splitlines()

para_lists = {
  "normal" : { "threshold" : [], "sigma" : [], "noise" : [], "intime" : [] },
  "long"   : { "threshold" : [], "sigma" : [], "noise" : [], "intime" : [] },
  "ganged" : { "threshold" : [], "sigma" : [], "noise" : [], "intime" : [] },
  "fit_normal" : { "A" : [], "B" : [], "C" : [] },
  "fit_longGanged" : { "A" : [], "B" : [], "C" : [] },
  "quality/unused" : {"fit_quality" : [], "unused" : [] }
}

recover_list = []


# parsing data file
last = len(elements_part)
head = 0
module_num = 0

n_line = 0

print(last)

while head < last:
  line = elements_part[head]
  result.write(elements_part[head])
  result.write("\n")

  # seek the head of the blocks ("L" : IBL, BLayer, L1L2. "D" : disk)
  if not line.find("L") == 0 and not line.find("D") == 0:
    head += 1
    continue
  # seek the tail of the block
  tail = head + 1
  while tail < last:
    tmp = elements_part[tail]
    if tmp.find("L") == 0 or tmp.find("D") == 0 or tail == last:
      break
    else:
      tail += 1

  module_num +=1
#  print(module_num)

  # the head line is the module name ( e.g. L0_B01_S2_A7_M2A )
  module = elements_part[head]
  print( "processing module", module )
  
  # rawBlock is the block lines, corresponding to each Pixel Module
  # for IBL, there are either 2 or 1 FEs
  # else, there are 16 FEs
  rowBlock = elements_part[head+1:tail]

  # split each line of the block
  splitted = [ line.split() for line in rowBlock ]
  # number of FEs in a module
  n_FEs = len(splitted)

  # Structure variables adequately into the json format
  data = [ { "FE" : s[0],
             "normal" : { "threshold" : float(s[1]), "sigma" : float(s[2]),  "noise" : float(s[3]),  "intime" : float(s[4])  },
             "long"   : { "threshold" : float(s[5]), "sigma" : float(s[6]),  "noise" : float(s[7]),  "intime" : float(s[8])  },
             "ganged" : { "threshold" : float(s[9]), "sigma" : float(s[10]), "noise" : float(s[11]), "intime" : float(s[12]) },
             "fit_normal" : { "A" : float(s[13]), "B" : float(s[14]), "C" : float(s[15]) },
             "fit_longGanged" : { "A" : float(s[16]), "B" : float(s[17]), "C" : float(s[18]) },
             "quality/unused" : {"fit_quality" : float(s[19]), "unused" : float(s[20]) } }
             for s in splitted ]

  data_summary = [ {
    "normal" : { "threshold" : "", "sigma" : "", "noise" : "", "intime" : ""  },
    "long"   : { "threshold" : "", "sigma" : "", "noise" : "", "intime" : ""  },
    "ganged" : { "threshold" : "", "sigma" : "", "noise" : "", "intime" : "" },
    "fit_normal" : { "A" : "", "B" : "", "C" : "" },
    "fit_longGanged" : { "A": "", "B": "", "C": "" },
    "quality/unused" : {"fit_quality" : "", "unused" : "" } }
    for s in splitted ]

  for i in range(len(data)):
    summary_text = ""
    check_fe = 0
    n_insert = head + i -7

    pixtypes = data[i].keys()
    for pixtype in pixtypes:
      if pixtype == "FE":
        continue
      else:
        parameters = data[i][pixtype].keys()
        for parameter in parameters:
          if data[i][pixtype][parameter] == 0 or data[i][pixtype][parameter] == -28284.3:
            check_fe = check_fe + 1
            summary_text = summary_text + pixtype + " " + parameter + ", "

    if check_fe == 20:
      summary_line[n_insert] = "I" + str(i) + ": [ Missing all values for this FE. ], " + summary_line[n_insert]
    else:
      summary_line[n_insert] = "I" + str(i) + ": [ Missing " + summary_text[:-2] + " ], " + summary_line[n_insert] 

  


  for s in splitted:
    for i in range(len(s)):
      if s[i] == "0":
        error_num += 1

  # Make lists to recover dead channel using different FEs
  # normal threshold, sigma, noise, intime-thr
  normal_thr    = [data[i]["normal"]["threshold"] for i in range(n_FEs) if data[i]["normal"]["threshold"] != 0]
  normal_sigma  = [data[i]["normal"]["sigma"]     for i in range(n_FEs) if data[i]["normal"]["sigma"] != 0]
  normal_noise  = [data[i]["normal"]["noise"]     for i in range(n_FEs) if data[i]["normal"]["noise"] != 0]
  normal_intime = [data[i]["normal"]["intime"]    for i in range(n_FEs) if data[i]["normal"]["intime"] != 0]
  # long threshold, sigma, noise, intime-thr
  long_thr    = [data[i]["long"]["threshold"] for i in range(n_FEs) if data[i]["long"]["threshold"] != 0]
  long_sigma  = [data[i]["long"]["sigma"]     for i in range(n_FEs) if data[i]["long"]["sigma"] != 0]
  long_noise  = [data[i]["long"]["noise"]     for i in range(n_FEs) if data[i]["long"]["noise"] != 0]
  long_intime = [data[i]["long"]["intime"]    for i in range(n_FEs) if data[i]["long"]["intime"] != 0]
  # ganged threshold, sigma, noise, intime-thr
  ganged_thr    = [data[i]["ganged"]["threshold"]  for i in range(n_FEs) if data[i]["ganged"]["threshold"] != 0]
  ganged_sigma  = [data[i]["ganged"]["sigma"]      for i in range(n_FEs) if data[i]["ganged"]["sigma"] != 0]
  ganged_noise  = [data[i]["ganged"]["noise"]      for i in range(n_FEs) if data[i]["ganged"]["noise"] != 0 ]
  ganged_intime = [data[i]["ganged"]["intime"]     for i in range(n_FEs) if data[i]["ganged"]["intime"] != 0]
  # normal parameter A, B, C
  normal_A = [data[i]["fit_normal"]["A"] for i in range(n_FEs) if data[i]["fit_normal"]["A"] != 0]
  normal_B = [data[i]["fit_normal"]["B"] for i in range(n_FEs) if data[i]["fit_normal"]["B"] != 0 and data[i]["fit_normal"]["B"] != -28284.3]
  normal_C = [data[i]["fit_normal"]["C"] for i in range(n_FEs) if data[i]["fit_normal"]["C"] != 0]
  # long/ganged parameter A, B, C
  longGanged_A = [data[i]["fit_longGanged"]["A"] for i in range(n_FEs) if data[i]["fit_longGanged"]["A"] != 0]
  longGanged_B = [data[i]["fit_longGanged"]["B"] for i in range(n_FEs) if data[i]["fit_longGanged"]["B"] != 0 and data[i]["fit_longGanged"]["B"] != -28284.3]
  longGanged_C = [data[i]["fit_longGanged"]["C"] for i in range(n_FEs) if data[i]["fit_longGanged"]["C"] != 0]
  # fit quality/unused
  qty    = [data[i]["quality/unused"]["fit_quality"] for i in range(n_FEs) if data[i]["quality/unused"]["fit_quality"] != 0]
  unused = [data[i]["quality/unused"]["unused"]      for i in range(n_FEs) if data[i]["quality/unused"]["unused"] != 0]


  # recovered data list
  data_recover_part = [
     [splitted[i][0],
     recover_thr(i, "normal", "threshold", normal_thr), recover_diff(i, "normal", "sigma", normal_sigma), recover_diff(i, "normal", "noise", normal_noise), recover_diff(i, "normal", "intime", normal_intime),
     recover_thr(i, "long", "threshold", long_thr),     recover_diff(i, "long", "sigma", long_sigma),     recover_diff(i, "long", "noise", long_noise),     recover_diff(i, "long", "intime", long_intime),
     recover_thr(i, "ganged", "threshold", ganged_thr), recover_diff(i, "ganged", "sigma", ganged_sigma), recover_diff(i, "ganged", "noise", ganged_noise), recover_diff(i, "ganged", "intime", ganged_intime),
     recover_diff(i, "fit_normal", "A", normal_A),         recover_diff(i, "fit_normal", "B", normal_B),         recover_diff(i, "fit_normal", "C", normal_C),
     recover_diff(i, "fit_longGanged", "A", longGanged_A), recover_diff(i, "fit_longGanged", "B", longGanged_B), recover_diff(i, "fit_longGanged", "C", longGanged_C),
     recover_diff(i, "quality/unused", "fit_quality", qty), recover_diff(i, "quality/unused", "unused", unused)]
   for i in range(len(splitted))]

  recover_list.append(data_recover_part)

  # write recovered data to file
  writer = csv.writer(result, delimiter = " ")
  writer.writerows(data_recover_part)


  # Make parameter lists of modules for reccovering modules with all values "0"
  # normal threshold, sigma, noise, intime-threshold
  para_lists["normal"]["threshold"].append([recover_thr(i, "normal", "threshold", normal_thr) for i in range(len(splitted))])
  para_lists["normal"]["sigma"].append([recover_thr(i, "normal", "sigma", normal_sigma) for i in range(len(splitted))])
  para_lists["normal"]["noise"].append([recover_diff(i, "normal", "noise", normal_noise) for i in range(len(splitted))])
  para_lists["normal"]["intime"].append([recover_diff(i, "normal", "intime", normal_intime) for i in range(len(splitted))])
  # long threshold, sigma, noise, intime-threshold
  para_lists["long"]["threshold"].append([recover_thr(i, "long", "threshold", long_thr) for i in range(len(splitted))])
  para_lists["long"]["sigma"].append([recover_thr(i, "long", "sigma", long_sigma) for i in range(len(splitted))])
  para_lists["long"]["noise"].append([recover_diff(i, "long", "noise", long_noise) for i in range(len(splitted))])
  para_lists["long"]["intime"].append([recover_diff(i, "long", "intime", long_intime) for i in range(len(splitted))])
  # ganged threshold, sigma, noise, intime-threshold
  para_lists["ganged"]["threshold"].append([recover_thr(i, "ganged", "threshold", ganged_thr) for i in range(len(splitted))])
  para_lists["ganged"]["sigma"].append([recover_thr(i, "ganged", "sigma", ganged_sigma) for i in range(len(splitted))])
  para_lists["ganged"]["noise"].append([recover_diff(i, "ganged", "noise", ganged_noise) for i in range(len(splitted))])
  para_lists["ganged"]["intime"].append([recover_diff(i, "ganged", "intime", ganged_intime) for i in range(len(splitted))])
  # normal pixel fit parameters
  para_lists["fit_normal"]["A"].append([recover_diff(i, "fit_normal", "A", normal_A) for i in range(len(splitted))])
  para_lists["fit_normal"]["B"].append([recover_diff(i, "fit_normal", "B", normal_B) for i in range(len(splitted))])
  para_lists["fit_normal"]["C"].append([recover_diff(i, "fit_normal", "C", normal_C) for i in range(len(splitted))])
  # long/ganged pixel fit parameters
  para_lists["fit_longGanged"]["A"].append([recover_diff(i, "fit_longGanged", "A", longGanged_A) for i in range(len(splitted))])
  para_lists["fit_longGanged"]["B"].append([recover_diff(i, "fit_longGanged", "B", longGanged_B) for i in range(len(splitted))])
  para_lists["fit_longGanged"]["C"].append([recover_diff(i, "fit_longGanged", "C", longGanged_C) for i in range(len(splitted))])
  # fit quality/unused
  para_lists["quality/unused"]["fit_quality"].append([recover_diff(i, "quality/unused", "fit_quality", qty) for i in range(len(splitted))])
  para_lists["quality/unused"]["unused"].append([recover_diff(i, "quality/unused", "unused", unused) for i in range(len(splitted))])

  head = tail

result.close()

# end of while head < last


#------------- recover the dead module ----------------------------------------

#....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

def diffmodule(n_module, n_FE, pixel_type, para_type):
  recover = data2[n_FE][pixel_type][para_type]
  if n_module != 1:
    n_module = n_module - 2
  if recover == 0.0:
    recover = sum(para_lists[pixel_type][para_type][n_module])/len(para_lists[pixel_type][para_type][n_module])
  return float('%.6g' % recover)

#....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......



partial_rec  = open("partial_recover.dat","r")
all_recover  = open(output_data, "w")
contents_all = partial_rec.read() 
elements_all = contents_all.splitlines()


# parsing data file
last2 = len(elements_all)
head2 = 0
module_num2 = 0

print(len(elements_all))

while head2 < last2:
  line2 = elements_all[head2]
  all_recover.write(elements_all[head2])
  all_recover.write("\n")
  # seek the head of the blocks ("L" : IBL, BLayer, L1L2. "D" : disk)
  if not line2.find("L") == 0 and not line2.find("D") == 0:
    head2 += 1
    continue

  # seek the tail of the block
  tail2 = head2 + 1
  while tail2 < last2:
    tmp2 = elements_all[tail2]
    if tmp2.find("L") == 0 or tmp2.find("D") == 0 or tail2 == last2:
      break
    else:
      tail2 += 1

  module_num2 +=1
#  print(module_num2)

  # the head line is the module name ( e.g. L0_B01_S2_A7_M2A )
  module2 = elements_all[head2]
  print( "processing module", module2 )

  # rawBlock is the block lines, corresponding to each Pixel Module
  # for IBL, there are either 2 or 1 FEs
  # else, there are 16 FEs
  rowBlock2 = elements_all[head2+1:tail2]

  # split each line of the block
  splitted2 = [ line2.split() for line2 in rowBlock2 ]
  # number of FEs in a module
  n_FEs2 = len(splitted2)

  # Structure variables adequately into the json format
  data2 = [ { "FE" : s[0],
             "normal" : { "threshold" : float(s[1]), "sigma" : float(s[2]),  "noise" : float(s[3]),  "intime" : float(s[4])  },
             "long"   : { "threshold" : float(s[5]), "sigma" : float(s[6]),  "noise" : float(s[7]),  "intime" : float(s[8])  },
             "ganged" : { "threshold" : float(s[9]), "sigma" : float(s[10]), "noise" : float(s[11]), "intime" : float(s[12]) },
             "fit_normal" : { "A" : float(s[13]), "B" : float(s[14]), "C" : float(s[15]) },
             "fit_longGanged" : { "A" : float(s[16]), "B" : float(s[17]), "C" : float(s[18]) },
             "quality/unused" : {"fit_quality" : float(s[19]), "unused" : float(s[20]) } }
             for s in splitted2]

  data_recover_all = [[splitted[i][0],
                    diffmodule(module_num2, i, "normal", "threshold"), diffmodule(module_num2, i, "normal", "sigma"), diffmodule(module_num2, i, "normal", "noise"), diffmodule(module_num2, i, "normal", "intime"),
                    diffmodule(module_num2, i, "long", "threshold"),   diffmodule(module_num2, i, "long", "sigma"),   diffmodule(module_num2, i, "long", "noise"),   diffmodule(module_num2, i, "long", "intime"),
                    diffmodule(module_num2, i, "ganged", "threshold"), diffmodule(module_num2, i, "ganged", "sigma"), diffmodule(module_num2, i, "ganged", "noise"), diffmodule(module_num2, i, "ganged", "intime"),
                    diffmodule(module_num2, i, "fit_normal", "A"),     diffmodule(module_num2, i, "fit_normal", "B"),     diffmodule(module_num2, i, "fit_normal", "C"),
                    diffmodule(module_num2, i, "fit_longGanged", "A"), diffmodule(module_num2, i, "fit_longGanged", "B"), diffmodule(module_num2, i, "fit_longGanged", "C"),
                    diffmodule(module_num2, i, "quality/unused", "fit_quality"), diffmodule(module_num2, i, "quality/unused", "unused")] 
                    for i in range(len(splitted2))]

  # write recovered data to file
  writer = csv.writer(all_recover, delimiter = " ")
  writer.writerows(data_recover_all)

#  print(diffmodule(1, 1, "normal", "threshold", para_lists["normal"]["threshold"][1]))

  head2 = tail2

# end of while head2 < last2

all_recover.close()

with open(path_to_summary, mode='w') as f:
  f.writelines(summary_line)


# delete partial_recover.dat
os.remove("partial_recover.dat")

print('number of "0" =', error_num)
print( "processing done." )



