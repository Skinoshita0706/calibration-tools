//======================================================================
// PixelCalib : Read calibration file, redo the fit.
//
// Note : this program only runs on Pixel (barrel and endcap) but not IBL.
//
// ~% root -b -q PixelCalib.C
//
// Mapping convention for FE in the calibration.
//
//     ^
//  phi|
//  320|
//     | FE15 FE14 FE13 ... FE9 FE8
//  160|
//     | FE0  FE1  FE2  ... FE6 FE7
//     |
//    0+------------------------------>
//     0    18   36     ...   126 144
//                                  eta
//======================================================================

#include "pixelMapping.h"

double funcTot(double* x, double* par) {
  double ret = 9.9e10;
  double num = x[0]+par[1];
  double denom = x[0]+par[2];
  if (denom != 0.0) ret = par[0]*(num/denom);
  return ret;
}

double funcDisp(double* x, double* par) {
  double ret = 9.9e10;
  ret = par[0]+par[1]*x[0];
  return ret;
}

string getDatetodayStr() {
  time_t t = time(nullptr);
  const tm* localTime = localtime(&t);
  std::stringstream s;
  s << "20" << localTime->tm_year - 100;
  s << setw(2) << setfill('0') << localTime->tm_mon + 1;
  s << setw(2) << setfill('0') << localTime->tm_mday;
  return s.str();
}

void PixelCalib() {


  /*  Calibration during TS2 September 19, 2017
  IBL:
    THR: 67422 (Note that LI_S06_C_M1_C1 does not have its final tuning here.
                We did not do a full threshold after tuning but I can pass
                the short (1 in 32 pixels) threshold if that would suffice.)
    TOT Calib: 67489

  BARREL:
    THR: 67465 (Note that this is only a SHORT threshold.)
    TOT CALIB: 67502 & 67504 (Inner and outter half's of the detector.)

  DISK:
    THR: 67482
    TOT CALIB: 67531 (Disk & Blayer Together)

  BLAYER:
    THR: 67530
    TOT CALIB: 67531 (Disk & Blayer Together, saved in DISK directory)

  analog thresholds:
     b-layer : 5000e
     L1,L2   : 3500e
     Endcap : 4500e

  */

 //******************************************************
  int WhichPart = 3; // 0=IBL, 1=BLayer, 2=L1L2, 3=disk;
 //******************************************************

  std::string inThrFile = "";
  std::string inTimFile = "";
  std::string inTotFile = "";

  std::string Output = "";

  // selcting inputs file
  if (WhichPart==0) {
     std::cout << "Running on IBL" << std::endl;
     inThrFile = "../../data/202110_ALL/SCAN_S000086064.root";
     inTimFile = "";
//     inTotFile = "../../data/TOT_Calub/SCAN_S000072038.root";
     inTotFile = "../../data/202110_ALL/SCAN_S000086070.root";
     Output = "Out_IBL";
  }
  if (WhichPart==1) {
     std::cout << "Running on BLayer" << std::endl;
//     inThrFile = "../../data/20170925_ALL/SCAN_S000067530.root";
     inThrFile = "../../data/sep/SCAN_S000085685.root";
     //     inThrFile = "../../data/20180622_ALL/SCAN_S000071759.root";
     inTimFile = "../../data/sep/SCAN_S000085681.root";
     //     inTotFile = "../../data/20170925_ALL/SCAN_S000067531.root";
     //     inTotFile = "../../data/20180920_ALL/SCAN_S000072946.root";
     inTotFile = "../../data/sep/SCAN_S000085766.root";
     Output = "Out_BLayer";
  }
  if (WhichPart==2) {
     std::cout << "Running on L1L2" << std::endl; //usally 2 scan, not merging the root life but the txt file
     inThrFile = "../../data/sep/SCAN_S000085642.root";
     inTimFile = "../../data/sep/SCAN_S000085646.root";
     inTotFile = "../../data/sep/SCAN_S000085766.root"; // 67502 + 67504
     Output = "Out_L1L2";
  }
  if (WhichPart==3) {
     std::cout << "Running on Disk" << std::endl;
     inThrFile = "../../data/202109_ALL/SCAN_S000085671.root";
     inTimFile = "../../data/202109_ALL/SCAN_S000085673.root";
     inTotFile = "../../data/202109_ALL/SCAN_S000085766.root";
     Output = "Out_Disk";
  }

  // selecting Q threshold
  int qthresh = -1;
  if (WhichPart==0) qthresh = 8;
  if (WhichPart==1) qthresh = 5;
  if (WhichPart==2) qthresh = 5;
  if (WhichPart==3) qthresh = 5;

  int nrow = -1;     // y-axis
  int ncol = -1; // x-axis
  if (WhichPart == 0)
  {
    nrow = 336;
    ncol = 160;
  }
  else
  {
    nrow = 320; // y-axis
    ncol = 144; // x-axis
  }

//  const int ncharge = 22;  // injected charges
  const int ncharge = 21;  // injected charges
//  float chargeArr[ncharge]    = {3000, 3500, 4000, 6000, 10000, 15000, 20000, 25000, 30000, 40000};
//  float chargeArr[ncharge]    = {3000, 3500, 4000, 6000, 10000, 15000, 20000, 25000, 25000, 30000, 35000};
  float chargeArr[ncharge]    = {3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000, 12000, 14000, 16000, 18000, 20000, 25000}; //low 21steps
//  float chargeErrArr[ncharge] = {   0,    0,    0,    0,     0,     0,     0,     0,     0,     0};
//  float chargeErrArr[ncharge] = {   0,    0,    0,    0,     0,     0,     0,     0,     0,     0,     0};
  float chargeErrArr[ncharge] = {   0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,     0,     0,     0,     0,     0,     0,     0}; //low
//  float chargeArr[ncharge]    = {2000, 2500, 3000, 3500, 4000, 5000, 6000, 8000, 10000, 12000, 14000, 16000, 18000, 20000, 22000, 24000, 26000, 28000, 30000};
//  float chargeErrArr[ncharge] = {   0,    0,    0,    0,    0,    0,    0,    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0};
//  float chargeArr[ncharge] = {1400, 1500, 1750, 2000, 2500, 3000, 3500, 4000, 5000, 6000, 8000, 10000, 12000, 14000, 16000, 18000, 20000, 22000, 24000, 26000, 28000, 30000}; //19 steps with 0Preset_HitDisConfig
//  float chargeErrArr[ncharge] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  std::map<std::string,std::map<std::string,std::map<std::string, float> > > pcdMap;
  std::map<std::string,std::map<std::string,std::map<std::string, float> > > timMap;

  std::string rootFileName = Output+"/TotChargeCalib.root";

  TFile roFile(rootFileName.c_str(),"RECREATE");
  TDirectory* roThrDir = roFile.mkdir("Threshold");
  TDirectory* roTotDir = roFile.mkdir("ToT");

  FILE *outputfile;
  std::string summaryName = getDatetodayStr();
  summaryName += "_CalibSummary.txt";

  outputfile = fopen(summaryName.c_str(), "w");
  if (outputfile == NULL) {
    printf("cannot open\n");
    exit(1);
  }

  if (!inThrFile.empty()) {
    //std::cout << std::endl << "INFO =>> threshold scan analysis..." << std::endl;

    TFile riThrFile(inThrFile.c_str(),"READ");
    TString chi2HistName = "SCURVE_CHI2";
    TString thrHistName = "SCURVE_MEAN";
    TString sigHistName = "SCURVE_SIGMA";
    //std::map<TString,TH2F*> chi2HistMap;
    //std::map<TString,TH2F*> thrHistMap;
    //std::map<TString,TH2F*> sigHistMap;
    TH1F h1dChi2("h1dChi2","",200,0,1);
    TH1F h1dThr("h1dThr","",200,0,6000);
    TH1F h1dSig("h1dSig","",200,0,500);

    TDirectoryFile* scanDir = (TDirectoryFile*)((TKey*)riThrFile.GetListOfKeys()->First())->ReadObj();
    TList* rodKeyList = (TList*)scanDir->GetListOfKeys();
    TIter rodItr(rodKeyList);
    TKey* rodKey;
    while ((rodKey=(TKey*)rodItr())) {
      TString rodName(rodKey->GetName());
      TDirectoryFile* rodDir = (TDirectoryFile*)rodKey->ReadObj();
      TList* modKeyList = (TList*)rodDir->GetListOfKeys();
      TIter modItr(modKeyList);
      TKey* modKey;
      while ((modKey=(TKey*)modItr())) {
        TString modName(modKey->GetName());
        std::string modStr(modKey->GetName());
        if (modStr.substr(0,1) == "D")
        { // for FE-I3
          if (modName == "DSP_ERRORS")
          {
            continue;
          }

          // get module map
          int hashID = -1;
          int bec = -1;
          int layer = -1;
          int phi_module = -1;
          int eta_module = -1;
          pixelMapping(modStr, &hashID, &bec, &layer, &phi_module, &eta_module);

          TString st(modName(3, 3));
          TString chi2HistDirPath = modName + "/" + chi2HistName + "/A0/B0";
          TDirectoryFile *chi2HistDir = (TDirectoryFile *)rodDir->Get(chi2HistDirPath);
          TH2F *h2dChi2 = (TH2F *)((TKey *)chi2HistDir->GetListOfKeys()->First())->ReadObj();
          //chi2HistMap[modName] = h2dChi2;
          TString thrHistDirPath = modName + "/" + thrHistName + "/A0/B0";
          TDirectoryFile *thrHistDir = (TDirectoryFile *)rodDir->Get(thrHistDirPath);
          TH2F *h2dThr = (TH2F *)((TKey *)thrHistDir->GetListOfKeys()->First())->ReadObj();
          //thrHistMap[modName] = h2dThr;
          TString sigHistDirPath = modName + "/" + sigHistName + "/A0/B0";
          TDirectoryFile *sigHistDir = (TDirectoryFile *)rodDir->Get(sigHistDirPath);
          TH2F *h2dSig = (TH2F *)((TKey *)sigHistDir->GetListOfKeys()->First())->ReadObj();
          //sigHistMap[modName] = h2dSig;

          TH1F h1dThrNormI0("h1dThrNormI0", "", 200, 0, 6000);
          TH1F h1dThrNormI1("h1dThrNormI1", "", 200, 0, 6000);
          TH1F h1dThrNormI2("h1dThrNormI2", "", 200, 0, 6000);
          TH1F h1dThrNormI3("h1dThrNormI3", "", 200, 0, 6000);
          TH1F h1dThrNormI4("h1dThrNormI4", "", 200, 0, 6000);
          TH1F h1dThrNormI5("h1dThrNormI5", "", 200, 0, 6000);
          TH1F h1dThrNormI6("h1dThrNormI6", "", 200, 0, 6000);
          TH1F h1dThrNormI7("h1dThrNormI7", "", 200, 0, 6000);
          TH1F h1dThrNormI8("h1dThrNormI8", "", 200, 0, 6000);
          TH1F h1dThrNormI9("h1dThrNormI9", "", 200, 0, 6000);
          TH1F h1dThrNormI10("h1dThrNormI10", "", 200, 0, 6000);
          TH1F h1dThrNormI11("h1dThrNormI11", "", 200, 0, 6000);
          TH1F h1dThrNormI12("h1dThrNormI12", "", 200, 0, 6000);
          TH1F h1dThrNormI13("h1dThrNormI13", "", 200, 0, 6000);
          TH1F h1dThrNormI14("h1dThrNormI14", "", 200, 0, 6000);
          TH1F h1dThrNormI15("h1dThrNormI15", "", 200, 0, 6000);
          TH1F h1dSigNormI0("h1dSigNormI0", "", 200, 0, 500);
          TH1F h1dSigNormI1("h1dSigNormI1", "", 200, 0, 500);
          TH1F h1dSigNormI2("h1dSigNormI2", "", 200, 0, 500);
          TH1F h1dSigNormI3("h1dSigNormI3", "", 200, 0, 500);
          TH1F h1dSigNormI4("h1dSigNormI4", "", 200, 0, 500);
          TH1F h1dSigNormI5("h1dSigNormI5", "", 200, 0, 500);
          TH1F h1dSigNormI6("h1dSigNormI6", "", 200, 0, 500);
          TH1F h1dSigNormI7("h1dSigNormI7", "", 200, 0, 500);
          TH1F h1dSigNormI8("h1dSigNormI8", "", 200, 0, 500);
          TH1F h1dSigNormI9("h1dSigNormI9", "", 200, 0, 500);
          TH1F h1dSigNormI10("h1dSigNormI10", "", 200, 0, 500);
          TH1F h1dSigNormI11("h1dSigNormI11", "", 200, 0, 500);
          TH1F h1dSigNormI12("h1dSigNormI12", "", 200, 0, 500);
          TH1F h1dSigNormI13("h1dSigNormI13", "", 200, 0, 500);
          TH1F h1dSigNormI14("h1dSigNormI14", "", 200, 0, 500);
          TH1F h1dSigNormI15("h1dSigNormI15", "", 200, 0, 500);

          TH1F h1dThrLongI0("h1dThrLongI0", "", 200, 0, 6000);
          TH1F h1dThrLongI1("h1dThrLongI1", "", 200, 0, 6000);
          TH1F h1dThrLongI2("h1dThrLongI2", "", 200, 0, 6000);
          TH1F h1dThrLongI3("h1dThrLongI3", "", 200, 0, 6000);
          TH1F h1dThrLongI4("h1dThrLongI4", "", 200, 0, 6000);
          TH1F h1dThrLongI5("h1dThrLongI5", "", 200, 0, 6000);
          TH1F h1dThrLongI6("h1dThrLongI6", "", 200, 0, 6000);
          TH1F h1dThrLongI7("h1dThrLongI7", "", 200, 0, 6000);
          TH1F h1dThrLongI8("h1dThrLongI8", "", 200, 0, 6000);
          TH1F h1dThrLongI9("h1dThrLongI9", "", 200, 0, 6000);
          TH1F h1dThrLongI10("h1dThrLongI10", "", 200, 0, 6000);
          TH1F h1dThrLongI11("h1dThrLongI11", "", 200, 0, 6000);
          TH1F h1dThrLongI12("h1dThrLongI12", "", 200, 0, 6000);
          TH1F h1dThrLongI13("h1dThrLongI13", "", 200, 0, 6000);
          TH1F h1dThrLongI14("h1dThrLongI14", "", 200, 0, 6000);
          TH1F h1dThrLongI15("h1dThrLongI15", "", 200, 0, 6000);
          TH1F h1dSigLongI0("h1dSigLongI0", "", 200, 0, 500);
          TH1F h1dSigLongI1("h1dSigLongI1", "", 200, 0, 500);
          TH1F h1dSigLongI2("h1dSigLongI2", "", 200, 0, 500);
          TH1F h1dSigLongI3("h1dSigLongI3", "", 200, 0, 500);
          TH1F h1dSigLongI4("h1dSigLongI4", "", 200, 0, 500);
          TH1F h1dSigLongI5("h1dSigLongI5", "", 200, 0, 500);
          TH1F h1dSigLongI6("h1dSigLongI6", "", 200, 0, 500);
          TH1F h1dSigLongI7("h1dSigLongI7", "", 200, 0, 500);
          TH1F h1dSigLongI8("h1dSigLongI8", "", 200, 0, 500);
          TH1F h1dSigLongI9("h1dSigLongI9", "", 200, 0, 500);
          TH1F h1dSigLongI10("h1dSigLongI10", "", 200, 0, 500);
          TH1F h1dSigLongI11("h1dSigLongI11", "", 200, 0, 500);
          TH1F h1dSigLongI12("h1dSigLongI12", "", 200, 0, 500);
          TH1F h1dSigLongI13("h1dSigLongI13", "", 200, 0, 500);
          TH1F h1dSigLongI14("h1dSigLongI14", "", 200, 0, 500);
          TH1F h1dSigLongI15("h1dSigLongI15", "", 200, 0, 500);

          TH1F h1dThrGangI0("h1dThrGangI0", "", 200, 0, 6000);
          TH1F h1dThrGangI1("h1dThrGangI1", "", 200, 0, 6000);
          TH1F h1dThrGangI2("h1dThrGangI2", "", 200, 0, 6000);
          TH1F h1dThrGangI3("h1dThrGangI3", "", 200, 0, 6000);
          TH1F h1dThrGangI4("h1dThrGangI4", "", 200, 0, 6000);
          TH1F h1dThrGangI5("h1dThrGangI5", "", 200, 0, 6000);
          TH1F h1dThrGangI6("h1dThrGangI6", "", 200, 0, 6000);
          TH1F h1dThrGangI7("h1dThrGangI7", "", 200, 0, 6000);
          TH1F h1dThrGangI8("h1dThrGangI8", "", 200, 0, 6000);
          TH1F h1dThrGangI9("h1dThrGangI9", "", 200, 0, 6000);
          TH1F h1dThrGangI10("h1dThrGangI10", "", 200, 0, 6000);
          TH1F h1dThrGangI11("h1dThrGangI11", "", 200, 0, 6000);
          TH1F h1dThrGangI12("h1dThrGangI12", "", 200, 0, 6000);
          TH1F h1dThrGangI13("h1dThrGangI13", "", 200, 0, 6000);
          TH1F h1dThrGangI14("h1dThrGangI14", "", 200, 0, 6000);
          TH1F h1dThrGangI15("h1dThrGangI15", "", 200, 0, 6000);
          TH1F h1dSigGangI0("h1dSigGangI0", "", 200, 0, 500);
          TH1F h1dSigGangI1("h1dSigGangI1", "", 200, 0, 500);
          TH1F h1dSigGangI2("h1dSigGangI2", "", 200, 0, 500);
          TH1F h1dSigGangI3("h1dSigGangI3", "", 200, 0, 500);
          TH1F h1dSigGangI4("h1dSigGangI4", "", 200, 0, 500);
          TH1F h1dSigGangI5("h1dSigGangI5", "", 200, 0, 500);
          TH1F h1dSigGangI6("h1dSigGangI6", "", 200, 0, 500);
          TH1F h1dSigGangI7("h1dSigGangI7", "", 200, 0, 500);
          TH1F h1dSigGangI8("h1dSigGangI8", "", 200, 0, 500);
          TH1F h1dSigGangI9("h1dSigGangI9", "", 200, 0, 500);
          TH1F h1dSigGangI10("h1dSigGangI10", "", 200, 0, 500);
          TH1F h1dSigGangI11("h1dSigGangI11", "", 200, 0, 500);
          TH1F h1dSigGangI12("h1dSigGangI12", "", 200, 0, 500);
          TH1F h1dSigGangI13("h1dSigGangI13", "", 200, 0, 500);
          TH1F h1dSigGangI14("h1dSigGangI14", "", 200, 0, 500);
          TH1F h1dSigGangI15("h1dSigGangI15", "", 200, 0, 500);

          for (int ieta = 0; ieta < ncol; ieta++)
          {
            for (int iphi = 0; iphi < nrow; iphi++)
            {
              float chi2 = h2dChi2->GetBinContent(ieta + 1, iphi + 1);
              float thr = h2dThr->GetBinContent(ieta + 1, iphi + 1);
              float sig = h2dSig->GetBinContent(ieta + 1, iphi + 1);
              h1dChi2.Fill(chi2);
              h1dThr.Fill(thr);
              h1dSig.Fill(sig);

              if (thr == 0 || thr > 10000 || sig == 0 || sig > 1000)
                continue; // || chi2 > 0.5 || chi2 <= 0) continue;

              // Identify FE chip ID
              // Simply, in the calibration, the FEs are aligned from bottom left corner (0,0) with anti-clock-wise direction.
              int circ = -1;
              if (WhichPart != 0)
              {
                if (iphi < 160)
                {
                  circ = (int)(ieta / 18);
                } // FE0, FE1, ... FE7
                else
                {
                  circ = 15 - (int)(ieta / 18);
                } // FE15, FE14, ... FE8
              }
              else
              {
                if (ieta < 80)
                {
                  circ = 0;
                }
                else
                {
                  circ = 1;
                }
              }

              // normal pixels
              int pixtype = 0;
              if (WhichPart != 0)
              {
                if (ieta % 18 == 0 || ieta % 18 == 17)
                {
                  pixtype = 1;
                } // define long pixels
                if (iphi > 152 && iphi < 160 && iphi % 2 == 1)
                {
                  pixtype = 2;
                } // define ganged pixels
                if (iphi > 159 && iphi < 167 && iphi % 2 == 0)
                {
                  pixtype = 2;
                }
              }
              // IBL
              else
              {
                if (ieta == 0 || ieta == 79 || ieta == 80 || ieta == 159)
                {
                  pixtype = 1;
                } // define long pixels
              }

              //==================
              // Fill information
              //==================
              if (pixtype == 1)
              {
                if (circ == 0)
                {
                  h1dThrLongI0.Fill(thr);
                  h1dSigLongI0.Fill(sig);
                }
                else if (circ == 1)
                {
                  h1dThrLongI1.Fill(thr);
                  h1dSigLongI1.Fill(sig);
                }
                else if (circ == 2)
                {
                  h1dThrLongI2.Fill(thr);
                  h1dSigLongI2.Fill(sig);
                }
                else if (circ == 3)
                {
                  h1dThrLongI3.Fill(thr);
                  h1dSigLongI3.Fill(sig);
                }
                else if (circ == 4)
                {
                  h1dThrLongI4.Fill(thr);
                  h1dSigLongI4.Fill(sig);
                }
                else if (circ == 5)
                {
                  h1dThrLongI5.Fill(thr);
                  h1dSigLongI5.Fill(sig);
                }
                else if (circ == 6)
                {
                  h1dThrLongI6.Fill(thr);
                  h1dSigLongI6.Fill(sig);
                }
                else if (circ == 7)
                {
                  h1dThrLongI7.Fill(thr);
                  h1dSigLongI7.Fill(sig);
                }
                else if (circ == 8)
                {
                  h1dThrLongI8.Fill(thr);
                  h1dSigLongI8.Fill(sig);
                }
                else if (circ == 9)
                {
                  h1dThrLongI9.Fill(thr);
                  h1dSigLongI9.Fill(sig);
                }
                else if (circ == 10)
                {
                  h1dThrLongI10.Fill(thr);
                  h1dSigLongI10.Fill(sig);
                }
                else if (circ == 11)
                {
                  h1dThrLongI11.Fill(thr);
                  h1dSigLongI11.Fill(sig);
                }
                else if (circ == 12)
                {
                  h1dThrLongI12.Fill(thr);
                  h1dSigLongI12.Fill(sig);
                }
                else if (circ == 13)
                {
                  h1dThrLongI13.Fill(thr);
                  h1dSigLongI13.Fill(sig);
                }
                else if (circ == 14)
                {
                  h1dThrLongI14.Fill(thr);
                  h1dSigLongI14.Fill(sig);
                }
                else if (circ == 15)
                {
                  h1dThrLongI15.Fill(thr);
                  h1dSigLongI15.Fill(sig);
                }
              }
              else if (pixtype == 0)
              {
                if (circ == 0)
                {
                  h1dThrNormI0.Fill(thr);
                  h1dSigNormI0.Fill(sig);
                }
                else if (circ == 1)
                {
                  h1dThrNormI1.Fill(thr);
                  h1dSigNormI1.Fill(sig);
                }
                else if (circ == 2)
                {
                  h1dThrNormI2.Fill(thr);
                  h1dSigNormI2.Fill(sig);
                }
                else if (circ == 3)
                {
                  h1dThrNormI3.Fill(thr);
                  h1dSigNormI3.Fill(sig);
                }
                else if (circ == 4)
                {
                  h1dThrNormI4.Fill(thr);
                  h1dSigNormI4.Fill(sig);
                }
                else if (circ == 5)
                {
                  h1dThrNormI5.Fill(thr);
                  h1dSigNormI5.Fill(sig);
                }
                else if (circ == 6)
                {
                  h1dThrNormI6.Fill(thr);
                  h1dSigNormI6.Fill(sig);
                }
                else if (circ == 7)
                {
                  h1dThrNormI7.Fill(thr);
                  h1dSigNormI7.Fill(sig);
                }
                else if (circ == 8)
                {
                  h1dThrNormI8.Fill(thr);
                  h1dSigNormI8.Fill(sig);
                }
                else if (circ == 9)
                {
                  h1dThrNormI9.Fill(thr);
                  h1dSigNormI9.Fill(sig);
                }
                else if (circ == 10)
                {
                  h1dThrNormI10.Fill(thr);
                  h1dSigNormI10.Fill(sig);
                }
                else if (circ == 11)
                {
                  h1dThrNormI11.Fill(thr);
                  h1dSigNormI11.Fill(sig);
                }
                else if (circ == 12)
                {
                  h1dThrNormI12.Fill(thr);
                  h1dSigNormI12.Fill(sig);
                }
                else if (circ == 13)
                {
                  h1dThrNormI13.Fill(thr);
                  h1dSigNormI13.Fill(sig);
                }
                else if (circ == 14)
                {
                  h1dThrNormI14.Fill(thr);
                  h1dSigNormI14.Fill(sig);
                }
                else if (circ == 15)
                {
                  h1dThrNormI15.Fill(thr);
                  h1dSigNormI15.Fill(sig);
                }
              }
              else if (pixtype == 2)
              {
                if (circ == 0)
                {
                  h1dThrGangI0.Fill(thr);
                  h1dSigGangI0.Fill(sig);
                }
                else if (circ == 1)
                {
                  h1dThrGangI1.Fill(thr);
                  h1dSigGangI1.Fill(sig);
                }
                else if (circ == 2)
                {
                  h1dThrGangI2.Fill(thr);
                  h1dSigGangI2.Fill(sig);
                }
                else if (circ == 3)
                {
                  h1dThrGangI3.Fill(thr);
                  h1dSigGangI3.Fill(sig);
                }
                else if (circ == 4)
                {
                  h1dThrGangI4.Fill(thr);
                  h1dSigGangI4.Fill(sig);
                }
                else if (circ == 5)
                {
                  h1dThrGangI5.Fill(thr);
                  h1dSigGangI5.Fill(sig);
                }
                else if (circ == 6)
                {
                  h1dThrGangI6.Fill(thr);
                  h1dSigGangI6.Fill(sig);
                }
                else if (circ == 7)
                {
                  h1dThrGangI7.Fill(thr);
                  h1dSigGangI7.Fill(sig);
                }
                else if (circ == 8)
                {
                  h1dThrGangI8.Fill(thr);
                  h1dSigGangI8.Fill(sig);
                }
                else if (circ == 9)
                {
                  h1dThrGangI9.Fill(thr);
                  h1dSigGangI9.Fill(sig);
                }
                else if (circ == 10)
                {
                  h1dThrGangI10.Fill(thr);
                  h1dSigGangI10.Fill(sig);
                }
                else if (circ == 11)
                {
                  h1dThrGangI11.Fill(thr);
                  h1dSigGangI11.Fill(sig);
                }
                else if (circ == 12)
                {
                  h1dThrGangI12.Fill(thr);
                  h1dSigGangI12.Fill(sig);
                }
                else if (circ == 13)
                {
                  h1dThrGangI13.Fill(thr);
                  h1dSigGangI13.Fill(sig);
                }
                else if (circ == 14)
                {
                  h1dThrGangI14.Fill(thr);
                  h1dSigGangI14.Fill(sig);
                }
                else if (circ == 15)
                {
                  h1dThrGangI15.Fill(thr);
                  h1dSigGangI15.Fill(sig);
                }
              }
            }
          }

          pcdMap[modStr]["I0"]["ThrNorm"] = h1dThrNormI0.GetMean();
          pcdMap[modStr]["I0"]["ThrRmsNorm"] = h1dThrNormI0.GetRMS();
          pcdMap[modStr]["I0"]["ThrSigNorm"] = h1dSigNormI0.GetMean();
          pcdMap[modStr]["I1"]["ThrNorm"] = h1dThrNormI1.GetMean();
          pcdMap[modStr]["I1"]["ThrRmsNorm"] = h1dThrNormI1.GetRMS();
          pcdMap[modStr]["I1"]["ThrSigNorm"] = h1dSigNormI1.GetMean();
          pcdMap[modStr]["I2"]["ThrNorm"] = h1dThrNormI2.GetMean();
          pcdMap[modStr]["I2"]["ThrRmsNorm"] = h1dThrNormI2.GetRMS();
          pcdMap[modStr]["I2"]["ThrSigNorm"] = h1dSigNormI2.GetMean();
          pcdMap[modStr]["I3"]["ThrNorm"] = h1dThrNormI3.GetMean();
          pcdMap[modStr]["I3"]["ThrRmsNorm"] = h1dThrNormI3.GetRMS();
          pcdMap[modStr]["I3"]["ThrSigNorm"] = h1dSigNormI3.GetMean();
          pcdMap[modStr]["I4"]["ThrNorm"] = h1dThrNormI4.GetMean();
          pcdMap[modStr]["I4"]["ThrRmsNorm"] = h1dThrNormI4.GetRMS();
          pcdMap[modStr]["I4"]["ThrSigNorm"] = h1dSigNormI4.GetMean();
          pcdMap[modStr]["I5"]["ThrNorm"] = h1dThrNormI5.GetMean();
          pcdMap[modStr]["I5"]["ThrRmsNorm"] = h1dThrNormI5.GetRMS();
          pcdMap[modStr]["I5"]["ThrSigNorm"] = h1dSigNormI5.GetMean();
          pcdMap[modStr]["I6"]["ThrNorm"] = h1dThrNormI6.GetMean();
          pcdMap[modStr]["I6"]["ThrRmsNorm"] = h1dThrNormI6.GetRMS();
          pcdMap[modStr]["I6"]["ThrSigNorm"] = h1dSigNormI6.GetMean();
          pcdMap[modStr]["I7"]["ThrNorm"] = h1dThrNormI7.GetMean();
          pcdMap[modStr]["I7"]["ThrRmsNorm"] = h1dThrNormI7.GetRMS();
          pcdMap[modStr]["I7"]["ThrSigNorm"] = h1dSigNormI7.GetMean();
          pcdMap[modStr]["I8"]["ThrNorm"] = h1dThrNormI8.GetMean();
          pcdMap[modStr]["I8"]["ThrRmsNorm"] = h1dThrNormI8.GetRMS();
          pcdMap[modStr]["I8"]["ThrSigNorm"] = h1dSigNormI8.GetMean();
          pcdMap[modStr]["I9"]["ThrNorm"] = h1dThrNormI9.GetMean();
          pcdMap[modStr]["I9"]["ThrRmsNorm"] = h1dThrNormI9.GetRMS();
          pcdMap[modStr]["I9"]["ThrSigNorm"] = h1dSigNormI9.GetMean();
          pcdMap[modStr]["I10"]["ThrNorm"] = h1dThrNormI10.GetMean();
          pcdMap[modStr]["I10"]["ThrRmsNorm"] = h1dThrNormI10.GetRMS();
          pcdMap[modStr]["I10"]["ThrSigNorm"] = h1dSigNormI10.GetMean();
          pcdMap[modStr]["I11"]["ThrNorm"] = h1dThrNormI11.GetMean();
          pcdMap[modStr]["I11"]["ThrRmsNorm"] = h1dThrNormI11.GetRMS();
          pcdMap[modStr]["I11"]["ThrSigNorm"] = h1dSigNormI11.GetMean();
          pcdMap[modStr]["I12"]["ThrNorm"] = h1dThrNormI12.GetMean();
          pcdMap[modStr]["I12"]["ThrRmsNorm"] = h1dThrNormI12.GetRMS();
          pcdMap[modStr]["I12"]["ThrSigNorm"] = h1dSigNormI12.GetMean();
          pcdMap[modStr]["I13"]["ThrNorm"] = h1dThrNormI13.GetMean();
          pcdMap[modStr]["I13"]["ThrRmsNorm"] = h1dThrNormI13.GetRMS();
          pcdMap[modStr]["I13"]["ThrSigNorm"] = h1dSigNormI13.GetMean();
          pcdMap[modStr]["I14"]["ThrNorm"] = h1dThrNormI14.GetMean();
          pcdMap[modStr]["I14"]["ThrRmsNorm"] = h1dThrNormI14.GetRMS();
          pcdMap[modStr]["I14"]["ThrSigNorm"] = h1dSigNormI14.GetMean();
          pcdMap[modStr]["I15"]["ThrNorm"] = h1dThrNormI15.GetMean();
          pcdMap[modStr]["I15"]["ThrRmsNorm"] = h1dThrNormI15.GetRMS();
          pcdMap[modStr]["I15"]["ThrSigNorm"] = h1dSigNormI15.GetMean();

          pcdMap[modStr]["I0"]["ThrLong"] = h1dThrLongI0.GetMean();
          pcdMap[modStr]["I0"]["ThrRmsLong"] = h1dThrLongI0.GetRMS();
          pcdMap[modStr]["I0"]["ThrSigLong"] = h1dSigLongI0.GetMean();
          pcdMap[modStr]["I1"]["ThrLong"] = h1dThrLongI1.GetMean();
          pcdMap[modStr]["I1"]["ThrRmsLong"] = h1dThrLongI1.GetRMS();
          pcdMap[modStr]["I1"]["ThrSigLong"] = h1dSigLongI1.GetMean();
          pcdMap[modStr]["I2"]["ThrLong"] = h1dThrLongI2.GetMean();
          pcdMap[modStr]["I2"]["ThrRmsLong"] = h1dThrLongI2.GetRMS();
          pcdMap[modStr]["I2"]["ThrSigLong"] = h1dSigLongI2.GetMean();
          pcdMap[modStr]["I3"]["ThrLong"] = h1dThrLongI3.GetMean();
          pcdMap[modStr]["I3"]["ThrRmsLong"] = h1dThrLongI3.GetRMS();
          pcdMap[modStr]["I3"]["ThrSigLong"] = h1dSigLongI3.GetMean();
          pcdMap[modStr]["I4"]["ThrLong"] = h1dThrLongI4.GetMean();
          pcdMap[modStr]["I4"]["ThrRmsLong"] = h1dThrLongI4.GetRMS();
          pcdMap[modStr]["I4"]["ThrSigLong"] = h1dSigLongI4.GetMean();
          pcdMap[modStr]["I5"]["ThrLong"] = h1dThrLongI5.GetMean();
          pcdMap[modStr]["I5"]["ThrRmsLong"] = h1dThrLongI5.GetRMS();
          pcdMap[modStr]["I5"]["ThrSigLong"] = h1dSigLongI5.GetMean();
          pcdMap[modStr]["I6"]["ThrLong"] = h1dThrLongI6.GetMean();
          pcdMap[modStr]["I6"]["ThrRmsLong"] = h1dThrLongI6.GetRMS();
          pcdMap[modStr]["I6"]["ThrSigLong"] = h1dSigLongI6.GetMean();
          pcdMap[modStr]["I7"]["ThrLong"] = h1dThrLongI7.GetMean();
          pcdMap[modStr]["I7"]["ThrRmsLong"] = h1dThrLongI7.GetRMS();
          pcdMap[modStr]["I7"]["ThrSigLong"] = h1dSigLongI7.GetMean();
          pcdMap[modStr]["I8"]["ThrLong"] = h1dThrLongI8.GetMean();
          pcdMap[modStr]["I8"]["ThrRmsLong"] = h1dThrLongI8.GetRMS();
          pcdMap[modStr]["I8"]["ThrSigLong"] = h1dSigLongI8.GetMean();
          pcdMap[modStr]["I9"]["ThrLong"] = h1dThrLongI9.GetMean();
          pcdMap[modStr]["I9"]["ThrRmsLong"] = h1dThrLongI9.GetRMS();
          pcdMap[modStr]["I9"]["ThrSigLong"] = h1dSigLongI9.GetMean();
          pcdMap[modStr]["I10"]["ThrLong"] = h1dThrLongI10.GetMean();
          pcdMap[modStr]["I10"]["ThrRmsLong"] = h1dThrLongI10.GetRMS();
          pcdMap[modStr]["I10"]["ThrSigLong"] = h1dSigLongI10.GetMean();
          pcdMap[modStr]["I11"]["ThrLong"] = h1dThrLongI11.GetMean();
          pcdMap[modStr]["I11"]["ThrRmsLong"] = h1dThrLongI11.GetRMS();
          pcdMap[modStr]["I11"]["ThrSigLong"] = h1dSigLongI11.GetMean();
          pcdMap[modStr]["I12"]["ThrLong"] = h1dThrLongI12.GetMean();
          pcdMap[modStr]["I12"]["ThrRmsLong"] = h1dThrLongI12.GetRMS();
          pcdMap[modStr]["I12"]["ThrSigLong"] = h1dSigLongI12.GetMean();
          pcdMap[modStr]["I13"]["ThrLong"] = h1dThrLongI13.GetMean();
          pcdMap[modStr]["I13"]["ThrRmsLong"] = h1dThrLongI13.GetRMS();
          pcdMap[modStr]["I13"]["ThrSigLong"] = h1dSigLongI13.GetMean();
          pcdMap[modStr]["I14"]["ThrLong"] = h1dThrLongI14.GetMean();
          pcdMap[modStr]["I14"]["ThrRmsLong"] = h1dThrLongI14.GetRMS();
          pcdMap[modStr]["I14"]["ThrSigLong"] = h1dSigLongI14.GetMean();
          pcdMap[modStr]["I15"]["ThrLong"] = h1dThrLongI15.GetMean();
          pcdMap[modStr]["I15"]["ThrRmsLong"] = h1dThrLongI15.GetRMS();
          pcdMap[modStr]["I15"]["ThrSigLong"] = h1dSigLongI15.GetMean();

          pcdMap[modStr]["I0"]["ThrGang"] = h1dThrGangI0.GetMean();
          pcdMap[modStr]["I0"]["ThrRmsGang"] = h1dThrGangI0.GetRMS();
          pcdMap[modStr]["I0"]["ThrSigGang"] = h1dSigGangI0.GetMean();
          pcdMap[modStr]["I1"]["ThrGang"] = h1dThrGangI1.GetMean();
          pcdMap[modStr]["I1"]["ThrRmsGang"] = h1dThrGangI1.GetRMS();
          pcdMap[modStr]["I1"]["ThrSigGang"] = h1dSigGangI1.GetMean();
          pcdMap[modStr]["I2"]["ThrGang"] = h1dThrGangI2.GetMean();
          pcdMap[modStr]["I2"]["ThrRmsGang"] = h1dThrGangI2.GetRMS();
          pcdMap[modStr]["I2"]["ThrSigGang"] = h1dSigGangI2.GetMean();
          pcdMap[modStr]["I3"]["ThrGang"] = h1dThrGangI3.GetMean();
          pcdMap[modStr]["I3"]["ThrRmsGang"] = h1dThrGangI3.GetRMS();
          pcdMap[modStr]["I3"]["ThrSigGang"] = h1dSigGangI3.GetMean();
          pcdMap[modStr]["I4"]["ThrGang"] = h1dThrGangI4.GetMean();
          pcdMap[modStr]["I4"]["ThrRmsGang"] = h1dThrGangI4.GetRMS();
          pcdMap[modStr]["I4"]["ThrSigGang"] = h1dSigGangI4.GetMean();
          pcdMap[modStr]["I5"]["ThrGang"] = h1dThrGangI5.GetMean();
          pcdMap[modStr]["I5"]["ThrRmsGang"] = h1dThrGangI5.GetRMS();
          pcdMap[modStr]["I5"]["ThrSigGang"] = h1dSigGangI5.GetMean();
          pcdMap[modStr]["I6"]["ThrGang"] = h1dThrGangI6.GetMean();
          pcdMap[modStr]["I6"]["ThrRmsGang"] = h1dThrGangI6.GetRMS();
          pcdMap[modStr]["I6"]["ThrSigGang"] = h1dSigGangI6.GetMean();
          pcdMap[modStr]["I7"]["ThrGang"] = h1dThrGangI7.GetMean();
          pcdMap[modStr]["I7"]["ThrRmsGang"] = h1dThrGangI7.GetRMS();
          pcdMap[modStr]["I7"]["ThrSigGang"] = h1dSigGangI7.GetMean();
          pcdMap[modStr]["I8"]["ThrGang"] = h1dThrGangI8.GetMean();
          pcdMap[modStr]["I8"]["ThrRmsGang"] = h1dThrGangI8.GetRMS();
          pcdMap[modStr]["I8"]["ThrSigGang"] = h1dSigGangI8.GetMean();
          pcdMap[modStr]["I9"]["ThrGang"] = h1dThrGangI9.GetMean();
          pcdMap[modStr]["I9"]["ThrRmsGang"] = h1dThrGangI9.GetRMS();
          pcdMap[modStr]["I9"]["ThrSigGang"] = h1dSigGangI9.GetMean();
          pcdMap[modStr]["I10"]["ThrGang"] = h1dThrGangI10.GetMean();
          pcdMap[modStr]["I10"]["ThrRmsGang"] = h1dThrGangI10.GetRMS();
          pcdMap[modStr]["I10"]["ThrSigGang"] = h1dSigGangI10.GetMean();
          pcdMap[modStr]["I11"]["ThrGang"] = h1dThrGangI11.GetMean();
          pcdMap[modStr]["I11"]["ThrRmsGang"] = h1dThrGangI11.GetRMS();
          pcdMap[modStr]["I11"]["ThrSigGang"] = h1dSigGangI11.GetMean();
          pcdMap[modStr]["I12"]["ThrGang"] = h1dThrGangI12.GetMean();
          pcdMap[modStr]["I12"]["ThrRmsGang"] = h1dThrGangI12.GetRMS();
          pcdMap[modStr]["I12"]["ThrSigGang"] = h1dSigGangI12.GetMean();
          pcdMap[modStr]["I13"]["ThrGang"] = h1dThrGangI13.GetMean();
          pcdMap[modStr]["I13"]["ThrRmsGang"] = h1dThrGangI13.GetRMS();
          pcdMap[modStr]["I13"]["ThrSigGang"] = h1dSigGangI13.GetMean();
          pcdMap[modStr]["I14"]["ThrGang"] = h1dThrGangI14.GetMean();
          pcdMap[modStr]["I14"]["ThrRmsGang"] = h1dThrGangI14.GetRMS();
          pcdMap[modStr]["I14"]["ThrSigGang"] = h1dSigGangI14.GetMean();
          pcdMap[modStr]["I15"]["ThrGang"] = h1dThrGangI15.GetMean();
          pcdMap[modStr]["I15"]["ThrRmsGang"] = h1dThrGangI15.GetRMS();
          pcdMap[modStr]["I15"]["ThrSigGang"] = h1dSigGangI15.GetMean();
        }
      }
    }
    roThrDir->WriteTObject(&h1dChi2);
    roThrDir->WriteTObject(&h1dThr);
    roThrDir->WriteTObject(&h1dSig);

  }

  if (!inTimFile.empty()) {
    TFile riTimFile(inTimFile.c_str(),"READ");

    TString timHistName = "SCURVE_MEAN";

    TDirectoryFile* scanDir = (TDirectoryFile*)((TKey*)riTimFile.GetListOfKeys()->First())->ReadObj();
    TList* rodKeyList = (TList*)scanDir->GetListOfKeys();
    TIter rodItr(rodKeyList);
    TKey* rodKey;
    while ((rodKey=(TKey*)rodItr())) {
      TString rodName(rodKey->GetName());
      TDirectoryFile* rodDir = (TDirectoryFile*)rodKey->ReadObj();
      TList* modKeyList = (TList*)rodDir->GetListOfKeys();
      TIter modItr(modKeyList);
      TKey* modKey;
      while ((modKey=(TKey*)modItr())) {
        TString modName(modKey->GetName());
        std::string modStr(modKey->GetName());
        if (modName=="DSP_ERRORS") { continue; }

        // get module map
        int hashID = -1;
        int bec = -1;
        int layer = -1;
        int phi_module = -1;
        int eta_module = -1;
        pixelMapping(modStr, &hashID, &bec, &layer, &phi_module, &eta_module);

        if (pcdMap.find(modStr) == pcdMap.end()) continue;

        TString st(modName(3,3));
        TString timHistDirPath = modName + "/" + timHistName + "/A0/B0";
        TDirectoryFile* timHistDir = (TDirectoryFile*)rodDir->Get(timHistDirPath);
        TH2F* h2dTim = (TH2F*)((TKey*)timHistDir->GetListOfKeys()->First())->ReadObj();

        TH1F h1dTimNormI0("h1dTimNormI0","",200,3000,7000);
        TH1F h1dTimNormI1("h1dTimNormI1","",200,3000,7000);
        TH1F h1dTimNormI2("h1dTimNormI2","",200,3000,7000);
        TH1F h1dTimNormI3("h1dTimNormI3","",200,3000,7000);
        TH1F h1dTimNormI4("h1dTimNormI4","",200,3000,7000);
        TH1F h1dTimNormI5("h1dTimNormI5","",200,3000,7000);
        TH1F h1dTimNormI6("h1dTimNormI6","",200,3000,7000);
        TH1F h1dTimNormI7("h1dTimNormI7","",200,3000,7000);
        TH1F h1dTimNormI8("h1dTimNormI8","",200,3000,7000);
        TH1F h1dTimNormI9("h1dTimNormI9","",200,3000,7000);
        TH1F h1dTimNormI10("h1dTimNormI10","",200,3000,7000);
        TH1F h1dTimNormI11("h1dTimNormI11","",200,3000,7000);
        TH1F h1dTimNormI12("h1dTimNormI12","",200,3000,7000);
        TH1F h1dTimNormI13("h1dTimNormI13","",200,3000,7000);
        TH1F h1dTimNormI14("h1dTimNormI14","",200,3000,7000);
        TH1F h1dTimNormI15("h1dTimNormI15","",200,3000,7000);

        TH1F h1dTimLongI0("h1dTimLongI0","",200,3000,7000);
        TH1F h1dTimLongI1("h1dTimLongI1","",200,3000,7000);
        TH1F h1dTimLongI2("h1dTimLongI2","",200,3000,7000);
        TH1F h1dTimLongI3("h1dTimLongI3","",200,3000,7000);
        TH1F h1dTimLongI4("h1dTimLongI4","",200,3000,7000);
        TH1F h1dTimLongI5("h1dTimLongI5","",200,3000,7000);
        TH1F h1dTimLongI6("h1dTimLongI6","",200,3000,7000);
        TH1F h1dTimLongI7("h1dTimLongI7","",200,3000,7000);
        TH1F h1dTimLongI8("h1dTimLongI8","",200,3000,7000);
        TH1F h1dTimLongI9("h1dTimLongI9","",200,3000,7000);
        TH1F h1dTimLongI10("h1dTimLongI10","",200,3000,7000);
        TH1F h1dTimLongI11("h1dTimLongI11","",200,3000,7000);
        TH1F h1dTimLongI12("h1dTimLongI12","",200,3000,7000);
        TH1F h1dTimLongI13("h1dTimLongI13","",200,3000,7000);
        TH1F h1dTimLongI14("h1dTimLongI14","",200,3000,7000);
        TH1F h1dTimLongI15("h1dTimLongI15","",200,3000,7000);

        TH1F h1dTimGangI0("h1dTimGangI0","",200,3000,7000);
        TH1F h1dTimGangI1("h1dTimGangI1","",200,3000,7000);
        TH1F h1dTimGangI2("h1dTimGangI2","",200,3000,7000);
        TH1F h1dTimGangI3("h1dTimGangI3","",200,3000,7000);
        TH1F h1dTimGangI4("h1dTimGangI4","",200,3000,7000);
        TH1F h1dTimGangI5("h1dTimGangI5","",200,3000,7000);
        TH1F h1dTimGangI6("h1dTimGangI6","",200,3000,7000);
        TH1F h1dTimGangI7("h1dTimGangI7","",200,3000,7000);
        TH1F h1dTimGangI8("h1dTimGangI8","",200,3000,7000);
        TH1F h1dTimGangI9("h1dTimGangI9","",200,3000,7000);
        TH1F h1dTimGangI10("h1dTimGangI10","",200,3000,7000);
        TH1F h1dTimGangI11("h1dTimGangI11","",200,3000,7000);
        TH1F h1dTimGangI12("h1dTimGangI12","",200,3000,7000);
        TH1F h1dTimGangI13("h1dTimGangI13","",200,3000,7000);
        TH1F h1dTimGangI14("h1dTimGangI14","",200,3000,7000);
        TH1F h1dTimGangI15("h1dTimGangI15","",200,3000,7000);

        for (int ieta=0; ieta<ncol; ieta++) {
          for (int iphi=0; iphi<nrow; iphi++) {
            float tim = h2dTim->GetBinContent(ieta+1,iphi+1);

            if (tim<1) { continue; }

            // Identify FE chip ID
            // Simply, in the calibration, the FEs are aligned from bottom left corner (0,0) with anti-clock-wise direction.
            int circ = -1;
            if (WhichPart != 0)
            {
              if (iphi < 160)
              {
                circ = (int)(ieta / 18);
              } // FE0, FE1, ... FE7
              else
              {
                circ = 15 - (int)(ieta / 18);
              } // FE15, FE14, ... FE8
            }
            else
            {
              if (ieta < 80)
              {
                circ = 0;
              }
              else
              {
                circ = 1;
              }
            }

            // normal pixels
            int pixtype = 0;
            if (WhichPart != 0)
            {
              if (ieta % 18 == 0 || ieta % 18 == 17)
              {
                pixtype = 1;
              } // define long pixels
              if (iphi > 152 && iphi < 160 && iphi % 2 == 1)
              {
                pixtype = 2;
              } // define ganged pixels
              if (iphi > 159 && iphi < 167 && iphi % 2 == 0)
              {
                pixtype = 2;
              }
            }
            // IBL
            else
            {
              if (ieta == 0 || ieta == 79 || ieta == 80 || ieta == 159)
              {
                pixtype = 1;
              } // define long pixels
            }

            //==================
            // Fill information
            //==================
            if (pixtype==1) {
              if      (circ==0) { h1dTimLongI0.Fill(tim); }
              else if (circ==1) { h1dTimLongI1.Fill(tim); }
              else if (circ==2) { h1dTimLongI2.Fill(tim); }
              else if (circ==3) { h1dTimLongI3.Fill(tim); }
              else if (circ==4) { h1dTimLongI4.Fill(tim); }
              else if (circ==5) { h1dTimLongI5.Fill(tim); }
              else if (circ==6) { h1dTimLongI6.Fill(tim); }
              else if (circ==7) { h1dTimLongI7.Fill(tim); }
              else if (circ==8) { h1dTimLongI8.Fill(tim); }
              else if (circ==9) { h1dTimLongI9.Fill(tim); }
              else if (circ==10) { h1dTimLongI10.Fill(tim); }
              else if (circ==11) { h1dTimLongI11.Fill(tim); }
              else if (circ==12) { h1dTimLongI12.Fill(tim); }
              else if (circ==13) { h1dTimLongI13.Fill(tim); }
              else if (circ==14) { h1dTimLongI14.Fill(tim); }
              else if (circ==15) { h1dTimLongI15.Fill(tim); }
            }
            else if (pixtype==0) {
              if      (circ==0) { h1dTimNormI0.Fill(tim); }
              else if (circ==1) { h1dTimNormI1.Fill(tim); }
              else if (circ==2) { h1dTimNormI2.Fill(tim); }
              else if (circ==3) { h1dTimNormI3.Fill(tim); }
              else if (circ==4) { h1dTimNormI4.Fill(tim); }
              else if (circ==5) { h1dTimNormI5.Fill(tim); }
              else if (circ==6) { h1dTimNormI6.Fill(tim); }
              else if (circ==7) { h1dTimNormI7.Fill(tim); }
              else if (circ==8) { h1dTimNormI8.Fill(tim); }
              else if (circ==9) { h1dTimNormI9.Fill(tim); }
              else if (circ==10) { h1dTimNormI10.Fill(tim); }
              else if (circ==11) { h1dTimNormI11.Fill(tim); }
              else if (circ==12) { h1dTimNormI12.Fill(tim); }
              else if (circ==13) { h1dTimNormI13.Fill(tim); }
              else if (circ==14) { h1dTimNormI14.Fill(tim); }
              else if (circ==15) { h1dTimNormI15.Fill(tim); }
            }
            else if (pixtype==2) {
              if      (circ==0) { h1dTimGangI0.Fill(tim); }
              else if (circ==1) { h1dTimGangI1.Fill(tim); }
              else if (circ==2) { h1dTimGangI2.Fill(tim); }
              else if (circ==3) { h1dTimGangI3.Fill(tim); }
              else if (circ==4) { h1dTimGangI4.Fill(tim); }
              else if (circ==5) { h1dTimGangI5.Fill(tim); }
              else if (circ==6) { h1dTimGangI6.Fill(tim); }
              else if (circ==7) { h1dTimGangI7.Fill(tim); }
              else if (circ==8) { h1dTimGangI8.Fill(tim); }
              else if (circ==9) { h1dTimGangI9.Fill(tim); }
              else if (circ==10) { h1dTimGangI10.Fill(tim); }
              else if (circ==11) { h1dTimGangI11.Fill(tim); }
              else if (circ==12) { h1dTimGangI12.Fill(tim); }
              else if (circ==13) { h1dTimGangI13.Fill(tim); }
              else if (circ==14) { h1dTimGangI14.Fill(tim); }
              else if (circ==15) { h1dTimGangI15.Fill(tim); }
            }
          }
        }

        timMap[modStr]["I0"]["TimNorm"] = h1dTimNormI0.GetMean();
        timMap[modStr]["I1"]["TimNorm"] = h1dTimNormI1.GetMean();
        timMap[modStr]["I2"]["TimNorm"] = h1dTimNormI2.GetMean();
        timMap[modStr]["I3"]["TimNorm"] = h1dTimNormI3.GetMean();
        timMap[modStr]["I4"]["TimNorm"] = h1dTimNormI4.GetMean();
        timMap[modStr]["I5"]["TimNorm"] = h1dTimNormI5.GetMean();
        timMap[modStr]["I6"]["TimNorm"] = h1dTimNormI6.GetMean();
        timMap[modStr]["I7"]["TimNorm"] = h1dTimNormI7.GetMean();
        timMap[modStr]["I8"]["TimNorm"] = h1dTimNormI8.GetMean();
        timMap[modStr]["I9"]["TimNorm"] = h1dTimNormI9.GetMean();
        timMap[modStr]["I10"]["TimNorm"] = h1dTimNormI10.GetMean();
        timMap[modStr]["I11"]["TimNorm"] = h1dTimNormI11.GetMean();
        timMap[modStr]["I12"]["TimNorm"] = h1dTimNormI12.GetMean();
        timMap[modStr]["I13"]["TimNorm"] = h1dTimNormI13.GetMean();
        timMap[modStr]["I14"]["TimNorm"] = h1dTimNormI14.GetMean();
        timMap[modStr]["I15"]["TimNorm"] = h1dTimNormI15.GetMean();

        timMap[modStr]["I0"]["TimLong"] = h1dTimLongI0.GetMean();
        timMap[modStr]["I1"]["TimLong"] = h1dTimLongI1.GetMean();
        timMap[modStr]["I2"]["TimLong"] = h1dTimLongI2.GetMean();
        timMap[modStr]["I3"]["TimLong"] = h1dTimLongI3.GetMean();
        timMap[modStr]["I4"]["TimLong"] = h1dTimLongI4.GetMean();
        timMap[modStr]["I5"]["TimLong"] = h1dTimLongI5.GetMean();
        timMap[modStr]["I6"]["TimLong"] = h1dTimLongI6.GetMean();
        timMap[modStr]["I7"]["TimLong"] = h1dTimLongI7.GetMean();
        timMap[modStr]["I8"]["TimLong"] = h1dTimLongI8.GetMean();
        timMap[modStr]["I9"]["TimLong"] = h1dTimLongI9.GetMean();
        timMap[modStr]["I10"]["TimLong"] = h1dTimLongI10.GetMean();
        timMap[modStr]["I11"]["TimLong"] = h1dTimLongI11.GetMean();
        timMap[modStr]["I12"]["TimLong"] = h1dTimLongI12.GetMean();
        timMap[modStr]["I13"]["TimLong"] = h1dTimLongI13.GetMean();
        timMap[modStr]["I14"]["TimLong"] = h1dTimLongI14.GetMean();
        timMap[modStr]["I15"]["TimLong"] = h1dTimLongI15.GetMean();

        timMap[modStr]["I0"]["TimGang"] = h1dTimGangI0.GetMean();
        timMap[modStr]["I1"]["TimGang"] = h1dTimGangI1.GetMean();
        timMap[modStr]["I2"]["TimGang"] = h1dTimGangI2.GetMean();
        timMap[modStr]["I3"]["TimGang"] = h1dTimGangI3.GetMean();
        timMap[modStr]["I4"]["TimGang"] = h1dTimGangI4.GetMean();
        timMap[modStr]["I5"]["TimGang"] = h1dTimGangI5.GetMean();
        timMap[modStr]["I6"]["TimGang"] = h1dTimGangI6.GetMean();
        timMap[modStr]["I7"]["TimGang"] = h1dTimGangI7.GetMean();
        timMap[modStr]["I8"]["TimGang"] = h1dTimGangI8.GetMean();
        timMap[modStr]["I9"]["TimGang"] = h1dTimGangI9.GetMean();
        timMap[modStr]["I10"]["TimGang"] = h1dTimGangI10.GetMean();
        timMap[modStr]["I11"]["TimGang"] = h1dTimGangI11.GetMean();
        timMap[modStr]["I12"]["TimGang"] = h1dTimGangI12.GetMean();
        timMap[modStr]["I13"]["TimGang"] = h1dTimGangI13.GetMean();
        timMap[modStr]["I14"]["TimGang"] = h1dTimGangI14.GetMean();
        timMap[modStr]["I15"]["TimGang"] = h1dTimGangI15.GetMean();
      }
    }
  }

  // std::cout << pcdMap.size() << std::endl;

  if (!inTotFile.empty()) {
    std::cout << std::endl << "INFO =>> tot calib analysis..." << std::endl;

    TFile riTotFile(inTotFile.c_str(),"READ");
    TString totHistName = "TOT_MEAN";
    TString totSigHistName = "TOT_SIGMA";
    TH1F h1dTot7("h1dTot7","",64,0,16);
    TH1F h1dTotSig7("h1dTotSig7","",100,0,1);
    TDirectoryFile* scanDir = (TDirectoryFile*)((TKey*)riTotFile.GetListOfKeys()->First())->ReadObj();
    TList* rodKeyList = (TList*)scanDir->GetListOfKeys();
    TIter rodItr(rodKeyList);
    TKey* rodKey;
    while ((rodKey=(TKey*)rodItr())) {
      TString rodName(rodKey->GetName());
      TDirectoryFile* rodDir = (TDirectoryFile*)rodKey->ReadObj();
      TList* modKeyList = (TList*)rodDir->GetListOfKeys();
      TIter modItr(modKeyList);
      TKey* modKey;

      while ((modKey=(TKey*)modItr())) {
        TString modName(modKey->GetName());
        std::string modStr(modKey->GetName());
        TString st(modName(3,3));

        // get module map

        int hashID = -1;
        int bec = -1;
        int layer = -1;
        int phi_module = -1;
        int eta_module = -1;
        pixelMapping(modStr, &hashID, &bec, &layer, &phi_module, &eta_module);
        if (pcdMap.find(modStr) == pcdMap.end()) continue;

        float totArrI0[ncharge];
        float totArrI1[ncharge];
        float totArrI2[ncharge];
        float totArrI3[ncharge];
        float totArrI4[ncharge];
        float totArrI5[ncharge];
        float totArrI6[ncharge];
        float totArrI7[ncharge];
        float totArrI8[ncharge];
        float totArrI9[ncharge];
        float totArrI10[ncharge];
        float totArrI11[ncharge];
        float totArrI12[ncharge];
        float totArrI13[ncharge];
        float totArrI14[ncharge];
        float totArrI15[ncharge];

        float totErrArrI0[ncharge];
        float totErrArrI1[ncharge];
        float totErrArrI2[ncharge];
        float totErrArrI3[ncharge];
        float totErrArrI4[ncharge];
        float totErrArrI5[ncharge];
        float totErrArrI6[ncharge];
        float totErrArrI7[ncharge];
        float totErrArrI8[ncharge];
        float totErrArrI9[ncharge];
        float totErrArrI10[ncharge];
        float totErrArrI11[ncharge];
        float totErrArrI12[ncharge];
        float totErrArrI13[ncharge];
        float totErrArrI14[ncharge];
        float totErrArrI15[ncharge];

        float totSigArrI0[ncharge];
        float totSigArrI1[ncharge];
        float totSigArrI2[ncharge];
        float totSigArrI3[ncharge];
        float totSigArrI4[ncharge];
        float totSigArrI5[ncharge];
        float totSigArrI6[ncharge];
        float totSigArrI7[ncharge];
        float totSigArrI8[ncharge];
        float totSigArrI9[ncharge];
        float totSigArrI10[ncharge];
        float totSigArrI11[ncharge];
        float totSigArrI12[ncharge];
        float totSigArrI13[ncharge];
        float totSigArrI14[ncharge];
        float totSigArrI15[ncharge];

        float totSigErrArrI0[ncharge];
        float totSigErrArrI1[ncharge];
        float totSigErrArrI2[ncharge];
        float totSigErrArrI3[ncharge];
        float totSigErrArrI4[ncharge];
        float totSigErrArrI5[ncharge];
        float totSigErrArrI6[ncharge];
        float totSigErrArrI7[ncharge];
        float totSigErrArrI8[ncharge];
        float totSigErrArrI9[ncharge];
        float totSigErrArrI10[ncharge];
        float totSigErrArrI11[ncharge];
        float totSigErrArrI12[ncharge];
        float totSigErrArrI13[ncharge];
        float totSigErrArrI14[ncharge];
        float totSigErrArrI15[ncharge];

        float totLongArrI0[ncharge];
        float totLongArrI1[ncharge];
        float totLongArrI2[ncharge];
        float totLongArrI3[ncharge];
        float totLongArrI4[ncharge];
        float totLongArrI5[ncharge];
        float totLongArrI6[ncharge];
        float totLongArrI7[ncharge];
        float totLongArrI8[ncharge];
        float totLongArrI9[ncharge];
        float totLongArrI10[ncharge];
        float totLongArrI11[ncharge];
        float totLongArrI12[ncharge];
        float totLongArrI13[ncharge];
        float totLongArrI14[ncharge];
        float totLongArrI15[ncharge];

        float totErrLongArrI0[ncharge];
        float totErrLongArrI1[ncharge];
        float totErrLongArrI2[ncharge];
        float totErrLongArrI3[ncharge];
        float totErrLongArrI4[ncharge];
        float totErrLongArrI5[ncharge];
        float totErrLongArrI6[ncharge];
        float totErrLongArrI7[ncharge];
        float totErrLongArrI8[ncharge];
        float totErrLongArrI9[ncharge];
        float totErrLongArrI10[ncharge];
        float totErrLongArrI11[ncharge];
        float totErrLongArrI12[ncharge];
        float totErrLongArrI13[ncharge];
        float totErrLongArrI14[ncharge];
        float totErrLongArrI15[ncharge];

        for (int i=0; i<ncharge; i++) {
          TString totHistDirPath = modName + "/" + totHistName + "/A0/B0/C";
          totHistDirPath += i;
          TDirectoryFile* totHistDir = (TDirectoryFile*)rodDir->Get(totHistDirPath);
          TH2F* h2dTot = (TH2F*)((TKey*)totHistDir->GetListOfKeys()->First())->ReadObj();
          TString totSigHistDirPath = modName + "/" + totSigHistName + "/A0/B0/C";
          totSigHistDirPath += i;
          TDirectoryFile* totSigHistDir = (TDirectoryFile*)rodDir->Get(totSigHistDirPath);
          TH2F* h2dTotSig = (TH2F*)((TKey*)totSigHistDir->GetListOfKeys()->First())->ReadObj();

          TH1F h1dTotI0("h1dTotI0","",255,0,255);
          TH1F h1dTotI1("h1dTotI1","",255,0,255);
          TH1F h1dTotI2("h1dTotI2","",255,0,255);
          TH1F h1dTotI3("h1dTotI3","",255,0,255);
          TH1F h1dTotI4("h1dTotI4","",255,0,255);
          TH1F h1dTotI5("h1dTotI5","",255,0,255);
          TH1F h1dTotI6("h1dTotI6","",255,0,255);
          TH1F h1dTotI7("h1dTotI7","",255,0,255);
          TH1F h1dTotI8("h1dTotI8","",255,0,255);
          TH1F h1dTotI9("h1dTotI9","",255,0,255);
          TH1F h1dTotI10("h1dTotI10","",255,0,255);
          TH1F h1dTotI11("h1dTotI11","",255,0,255);
          TH1F h1dTotI12("h1dTotI12","",255,0,255);
          TH1F h1dTotI13("h1dTotI13","",255,0,255);
          TH1F h1dTotI14("h1dTotI14","",255,0,255);
          TH1F h1dTotI15("h1dTotI15","",255,0,255);

          TH1F h1dTotSigI0("h1dTotSigI0","",100,0,1);
          TH1F h1dTotSigI1("h1dTotSigI1","",100,0,1);
          TH1F h1dTotSigI2("h1dTotSigI2","",100,0,1);
          TH1F h1dTotSigI3("h1dTotSigI3","",100,0,1);
          TH1F h1dTotSigI4("h1dTotSigI4","",100,0,1);
          TH1F h1dTotSigI5("h1dTotSigI5","",100,0,1);
          TH1F h1dTotSigI6("h1dTotSigI6","",100,0,1);
          TH1F h1dTotSigI7("h1dTotSigI7","",100,0,1);
          TH1F h1dTotSigI8("h1dTotSigI8","",100,0,1);
          TH1F h1dTotSigI9("h1dTotSigI9","",100,0,1);
          TH1F h1dTotSigI10("h1dTotSigI10","",100,0,1);
          TH1F h1dTotSigI11("h1dTotSigI11","",100,0,1);
          TH1F h1dTotSigI12("h1dTotSigI12","",100,0,1);
          TH1F h1dTotSigI13("h1dTotSigI13","",100,0,1);
          TH1F h1dTotSigI14("h1dTotSigI14","",100,0,1);
          TH1F h1dTotSigI15("h1dTotSigI15","",100,0,1);

          TH1F h1dTotLongI0("h1dTotLongI0","",255,0,255);
          TH1F h1dTotLongI1("h1dTotLongI1","",255,0,255);
          TH1F h1dTotLongI2("h1dTotLongI2","",255,0,255);
          TH1F h1dTotLongI3("h1dTotLongI3","",255,0,255);
          TH1F h1dTotLongI4("h1dTotLongI4","",255,0,255);
          TH1F h1dTotLongI5("h1dTotLongI5","",255,0,255);
          TH1F h1dTotLongI6("h1dTotLongI6","",255,0,255);
          TH1F h1dTotLongI7("h1dTotLongI7","",255,0,255);
          TH1F h1dTotLongI8("h1dTotLongI8","",255,0,255);
          TH1F h1dTotLongI9("h1dTotLongI9","",255,0,255);
          TH1F h1dTotLongI10("h1dTotLongI10","",255,0,255);
          TH1F h1dTotLongI11("h1dTotLongI11","",255,0,255);
          TH1F h1dTotLongI12("h1dTotLongI12","",255,0,255);
          TH1F h1dTotLongI13("h1dTotLongI13","",255,0,255);
          TH1F h1dTotLongI14("h1dTotLongI14","",255,0,255);
          TH1F h1dTotLongI15("h1dTotLongI15","",255,0,255);

          TH1F h1dTotSigLongI0("h1dTotSigLongI0","",100,0,1);
          TH1F h1dTotSigLongI1("h1dTotSigLongI1","",100,0,1);
          TH1F h1dTotSigLongI2("h1dTotSigLongI2","",100,0,1);
          TH1F h1dTotSigLongI3("h1dTotSigLongI3","",100,0,1);
          TH1F h1dTotSigLongI4("h1dTotSigLongI4","",100,0,1);
          TH1F h1dTotSigLongI5("h1dTotSigLongI5","",100,0,1);
          TH1F h1dTotSigLongI6("h1dTotSigLongI6","",100,0,1);
          TH1F h1dTotSigLongI7("h1dTotSigLongI7","",100,0,1);
          TH1F h1dTotSigLongI8("h1dTotSigLongI8","",100,0,1);
          TH1F h1dTotSigLongI9("h1dTotSigLongI9","",100,0,1);
          TH1F h1dTotSigLongI10("h1dTotSigLongI10","",100,0,1);
          TH1F h1dTotSigLongI11("h1dTotSigLongI11","",100,0,1);
          TH1F h1dTotSigLongI12("h1dTotSigLongI12","",100,0,1);
          TH1F h1dTotSigLongI13("h1dTotSigLongI13","",100,0,1);
          TH1F h1dTotSigLongI14("h1dTotSigLongI14","",100,0,1);
          TH1F h1dTotSigLongI15("h1dTotSigLongI15","",100,0,1);

          for (int ieta=0; ieta<ncol; ieta++) {
            for (int iphi=0; iphi<nrow; iphi++) {
              float tot = h2dTot->GetBinContent(ieta+1,iphi+1);
              float totSig = h2dTotSig->GetBinContent(ieta+1,iphi+1);

              if (tot<0.1) { continue; }

              // monitoring
              if (i == 7) {
                h1dTot7.Fill(tot);
                h1dTotSig7.Fill(totSig);
              }

              // Identify FE chip ID
              // Simply, in the calibration, the FEs are aligned from bottom left corner (0,0) with anti-clock-wise direction.
              int circ = -1;
              if (WhichPart != 0)
              {
                if (iphi < 160)
                {
                  circ = (int)(ieta / 18);
                } // FE0, FE1, ... FE7
                else
                {
                  circ = 15 - (int)(ieta / 18);
                } // FE15, FE14, ... FE8
              }
              else
              {
                if (ieta < 80)
                {
                  circ = 0;
                }
                else
                {
                  circ = 1;
                }
              }

              // normal pixels
              int pixtype = 0;
              if (WhichPart != 0)
              {
                if (ieta % 18 == 0 || ieta % 18 == 17)
                {
                  pixtype = 1;
                } // define long pixels
                if (iphi > 152 && iphi < 160 && iphi % 2 == 1)
                {
                  pixtype = 2;
                } // define ganged pixels
                if (iphi > 159 && iphi < 167 && iphi % 2 == 0)
                {
                  pixtype = 2;
                }
              }
              // IBL
              else
              {
                if (ieta == 0 || ieta == 79 || ieta == 80 || ieta == 159)
                {
                  pixtype = 1;
                } // define long pixels
              }

              //==================
              // Fill information
              //==================

              if (pixtype>0) {
                if (circ==0) {
                  h1dTotLongI0.Fill(tot);
                  h1dTotSigLongI0.Fill(totSig);
                }
                else if (circ==1) {
                  h1dTotLongI1.Fill(tot);
                  h1dTotSigLongI1.Fill(totSig);
                }
                else if (circ==2) {
                  h1dTotLongI2.Fill(tot);
                  h1dTotSigLongI2.Fill(totSig);
                }
                else if (circ==3) {
                  h1dTotLongI3.Fill(tot);
                  h1dTotSigLongI3.Fill(totSig);
                }
                else if (circ==4) {
                  h1dTotLongI4.Fill(tot);
                  h1dTotSigLongI4.Fill(totSig);
                }
                else if (circ==5) {
                  h1dTotLongI5.Fill(tot);
                  h1dTotSigLongI5.Fill(totSig);
                }
                else if (circ==6) {
                  h1dTotLongI6.Fill(tot);
                  h1dTotSigLongI6.Fill(totSig);
                }
                else if (circ==7) {
                  h1dTotLongI7.Fill(tot);
                  h1dTotSigLongI7.Fill(totSig);
                }
                else if (circ==8) {
                  h1dTotLongI8.Fill(tot);
                  h1dTotSigLongI8.Fill(totSig);
                }
                else if (circ==9) {
                  h1dTotLongI9.Fill(tot);
                  h1dTotSigLongI9.Fill(totSig);
                }
                else if (circ==10) {
                  h1dTotLongI10.Fill(tot);
                  h1dTotSigLongI10.Fill(totSig);
                }
                else if (circ==11) {
                  h1dTotLongI11.Fill(tot);
                  h1dTotSigLongI11.Fill(totSig);
                }
                else if (circ==12) {
                  h1dTotLongI12.Fill(tot);
                  h1dTotSigLongI12.Fill(totSig);
                }
                else if (circ==13) {
                  h1dTotLongI13.Fill(tot);
                  h1dTotSigLongI13.Fill(totSig);
                }
                else if (circ==14) {
                  h1dTotLongI14.Fill(tot);
                  h1dTotSigLongI14.Fill(totSig);
                }
                else if (circ==15) {
                  h1dTotLongI15.Fill(tot);
                  h1dTotSigLongI15.Fill(totSig);
                }
              }
              else {
                if (circ==0) {
                  h1dTotI0.Fill(tot);
                  h1dTotSigI0.Fill(totSig);
                }
                else if (circ==1) {
                  h1dTotI1.Fill(tot);
                  h1dTotSigI1.Fill(totSig);
                }
                else if (circ==2) {
                  h1dTotI2.Fill(tot);
                  h1dTotSigI2.Fill(totSig);
                }
                else if (circ==3) {
                  h1dTotI3.Fill(tot);
                  h1dTotSigI3.Fill(totSig);
                }
                else if (circ==4) {
                  h1dTotI4.Fill(tot);
                  h1dTotSigI4.Fill(totSig);
                }
                else if (circ==5) {
                  h1dTotI5.Fill(tot);
                  h1dTotSigI5.Fill(totSig);
                }
                else if (circ==6) {
                  h1dTotI6.Fill(tot);
                  h1dTotSigI6.Fill(totSig);
                }
                else if (circ==7) {
                  h1dTotI7.Fill(tot);
                  h1dTotSigI7.Fill(totSig);
                }
                else if (circ==8) {
                  h1dTotI8.Fill(tot);
                  h1dTotSigI8.Fill(totSig);
                }
                else if (circ==9) {
                  h1dTotI9.Fill(tot);
                  h1dTotSigI9.Fill(totSig);
                }
                else if (circ==10) {
                  h1dTotI10.Fill(tot);
                  h1dTotSigI10.Fill(totSig);
                }
                else if (circ==11) {
                  h1dTotI11.Fill(tot);
                  h1dTotSigI11.Fill(totSig);
                }
                else if (circ==12) {
                  h1dTotI12.Fill(tot);
                  h1dTotSigI12.Fill(totSig);
                }
                else if (circ==13) {
                  h1dTotI13.Fill(tot);
                  h1dTotSigI13.Fill(totSig);
                }
                else if (circ==14) {
                  h1dTotI14.Fill(tot);
                  h1dTotSigI14.Fill(totSig);
                }
                else if (circ==15) {
                  h1dTotI15.Fill(tot);
                  h1dTotSigI15.Fill(totSig);
                }
              }
            }
          }
          totArrI0[i] = h1dTotI0.GetMean();
          totArrI1[i] = h1dTotI1.GetMean();
          totArrI2[i] = h1dTotI2.GetMean();
          totArrI3[i] = h1dTotI3.GetMean();
          totArrI4[i] = h1dTotI4.GetMean();
          totArrI5[i] = h1dTotI5.GetMean();
          totArrI6[i] = h1dTotI6.GetMean();
          totArrI7[i] = h1dTotI7.GetMean();
          totArrI8[i] = h1dTotI8.GetMean();
          totArrI9[i] = h1dTotI9.GetMean();
          totArrI10[i] = h1dTotI10.GetMean();
          totArrI11[i] = h1dTotI11.GetMean();
          totArrI12[i] = h1dTotI12.GetMean();
          totArrI13[i] = h1dTotI13.GetMean();
          totArrI14[i] = h1dTotI14.GetMean();
          totArrI15[i] = h1dTotI15.GetMean();

          totErrArrI0[i] = h1dTotI0.GetMeanError();
          totErrArrI1[i] = h1dTotI1.GetMeanError();
          totErrArrI2[i] = h1dTotI2.GetMeanError();
          totErrArrI3[i] = h1dTotI3.GetMeanError();
          totErrArrI4[i] = h1dTotI4.GetMeanError();
          totErrArrI5[i] = h1dTotI5.GetMeanError();
          totErrArrI6[i] = h1dTotI6.GetMeanError();
          totErrArrI7[i] = h1dTotI7.GetMeanError();
          totErrArrI8[i] = h1dTotI8.GetMeanError();
          totErrArrI9[i] = h1dTotI9.GetMeanError();
          totErrArrI10[i] = h1dTotI10.GetMeanError();
          totErrArrI11[i] = h1dTotI11.GetMeanError();
          totErrArrI12[i] = h1dTotI12.GetMeanError();
          totErrArrI13[i] = h1dTotI13.GetMeanError();
          totErrArrI14[i] = h1dTotI14.GetMeanError();
          totErrArrI15[i] = h1dTotI15.GetMeanError();

          totSigArrI0[i] = TMath::Sqrt(h1dTotSigI0.GetMean()*h1dTotSigI0.GetMean()+h1dTotI0.GetRMS()*h1dTotI0.GetRMS());
          totSigArrI1[i] = TMath::Sqrt(h1dTotSigI1.GetMean()*h1dTotSigI1.GetMean()+h1dTotI1.GetRMS()*h1dTotI1.GetRMS());
          totSigArrI2[i] = TMath::Sqrt(h1dTotSigI2.GetMean()*h1dTotSigI2.GetMean()+h1dTotI2.GetRMS()*h1dTotI2.GetRMS());
          totSigArrI3[i] = TMath::Sqrt(h1dTotSigI3.GetMean()*h1dTotSigI3.GetMean()+h1dTotI3.GetRMS()*h1dTotI3.GetRMS());
          totSigArrI4[i] = TMath::Sqrt(h1dTotSigI4.GetMean()*h1dTotSigI4.GetMean()+h1dTotI4.GetRMS()*h1dTotI4.GetRMS());
          totSigArrI5[i] = TMath::Sqrt(h1dTotSigI5.GetMean()*h1dTotSigI5.GetMean()+h1dTotI5.GetRMS()*h1dTotI5.GetRMS());
          totSigArrI6[i] = TMath::Sqrt(h1dTotSigI6.GetMean()*h1dTotSigI6.GetMean()+h1dTotI6.GetRMS()*h1dTotI6.GetRMS());
          totSigArrI7[i] = TMath::Sqrt(h1dTotSigI7.GetMean()*h1dTotSigI7.GetMean()+h1dTotI7.GetRMS()*h1dTotI7.GetRMS());
          totSigArrI8[i] = TMath::Sqrt(h1dTotSigI8.GetMean()*h1dTotSigI8.GetMean()+h1dTotI8.GetRMS()*h1dTotI8.GetRMS());
          totSigArrI9[i] = TMath::Sqrt(h1dTotSigI9.GetMean()*h1dTotSigI9.GetMean()+h1dTotI9.GetRMS()*h1dTotI9.GetRMS());
          totSigArrI10[i] = TMath::Sqrt(h1dTotSigI10.GetMean()*h1dTotSigI10.GetMean()+h1dTotI10.GetRMS()*h1dTotI10.GetRMS());
          totSigArrI11[i] = TMath::Sqrt(h1dTotSigI11.GetMean()*h1dTotSigI11.GetMean()+h1dTotI11.GetRMS()*h1dTotI11.GetRMS());
          totSigArrI12[i] = TMath::Sqrt(h1dTotSigI12.GetMean()*h1dTotSigI12.GetMean()+h1dTotI12.GetRMS()*h1dTotI12.GetRMS());
          totSigArrI13[i] = TMath::Sqrt(h1dTotSigI13.GetMean()*h1dTotSigI13.GetMean()+h1dTotI13.GetRMS()*h1dTotI13.GetRMS());
          totSigArrI14[i] = TMath::Sqrt(h1dTotSigI14.GetMean()*h1dTotSigI14.GetMean()+h1dTotI14.GetRMS()*h1dTotI14.GetRMS());
          totSigArrI15[i] = TMath::Sqrt(h1dTotSigI15.GetMean()*h1dTotSigI15.GetMean()+h1dTotI15.GetRMS()*h1dTotI15.GetRMS());

          totSigErrArrI0[i] = TMath::Sqrt(h1dTotSigI0.GetMeanError()*h1dTotSigI0.GetMeanError()+h1dTotI0.GetRMSError()*h1dTotI0.GetRMSError());
          totSigErrArrI1[i] = TMath::Sqrt(h1dTotSigI1.GetMeanError()*h1dTotSigI1.GetMeanError()+h1dTotI1.GetRMSError()*h1dTotI1.GetRMSError());
          totSigErrArrI2[i] = TMath::Sqrt(h1dTotSigI2.GetMeanError()*h1dTotSigI2.GetMeanError()+h1dTotI2.GetRMSError()*h1dTotI2.GetRMSError());
          totSigErrArrI3[i] = TMath::Sqrt(h1dTotSigI3.GetMeanError()*h1dTotSigI3.GetMeanError()+h1dTotI3.GetRMSError()*h1dTotI3.GetRMSError());
          totSigErrArrI4[i] = TMath::Sqrt(h1dTotSigI4.GetMeanError()*h1dTotSigI4.GetMeanError()+h1dTotI4.GetRMSError()*h1dTotI4.GetRMSError());
          totSigErrArrI5[i] = TMath::Sqrt(h1dTotSigI5.GetMeanError()*h1dTotSigI5.GetMeanError()+h1dTotI5.GetRMSError()*h1dTotI5.GetRMSError());
          totSigErrArrI6[i] = TMath::Sqrt(h1dTotSigI6.GetMeanError()*h1dTotSigI6.GetMeanError()+h1dTotI6.GetRMSError()*h1dTotI6.GetRMSError());
          totSigErrArrI7[i] = TMath::Sqrt(h1dTotSigI7.GetMeanError()*h1dTotSigI7.GetMeanError()+h1dTotI7.GetRMSError()*h1dTotI7.GetRMSError());
          totSigErrArrI8[i] = TMath::Sqrt(h1dTotSigI8.GetMeanError()*h1dTotSigI8.GetMeanError()+h1dTotI8.GetRMSError()*h1dTotI8.GetRMSError());
          totSigErrArrI9[i] = TMath::Sqrt(h1dTotSigI9.GetMeanError()*h1dTotSigI9.GetMeanError()+h1dTotI9.GetRMSError()*h1dTotI9.GetRMSError());
          totSigErrArrI10[i] = TMath::Sqrt(h1dTotSigI10.GetMeanError()*h1dTotSigI10.GetMeanError()+h1dTotI10.GetRMSError()*h1dTotI10.GetRMSError());
          totSigErrArrI11[i] = TMath::Sqrt(h1dTotSigI11.GetMeanError()*h1dTotSigI11.GetMeanError()+h1dTotI11.GetRMSError()*h1dTotI11.GetRMSError());
          totSigErrArrI12[i] = TMath::Sqrt(h1dTotSigI12.GetMeanError()*h1dTotSigI12.GetMeanError()+h1dTotI12.GetRMSError()*h1dTotI12.GetRMSError());
          totSigErrArrI13[i] = TMath::Sqrt(h1dTotSigI13.GetMeanError()*h1dTotSigI13.GetMeanError()+h1dTotI13.GetRMSError()*h1dTotI13.GetRMSError());
          totSigErrArrI14[i] = TMath::Sqrt(h1dTotSigI14.GetMeanError()*h1dTotSigI14.GetMeanError()+h1dTotI14.GetRMSError()*h1dTotI14.GetRMSError());
          totSigErrArrI15[i] = TMath::Sqrt(h1dTotSigI15.GetMeanError()*h1dTotSigI15.GetMeanError()+h1dTotI15.GetRMSError()*h1dTotI15.GetRMSError());

          totLongArrI0[i] = h1dTotLongI0.GetMean();
          totLongArrI1[i] = h1dTotLongI1.GetMean();
          totLongArrI2[i] = h1dTotLongI2.GetMean();
          totLongArrI3[i] = h1dTotLongI3.GetMean();
          totLongArrI4[i] = h1dTotLongI4.GetMean();
          totLongArrI5[i] = h1dTotLongI5.GetMean();
          totLongArrI6[i] = h1dTotLongI6.GetMean();
          totLongArrI7[i] = h1dTotLongI7.GetMean();
          totLongArrI8[i] = h1dTotLongI8.GetMean();
          totLongArrI9[i] = h1dTotLongI9.GetMean();
          totLongArrI10[i] = h1dTotLongI10.GetMean();
          totLongArrI11[i] = h1dTotLongI11.GetMean();
          totLongArrI12[i] = h1dTotLongI12.GetMean();
          totLongArrI13[i] = h1dTotLongI13.GetMean();
          totLongArrI14[i] = h1dTotLongI14.GetMean();
          totLongArrI15[i] = h1dTotLongI15.GetMean();

          totErrLongArrI0[i] = h1dTotLongI0.GetMeanError();
          totErrLongArrI1[i] = h1dTotLongI1.GetMeanError();
          totErrLongArrI2[i] = h1dTotLongI2.GetMeanError();
          totErrLongArrI3[i] = h1dTotLongI3.GetMeanError();
          totErrLongArrI4[i] = h1dTotLongI4.GetMeanError();
          totErrLongArrI5[i] = h1dTotLongI5.GetMeanError();
          totErrLongArrI6[i] = h1dTotLongI6.GetMeanError();
          totErrLongArrI7[i] = h1dTotLongI7.GetMeanError();
          totErrLongArrI8[i] = h1dTotLongI8.GetMeanError();
          totErrLongArrI9[i] = h1dTotLongI9.GetMeanError();
          totErrLongArrI10[i] = h1dTotLongI10.GetMeanError();
          totErrLongArrI11[i] = h1dTotLongI11.GetMeanError();
          totErrLongArrI12[i] = h1dTotLongI12.GetMeanError();
          totErrLongArrI13[i] = h1dTotLongI13.GetMeanError();
          totErrLongArrI14[i] = h1dTotLongI14.GetMeanError();
          totErrLongArrI15[i] = h1dTotLongI15.GetMeanError();

        }

        float FitStartingPoint = chargeArr[qthresh]-100;

        TGraphErrors grTotI0(ncharge, chargeArr, totArrI0, chargeErrArr, totErrArrI0);
        grTotI0.SetName(modName+"__grTotI0");
        TGraphErrors grTotSigI0(ncharge, chargeArr, totSigArrI0, chargeErrArr, totSigErrArrI0);
        grTotSigI0.SetName(modName+"__grTotSigI0");
        TF1 f1TotI0("f1TotI0",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI0("f1DispI0",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI0.Fit(&f1TotI0,"MRQ");
        grTotSigI0.Fit(&f1DispI0,"MRQ");
        float parAI0 = f1TotI0.GetParameter(0);
        float parEI0 = f1TotI0.GetParameter(1);
        float parCI0 = f1TotI0.GetParameter(2);
        float parP0I0 = f1DispI0.GetParameter(0);
        float parP1I0 = f1DispI0.GetParameter(1);

        TGraphErrors grTotI1(ncharge, chargeArr, totArrI1, chargeErrArr, totErrArrI1);
        grTotI1.SetName(modName+"__grTotI1");
        TGraphErrors grTotSigI1(ncharge, chargeArr, totSigArrI1, chargeErrArr, totSigErrArrI1);
        grTotSigI1.SetName(modName+"__grTotSigI1");
        TF1 f1TotI1("f1TotI1",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI1("f1DispI1",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI1.Fit(&f1TotI1,"MRQ");
        grTotSigI1.Fit(&f1DispI1,"MRQ");
        float parAI1 = f1TotI1.GetParameter(0);
        float parEI1 = f1TotI1.GetParameter(1);
        float parCI1 = f1TotI1.GetParameter(2);
        float parP0I1 = f1DispI1.GetParameter(0);
        float parP1I1 = f1DispI1.GetParameter(1);

        TGraphErrors grTotI2(ncharge, chargeArr, totArrI2, chargeErrArr, totErrArrI2);
        grTotI2.SetName(modName+"__grTotI2");
        TGraphErrors grTotSigI2(ncharge, chargeArr, totSigArrI2, chargeErrArr, totSigErrArrI2);
        grTotSigI2.SetName(modName+"__grTotSigI2");
        TF1 f1TotI2("f1TotI2",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI2("f1DispI2",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI2.Fit(&f1TotI2,"MRQ");
        grTotSigI2.Fit(&f1DispI2,"MRQ");
        float parAI2 = f1TotI2.GetParameter(0);
        float parEI2 = f1TotI2.GetParameter(1);
        float parCI2 = f1TotI2.GetParameter(2);
        float parP0I2 = f1DispI2.GetParameter(0);
        float parP1I2 = f1DispI2.GetParameter(1);

        TGraphErrors grTotI3(ncharge, chargeArr, totArrI3, chargeErrArr, totErrArrI3);
        grTotI3.SetName(modName+"__grTotI3");
        TGraphErrors grTotSigI3(ncharge, chargeArr, totSigArrI3, chargeErrArr, totSigErrArrI3);
        grTotSigI3.SetName(modName+"__grTotSigI3");
        TF1 f1TotI3("f1TotI3",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI3("f1DispI3",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI3.Fit(&f1TotI3,"MRQ");
        grTotSigI3.Fit(&f1DispI3,"MRQ");
        float parAI3 = f1TotI3.GetParameter(0);
        float parEI3 = f1TotI3.GetParameter(1);
        float parCI3 = f1TotI3.GetParameter(2);
        float parP0I3 = f1DispI3.GetParameter(0);
        float parP1I3 = f1DispI3.GetParameter(1);

        TGraphErrors grTotI4(ncharge, chargeArr, totArrI4, chargeErrArr, totErrArrI4);
        grTotI4.SetName(modName+"__grTotI4");
        TGraphErrors grTotSigI4(ncharge, chargeArr, totSigArrI4, chargeErrArr, totSigErrArrI4);
        grTotSigI4.SetName(modName+"__grTotSigI4");
        TF1 f1TotI4("f1TotI4",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI4("f1DispI4",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI4.Fit(&f1TotI4,"MRQ");
        grTotSigI4.Fit(&f1DispI4,"MRQ");
        float parAI4 = f1TotI4.GetParameter(0);
        float parEI4 = f1TotI4.GetParameter(1);
        float parCI4 = f1TotI4.GetParameter(2);
        float parP0I4 = f1DispI4.GetParameter(0);
        float parP1I4 = f1DispI4.GetParameter(1);

        TGraphErrors grTotI5(ncharge, chargeArr, totArrI5, chargeErrArr, totErrArrI5);
        grTotI5.SetName(modName+"__grTotI5");
        TGraphErrors grTotSigI5(ncharge, chargeArr, totSigArrI5, chargeErrArr, totSigErrArrI5);
        grTotSigI5.SetName(modName+"__grTotSigI5");
        TF1 f1TotI5("f1TotI5",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI5("f1DispI5",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI5.Fit(&f1TotI5,"MRQ");
        grTotSigI5.Fit(&f1DispI5,"MRQ");
        float parAI5 = f1TotI5.GetParameter(0);
        float parEI5 = f1TotI5.GetParameter(1);
        float parCI5 = f1TotI5.GetParameter(2);
        float parP0I5 = f1DispI5.GetParameter(0);
        float parP1I5 = f1DispI5.GetParameter(1);

        TGraphErrors grTotI6(ncharge, chargeArr, totArrI6, chargeErrArr, totErrArrI6);
        grTotI6.SetName(modName+"__grTotI6");
        TGraphErrors grTotSigI6(ncharge, chargeArr, totSigArrI6, chargeErrArr, totSigErrArrI6);
        grTotSigI6.SetName(modName+"__grTotSigI6");
        TF1 f1TotI6("f1TotI6",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI6("f1DispI6",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI6.Fit(&f1TotI6,"MRQ");
        grTotSigI6.Fit(&f1DispI6,"MRQ");
        float parAI6 = f1TotI6.GetParameter(0);
        float parEI6 = f1TotI6.GetParameter(1);
        float parCI6 = f1TotI6.GetParameter(2);
        float parP0I6 = f1DispI6.GetParameter(0);
        float parP1I6 = f1DispI6.GetParameter(1);

        TGraphErrors grTotI7(ncharge, chargeArr, totArrI7, chargeErrArr, totErrArrI7);
        grTotI7.SetName(modName+"__grTotI7");
        TGraphErrors grTotSigI7(ncharge, chargeArr, totSigArrI7, chargeErrArr, totSigErrArrI7);
        grTotSigI7.SetName(modName+"__grTotSigI7");
        TF1 f1TotI7("f1TotI7",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI7("f1DispI7",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI7.Fit(&f1TotI7,"MRQ");
        grTotSigI7.Fit(&f1DispI7,"MRQ");
        float parAI7 = f1TotI7.GetParameter(0);
        float parEI7 = f1TotI7.GetParameter(1);
        float parCI7 = f1TotI7.GetParameter(2);
        float parP0I7 = f1DispI7.GetParameter(0);
        float parP1I7 = f1DispI7.GetParameter(1);

        TGraphErrors grTotI8(ncharge, chargeArr, totArrI8, chargeErrArr, totErrArrI8);
        grTotI8.SetName(modName+"__grTotI8");
        TGraphErrors grTotSigI8(ncharge, chargeArr, totSigArrI8, chargeErrArr, totSigErrArrI8);
        grTotSigI8.SetName(modName+"__grTotSigI8");
        TF1 f1TotI8("f1TotI8",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI8("f1DispI8",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI8.Fit(&f1TotI8,"MRQ");
        grTotSigI8.Fit(&f1DispI8,"MRQ");
        float parAI8 = f1TotI8.GetParameter(0);
        float parEI8 = f1TotI8.GetParameter(1);
        float parCI8 = f1TotI8.GetParameter(2);
        float parP0I8 = f1DispI8.GetParameter(0);
        float parP1I8 = f1DispI8.GetParameter(1);

        TGraphErrors grTotI9(ncharge, chargeArr, totArrI9, chargeErrArr, totErrArrI9);
        grTotI9.SetName(modName+"__grTotI9");
        TGraphErrors grTotSigI9(ncharge, chargeArr, totSigArrI9, chargeErrArr, totSigErrArrI9);
        grTotSigI9.SetName(modName+"__grTotSigI9");
        TF1 f1TotI9("f1TotI9",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI9("f1DispI9",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI9.Fit(&f1TotI9,"MRQ");
        grTotSigI9.Fit(&f1DispI9,"MRQ");
        float parAI9 = f1TotI9.GetParameter(0);
        float parEI9 = f1TotI9.GetParameter(1);
        float parCI9 = f1TotI9.GetParameter(2);
        float parP0I9 = f1DispI9.GetParameter(0);
        float parP1I9 = f1DispI9.GetParameter(1);

        TGraphErrors grTotI10(ncharge, chargeArr, totArrI10, chargeErrArr, totErrArrI10);
        grTotI10.SetName(modName+"__grTotI10");
        TGraphErrors grTotSigI10(ncharge, chargeArr, totSigArrI10, chargeErrArr, totSigErrArrI10);
        grTotSigI10.SetName(modName+"__grTotSigI10");
        TF1 f1TotI10("f1TotI10",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI10("f1DispI10",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI10.Fit(&f1TotI10,"MRQ");
        grTotSigI10.Fit(&f1DispI10,"MRQ");
        float parAI10 = f1TotI10.GetParameter(0);
        float parEI10 = f1TotI10.GetParameter(1);
        float parCI10 = f1TotI10.GetParameter(2);
        float parP0I10 = f1DispI10.GetParameter(0);
        float parP1I10 = f1DispI10.GetParameter(1);

        TGraphErrors grTotI11(ncharge, chargeArr, totArrI11, chargeErrArr, totErrArrI11);
        grTotI11.SetName(modName+"__grTotI11");
        TGraphErrors grTotSigI11(ncharge, chargeArr, totSigArrI11, chargeErrArr, totSigErrArrI11);
        grTotSigI11.SetName(modName+"__grTotSigI11");
        TF1 f1TotI11("f1TotI11",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI11("f1DispI11",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI11.Fit(&f1TotI11,"MRQ");
        grTotSigI11.Fit(&f1DispI11,"MRQ");
        float parAI11 = f1TotI11.GetParameter(0);
        float parEI11 = f1TotI11.GetParameter(1);
        float parCI11 = f1TotI11.GetParameter(2);
        float parP0I11 = f1DispI11.GetParameter(0);
        float parP1I11 = f1DispI11.GetParameter(1);

        TGraphErrors grTotI12(ncharge, chargeArr, totArrI12, chargeErrArr, totErrArrI12);
        grTotI12.SetName(modName+"__grTotI12");
        TGraphErrors grTotSigI12(ncharge, chargeArr, totSigArrI12, chargeErrArr, totSigErrArrI12);
        grTotSigI12.SetName(modName+"__grTotSigI12");
        TF1 f1TotI12("f1TotI12",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI12("f1DispI12",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI12.Fit(&f1TotI12,"MRQ");
        grTotSigI12.Fit(&f1DispI12,"MRQ");
        float parAI12 = f1TotI12.GetParameter(0);
        float parEI12 = f1TotI12.GetParameter(1);
        float parCI12 = f1TotI12.GetParameter(2);
        float parP0I12 = f1DispI12.GetParameter(0);
        float parP1I12 = f1DispI12.GetParameter(1);

        TGraphErrors grTotI13(ncharge, chargeArr, totArrI13, chargeErrArr, totErrArrI13);
        grTotI13.SetName(modName+"__grTotI13");
        TGraphErrors grTotSigI13(ncharge, chargeArr, totSigArrI13, chargeErrArr, totSigErrArrI13);
        grTotSigI13.SetName(modName+"__grTotSigI13");
        TF1 f1TotI13("f1TotI13",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI13("f1DispI13",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI13.Fit(&f1TotI13,"MRQ");
        grTotSigI13.Fit(&f1DispI13,"MRQ");
        float parAI13 = f1TotI13.GetParameter(0);
        float parEI13 = f1TotI13.GetParameter(1);
        float parCI13 = f1TotI13.GetParameter(2);
        float parP0I13 = f1DispI13.GetParameter(0);
        float parP1I13 = f1DispI13.GetParameter(1);

        TGraphErrors grTotI14(ncharge, chargeArr, totArrI14, chargeErrArr, totErrArrI14);
        grTotI14.SetName(modName+"__grTotI14");
        TGraphErrors grTotSigI14(ncharge, chargeArr, totSigArrI14, chargeErrArr, totSigErrArrI14);
        grTotSigI14.SetName(modName+"__grTotSigI14");
        TF1 f1TotI14("f1TotI14",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI14("f1DispI14",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI14.Fit(&f1TotI14,"MRQ");
        grTotSigI14.Fit(&f1DispI14,"MRQ");
        float parAI14 = f1TotI14.GetParameter(0);
        float parEI14 = f1TotI14.GetParameter(1);
        float parCI14 = f1TotI14.GetParameter(2);
        float parP0I14 = f1DispI14.GetParameter(0);
        float parP1I14 = f1DispI14.GetParameter(1);

        TGraphErrors grTotI15(ncharge, chargeArr, totArrI15, chargeErrArr, totErrArrI15);
        grTotI15.SetName(modName+"__grTotI15");
        TGraphErrors grTotSigI15(ncharge, chargeArr, totSigArrI15, chargeErrArr, totSigErrArrI15);
        grTotSigI15.SetName(modName+"__grTotSigI15");
        TF1 f1TotI15("f1TotI15",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispI15("f1DispI15",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotI15.Fit(&f1TotI15,"MRQ");
        grTotSigI15.Fit(&f1DispI15,"MRQ");
        float parAI15 = f1TotI15.GetParameter(0);
        float parEI15 = f1TotI15.GetParameter(1);
        float parCI15 = f1TotI15.GetParameter(2);
        float parP0I15 = f1DispI15.GetParameter(0);
        float parP1I15 = f1DispI15.GetParameter(1);

        TGraphErrors grTotLongI0(ncharge, chargeArr, totLongArrI0, chargeErrArr, totErrLongArrI0);
        grTotLongI0.SetName(modName+"__grTotLongI0");
        TGraphErrors grTotLongSigI0(ncharge, chargeArr, totSigArrI0, chargeErrArr, totSigErrArrI0);
        grTotLongSigI0.SetName(modName+"__grTotLongSigI0");
        TF1 f1TotLongI0("f1TotLongI0",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI0("f1DispLongI0",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI0.Fit(&f1TotLongI0,"MRQ");
        grTotLongSigI0.Fit(&f1DispLongI0,"MRQ");
        float parLongAI0 = f1TotLongI0.GetParameter(0);
        float parLongEI0 = f1TotLongI0.GetParameter(1);
        float parLongCI0 = f1TotLongI0.GetParameter(2);
        float parLongP0I0 = f1DispLongI0.GetParameter(0);
        float parLongP1I0 = f1DispLongI0.GetParameter(1);

        TGraphErrors grTotLongI1(ncharge, chargeArr, totLongArrI1, chargeErrArr, totErrLongArrI1);
        grTotLongI1.SetName(modName+"__grTotLongI1");
        TGraphErrors grTotLongSigI1(ncharge, chargeArr, totSigArrI1, chargeErrArr, totSigErrArrI1);
        grTotLongSigI1.SetName(modName+"__grTotLongSigI1");
        TF1 f1TotLongI1("f1TotLongI1",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI1("f1DispLongI1",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI1.Fit(&f1TotLongI1,"MRQ");
        grTotLongSigI1.Fit(&f1DispLongI1,"MRQ");
        float parLongAI1 = f1TotLongI1.GetParameter(0);
        float parLongEI1 = f1TotLongI1.GetParameter(1);
        float parLongCI1 = f1TotLongI1.GetParameter(2);
        float parLongP0I1 = f1DispLongI1.GetParameter(0);
        float parLongP1I1 = f1DispLongI1.GetParameter(1);

        TGraphErrors grTotLongI2(ncharge, chargeArr, totLongArrI2, chargeErrArr, totErrLongArrI2);
        grTotLongI2.SetName(modName+"__grTotLongI2");
        TGraphErrors grTotLongSigI2(ncharge, chargeArr, totSigArrI2, chargeErrArr, totSigErrArrI2);
        grTotLongSigI2.SetName(modName+"__grTotLongSigI2");
        TF1 f1TotLongI2("f1TotLongI2",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI2("f1DispLongI2",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI2.Fit(&f1TotLongI2,"MRQ");
        grTotLongSigI2.Fit(&f1DispLongI2,"MRQ");
        float parLongAI2 = f1TotLongI2.GetParameter(0);
        float parLongEI2 = f1TotLongI2.GetParameter(1);
        float parLongCI2 = f1TotLongI2.GetParameter(2);
        float parLongP0I2 = f1DispLongI2.GetParameter(0);
        float parLongP1I2 = f1DispLongI2.GetParameter(1);

        TGraphErrors grTotLongI3(ncharge, chargeArr, totLongArrI3, chargeErrArr, totErrLongArrI3);
        grTotLongI3.SetName(modName+"__grTotLongI3");
        TGraphErrors grTotLongSigI3(ncharge, chargeArr, totSigArrI3, chargeErrArr, totSigErrArrI3);
        grTotLongSigI3.SetName(modName+"__grTotLongSigI3");
        TF1 f1TotLongI3("f1TotLongI3",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI3("f1DispLongI3",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI3.Fit(&f1TotLongI3,"MRQ");
        grTotLongSigI3.Fit(&f1DispLongI3,"MRQ");
        float parLongAI3 = f1TotLongI3.GetParameter(0);
        float parLongEI3 = f1TotLongI3.GetParameter(1);
        float parLongCI3 = f1TotLongI3.GetParameter(2);
        float parLongP0I3 = f1DispLongI3.GetParameter(0);
        float parLongP1I3 = f1DispLongI3.GetParameter(1);

        TGraphErrors grTotLongI4(ncharge, chargeArr, totLongArrI4, chargeErrArr, totErrLongArrI4);
        grTotLongI4.SetName(modName+"__grTotLongI4");
        TGraphErrors grTotLongSigI4(ncharge, chargeArr, totSigArrI4, chargeErrArr, totSigErrArrI4);
        grTotLongSigI4.SetName(modName+"__grTotLongSigI4");
        TF1 f1TotLongI4("f1TotLongI4",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI4("f1DispLongI4",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI4.Fit(&f1TotLongI4,"MRQ");
        grTotLongSigI4.Fit(&f1DispLongI4,"MRQ");
        float parLongAI4 = f1TotLongI4.GetParameter(0);
        float parLongEI4 = f1TotLongI4.GetParameter(1);
        float parLongCI4 = f1TotLongI4.GetParameter(2);
        float parLongP0I4 = f1DispLongI4.GetParameter(0);
        float parLongP1I4 = f1DispLongI4.GetParameter(1);

        TGraphErrors grTotLongI5(ncharge, chargeArr, totLongArrI5, chargeErrArr, totErrLongArrI5);
        grTotLongI5.SetName(modName+"__grTotLongI5");
        TGraphErrors grTotLongSigI5(ncharge, chargeArr, totSigArrI5, chargeErrArr, totSigErrArrI5);
        grTotLongSigI5.SetName(modName+"__grTotLongSigI5");
        TF1 f1TotLongI5("f1TotLongI5",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI5("f1DispLongI5",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI5.Fit(&f1TotLongI5,"MRQ");
        grTotLongSigI5.Fit(&f1DispLongI5,"MRQ");
        float parLongAI5 = f1TotLongI5.GetParameter(0);
        float parLongEI5 = f1TotLongI5.GetParameter(1);
        float parLongCI5 = f1TotLongI5.GetParameter(2);
        float parLongP0I5 = f1DispLongI5.GetParameter(0);
        float parLongP1I5 = f1DispLongI5.GetParameter(1);

        TGraphErrors grTotLongI6(ncharge, chargeArr, totLongArrI6, chargeErrArr, totErrLongArrI6);
        grTotLongI6.SetName(modName+"__grTotLongI6");
        TGraphErrors grTotLongSigI6(ncharge, chargeArr, totSigArrI6, chargeErrArr, totSigErrArrI6);
        grTotLongSigI6.SetName(modName+"__grTotLongSigI6");
        TF1 f1TotLongI6("f1TotLongI6",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI6("f1DispLongI6",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI6.Fit(&f1TotLongI6,"MRQ");
        grTotLongSigI6.Fit(&f1DispLongI6,"MRQ");
        float parLongAI6 = f1TotLongI6.GetParameter(0);
        float parLongEI6 = f1TotLongI6.GetParameter(1);
        float parLongCI6 = f1TotLongI6.GetParameter(2);
        float parLongP0I6 = f1DispLongI6.GetParameter(0);
        float parLongP1I6 = f1DispLongI6.GetParameter(1);

        TGraphErrors grTotLongI7(ncharge, chargeArr, totLongArrI7, chargeErrArr, totErrLongArrI7);
        grTotLongI7.SetName(modName+"__grTotLongI7");
        TGraphErrors grTotLongSigI7(ncharge, chargeArr, totSigArrI7, chargeErrArr, totSigErrArrI7);
        grTotLongSigI7.SetName(modName+"__grTotLongSigI7");
        TF1 f1TotLongI7("f1TotLongI7",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI7("f1DispLongI7",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI7.Fit(&f1TotLongI7,"MRQ");
        grTotLongSigI7.Fit(&f1DispLongI7,"MRQ");
        float parLongAI7 = f1TotLongI7.GetParameter(0);
        float parLongEI7 = f1TotLongI7.GetParameter(1);
        float parLongCI7 = f1TotLongI7.GetParameter(2);
        float parLongP0I7 = f1DispLongI7.GetParameter(0);
        float parLongP1I7 = f1DispLongI7.GetParameter(1);

        TGraphErrors grTotLongI8(ncharge, chargeArr, totLongArrI8, chargeErrArr, totErrLongArrI8);
        grTotLongI8.SetName(modName+"__grTotLongI8");
        TGraphErrors grTotLongSigI8(ncharge, chargeArr, totSigArrI8, chargeErrArr, totSigErrArrI8);
        grTotLongSigI8.SetName(modName+"__grTotLongSigI8");
        TF1 f1TotLongI8("f1TotLongI8",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI8("f1DispLongI8",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI8.Fit(&f1TotLongI8,"MRQ");
        grTotLongSigI8.Fit(&f1DispLongI8,"MRQ");
        float parLongAI8 = f1TotLongI8.GetParameter(0);
        float parLongEI8 = f1TotLongI8.GetParameter(1);
        float parLongCI8 = f1TotLongI8.GetParameter(2);
        float parLongP0I8 = f1DispLongI8.GetParameter(0);
        float parLongP1I8 = f1DispLongI8.GetParameter(1);

        TGraphErrors grTotLongI9(ncharge, chargeArr, totLongArrI9, chargeErrArr, totErrLongArrI9);
        grTotLongI9.SetName(modName+"__grTotLongI9");
        TGraphErrors grTotLongSigI9(ncharge, chargeArr, totSigArrI9, chargeErrArr, totSigErrArrI9);
        grTotLongSigI9.SetName(modName+"__grTotLongSigI9");
        TF1 f1TotLongI9("f1TotLongI9",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI9("f1DispLongI9",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI9.Fit(&f1TotLongI9,"MRQ");
        grTotLongSigI9.Fit(&f1DispLongI9,"MRQ");
        float parLongAI9 = f1TotLongI9.GetParameter(0);
        float parLongEI9 = f1TotLongI9.GetParameter(1);
        float parLongCI9 = f1TotLongI9.GetParameter(2);
        float parLongP0I9 = f1DispLongI9.GetParameter(0);
        float parLongP1I9 = f1DispLongI9.GetParameter(1);

        TGraphErrors grTotLongI10(ncharge, chargeArr, totLongArrI10, chargeErrArr, totErrLongArrI10);
        grTotLongI10.SetName(modName+"__grTotLongI10");
        TGraphErrors grTotLongSigI10(ncharge, chargeArr, totSigArrI10, chargeErrArr, totSigErrArrI10);
        grTotLongSigI10.SetName(modName+"__grTotLongSigI10");
        TF1 f1TotLongI10("f1TotLongI10",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI10("f1DispLongI10",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI10.Fit(&f1TotLongI10,"MRQ");
        grTotLongSigI10.Fit(&f1DispLongI10,"MRQ");
        float parLongAI10 = f1TotLongI10.GetParameter(0);
        float parLongEI10 = f1TotLongI10.GetParameter(1);
        float parLongCI10 = f1TotLongI10.GetParameter(2);
        float parLongP0I10 = f1DispLongI10.GetParameter(0);
        float parLongP1I10 = f1DispLongI10.GetParameter(1);

        TGraphErrors grTotLongI11(ncharge, chargeArr, totLongArrI11, chargeErrArr, totErrLongArrI11);
        grTotLongI11.SetName(modName+"__grTotLongI11");
        TGraphErrors grTotLongSigI11(ncharge, chargeArr, totSigArrI11, chargeErrArr, totSigErrArrI11);
        grTotLongSigI11.SetName(modName+"__grTotLongSigI11");
        TF1 f1TotLongI11("f1TotLongI11",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI11("f1DispLongI11",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI11.Fit(&f1TotLongI11,"MRQ");
        grTotLongSigI11.Fit(&f1DispLongI11,"MRQ");
        float parLongAI11 = f1TotLongI11.GetParameter(0);
        float parLongEI11 = f1TotLongI11.GetParameter(1);
        float parLongCI11 = f1TotLongI11.GetParameter(2);
        float parLongP0I11 = f1DispLongI11.GetParameter(0);
        float parLongP1I11 = f1DispLongI11.GetParameter(1);

        TGraphErrors grTotLongI12(ncharge, chargeArr, totLongArrI12, chargeErrArr, totErrLongArrI12);
        grTotLongI12.SetName(modName+"__grTotLongI12");
        TGraphErrors grTotLongSigI12(ncharge, chargeArr, totSigArrI12, chargeErrArr, totSigErrArrI12);
        grTotLongSigI12.SetName(modName+"__grTotLongSigI12");
        TF1 f1TotLongI12("f1TotLongI12",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI12("f1DispLongI12",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI12.Fit(&f1TotLongI12,"MRQ");
        grTotLongSigI12.Fit(&f1DispLongI12,"MRQ");
        float parLongAI12 = f1TotLongI12.GetParameter(0);
        float parLongEI12 = f1TotLongI12.GetParameter(1);
        float parLongCI12 = f1TotLongI12.GetParameter(2);
        float parLongP0I12 = f1DispLongI12.GetParameter(0);
        float parLongP1I12 = f1DispLongI12.GetParameter(1);

        TGraphErrors grTotLongI13(ncharge, chargeArr, totLongArrI13, chargeErrArr, totErrLongArrI13);
        grTotLongI13.SetName(modName+"__grTotLongI13");
        TGraphErrors grTotLongSigI13(ncharge, chargeArr, totSigArrI13, chargeErrArr, totSigErrArrI13);
        grTotLongSigI13.SetName(modName+"__grTotLongSigI13");
        TF1 f1TotLongI13("f1TotLongI13",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI13("f1DispLongI13",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI13.Fit(&f1TotLongI13,"MRQ");
        grTotLongSigI13.Fit(&f1DispLongI13,"MRQ");
        float parLongAI13 = f1TotLongI13.GetParameter(0);
        float parLongEI13 = f1TotLongI13.GetParameter(1);
        float parLongCI13 = f1TotLongI13.GetParameter(2);
        float parLongP0I13 = f1DispLongI13.GetParameter(0);
        float parLongP1I13 = f1DispLongI13.GetParameter(1);

        TGraphErrors grTotLongI14(ncharge, chargeArr, totLongArrI14, chargeErrArr, totErrLongArrI14);
        grTotLongI14.SetName(modName+"__grTotLongI14");
        TGraphErrors grTotLongSigI14(ncharge, chargeArr, totSigArrI14, chargeErrArr, totSigErrArrI14);
        grTotLongSigI14.SetName(modName+"__grTotLongSigI14");
        TF1 f1TotLongI14("f1TotLongI14",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI14("f1DispLongI14",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI14.Fit(&f1TotLongI14,"MRQ");
        grTotLongSigI14.Fit(&f1DispLongI14,"MRQ");
        float parLongAI14 = f1TotLongI14.GetParameter(0);
        float parLongEI14 = f1TotLongI14.GetParameter(1);
        float parLongCI14 = f1TotLongI14.GetParameter(2);
        float parLongP0I14 = f1DispLongI14.GetParameter(0);
        float parLongP1I14 = f1DispLongI14.GetParameter(1);

        TGraphErrors grTotLongI15(ncharge, chargeArr, totLongArrI15, chargeErrArr, totErrLongArrI15);
        grTotLongI15.SetName(modName+"__grTotLongI15");
        TGraphErrors grTotLongSigI15(ncharge, chargeArr, totSigArrI15, chargeErrArr, totSigErrArrI15);
        grTotLongSigI15.SetName(modName+"__grTotLongSigI15");
        TF1 f1TotLongI15("f1TotLongI15",funcTot, FitStartingPoint, chargeArr[ncharge-1]+100, 3);
        TF1 f1DispLongI15("f1DispLongI15",funcDisp, FitStartingPoint, chargeArr[ncharge-1]+100, 2);
        grTotLongI15.Fit(&f1TotLongI15,"MRQ");
        grTotLongSigI15.Fit(&f1DispLongI15,"MRQ");
        float parLongAI15 = f1TotLongI15.GetParameter(0);
        float parLongEI15 = f1TotLongI15.GetParameter(1);
        float parLongCI15 = f1TotLongI15.GetParameter(2);
        float parLongP0I15 = f1DispLongI15.GetParameter(0);
        float parLongP1I15 = f1DispLongI15.GetParameter(1);

        float badcalI0[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        float badcalI1[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        float badcalI2[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        float badcalI3[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        float badcalI4[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        float badcalI5[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        float badcalI6[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        float badcalI7[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        float badcalI8[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        float badcalI9[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        float badcalI10[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        float badcalI11[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        float badcalI12[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        float badcalI13[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        float badcalI14[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        float badcalI15[ncharge] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        for (int i=qthresh; i<ncharge; i++){
            badcalI0[i] = abs( 1 - ( (parAI0 * parEI0 - parCI0 * totArrI0[i]) / (totArrI0[i] - parAI0) ) / chargeArr[i] );
            badcalI1[i] = abs( 1 - ( (parAI1 * parEI1 - parCI1 * totArrI1[i]) / (totArrI1[i] - parAI1) ) / chargeArr[i] );
            badcalI2[i] = abs( 1 - ( (parAI2 * parEI2 - parCI2 * totArrI2[i]) / (totArrI2[i] - parAI2) ) / chargeArr[i] );
            badcalI3[i] = abs( 1 - ( (parAI3 * parEI3 - parCI3 * totArrI3[i]) / (totArrI3[i] - parAI3) ) / chargeArr[i] );
            badcalI4[i] = abs( 1 - ( (parAI4 * parEI4 - parCI4 * totArrI4[i]) / (totArrI4[i] - parAI4) ) / chargeArr[i] );
            badcalI5[i] = abs( 1 - ( (parAI5 * parEI5 - parCI5 * totArrI5[i]) / (totArrI5[i] - parAI5) ) / chargeArr[i] );
            badcalI6[i] = abs( 1 - ( (parAI6 * parEI6 - parCI6 * totArrI6[i]) / (totArrI6[i] - parAI6) ) / chargeArr[i] );
            badcalI7[i] = abs( 1 - ( (parAI7 * parEI7 - parCI7 * totArrI7[i]) / (totArrI7[i] - parAI7) ) / chargeArr[i] );
            badcalI8[i] = abs( 1 - ( (parAI8 * parEI8 - parCI8 * totArrI8[i]) / (totArrI8[i] - parAI8) ) / chargeArr[i] );
            badcalI9[i] = abs( 1 - ( (parAI9 * parEI9 - parCI9 * totArrI9[i]) / (totArrI9[i] - parAI9) ) / chargeArr[i] );
            badcalI10[i] = abs( 1 - ( (parAI10 * parEI10 - parCI10 * totArrI10[i]) / (totArrI10[i] - parAI10) ) / chargeArr[i] );
            badcalI11[i] = abs( 1 - ( (parAI11 * parEI11 - parCI11 * totArrI11[i]) / (totArrI11[i] - parAI11) ) / chargeArr[i] );
            badcalI12[i] = abs( 1 - ( (parAI12 * parEI12 - parCI12 * totArrI12[i]) / (totArrI12[i] - parAI12) ) / chargeArr[i] );
            badcalI13[i] = abs( 1 - ( (parAI13 * parEI13 - parCI13 * totArrI13[i]) / (totArrI13[i] - parAI13) ) / chargeArr[i] );
            badcalI14[i] = abs( 1 - ( (parAI14 * parEI14 - parCI14 * totArrI14[i]) / (totArrI14[i] - parAI14) ) / chargeArr[i] );
            badcalI15[i] = abs( 1 - ( (parAI15 * parEI15 - parCI15 * totArrI15[i]) / (totArrI15[i] - parAI15) ) / chargeArr[i] );
        }

        float badcalI0_max = *max_element(badcalI0, badcalI0 + ncharge);
        float badcalI1_max = *max_element(badcalI1, badcalI1 + ncharge);
        float badcalI2_max = *max_element(badcalI2, badcalI2 + ncharge);
        float badcalI3_max = *max_element(badcalI3, badcalI3 + ncharge);
        float badcalI4_max = *max_element(badcalI4, badcalI4 + ncharge);
        float badcalI5_max = *max_element(badcalI5, badcalI5 + ncharge);
        float badcalI6_max = *max_element(badcalI6, badcalI6 + ncharge);
        float badcalI7_max = *max_element(badcalI7, badcalI7 + ncharge);
        float badcalI8_max = *max_element(badcalI8, badcalI8 + ncharge);
        float badcalI9_max = *max_element(badcalI9, badcalI9 + ncharge);
        float badcalI10_max = *max_element(badcalI10, badcalI10 + ncharge);
        float badcalI11_max = *max_element(badcalI11, badcalI11 + ncharge);
        float badcalI12_max = *max_element(badcalI12, badcalI12 + ncharge);
        float badcalI13_max = *max_element(badcalI13, badcalI13 + ncharge);
        float badcalI14_max = *max_element(badcalI14, badcalI14 + ncharge);
        float badcalI15_max = *max_element(badcalI15, badcalI15 + ncharge);

        std::vector<Double_t> chargeArrI0_re;
        std::vector<Double_t> chargeArrI1_re;
        std::vector<Double_t> chargeArrI2_re;
        std::vector<Double_t> chargeArrI3_re;
        std::vector<Double_t> chargeArrI4_re;
        std::vector<Double_t> chargeArrI5_re;
        std::vector<Double_t> chargeArrI6_re;
        std::vector<Double_t> chargeArrI7_re;
        std::vector<Double_t> chargeArrI8_re;
        std::vector<Double_t> chargeArrI9_re;
        std::vector<Double_t> chargeArrI10_re;
        std::vector<Double_t> chargeArrI11_re;
        std::vector<Double_t> chargeArrI12_re;
        std::vector<Double_t> chargeArrI13_re;
        std::vector<Double_t> chargeArrI14_re;
        std::vector<Double_t> chargeArrI15_re;

        std::vector<Double_t> chargeErrArrI0_re;
        std::vector<Double_t> chargeErrArrI1_re;
        std::vector<Double_t> chargeErrArrI2_re;
        std::vector<Double_t> chargeErrArrI3_re;
        std::vector<Double_t> chargeErrArrI4_re;
        std::vector<Double_t> chargeErrArrI5_re;
        std::vector<Double_t> chargeErrArrI6_re;
        std::vector<Double_t> chargeErrArrI7_re;
        std::vector<Double_t> chargeErrArrI8_re;
        std::vector<Double_t> chargeErrArrI9_re;
        std::vector<Double_t> chargeErrArrI10_re;
        std::vector<Double_t> chargeErrArrI11_re;
        std::vector<Double_t> chargeErrArrI12_re;
        std::vector<Double_t> chargeErrArrI13_re;
        std::vector<Double_t> chargeErrArrI14_re;
        std::vector<Double_t> chargeErrArrI15_re;

        std::vector<Double_t> totArrI0_re;
        std::vector<Double_t> totArrI1_re;
        std::vector<Double_t> totArrI2_re;
        std::vector<Double_t> totArrI3_re;
        std::vector<Double_t> totArrI4_re;
        std::vector<Double_t> totArrI5_re;
        std::vector<Double_t> totArrI6_re;
        std::vector<Double_t> totArrI7_re;
        std::vector<Double_t> totArrI8_re;
        std::vector<Double_t> totArrI9_re;
        std::vector<Double_t> totArrI10_re;
        std::vector<Double_t> totArrI11_re;
        std::vector<Double_t> totArrI12_re;
        std::vector<Double_t> totArrI13_re;
        std::vector<Double_t> totArrI14_re;
        std::vector<Double_t> totArrI15_re;

        std::vector<Double_t> totErrArrI0_re;
        std::vector<Double_t> totErrArrI1_re;
        std::vector<Double_t> totErrArrI2_re;
        std::vector<Double_t> totErrArrI3_re;
        std::vector<Double_t> totErrArrI4_re;
        std::vector<Double_t> totErrArrI5_re;
        std::vector<Double_t> totErrArrI6_re;
        std::vector<Double_t> totErrArrI7_re;
        std::vector<Double_t> totErrArrI8_re;
        std::vector<Double_t> totErrArrI9_re;
        std::vector<Double_t> totErrArrI10_re;
        std::vector<Double_t> totErrArrI11_re;
        std::vector<Double_t> totErrArrI12_re;
        std::vector<Double_t> totErrArrI13_re;
        std::vector<Double_t> totErrArrI14_re;
        std::vector<Double_t> totErrArrI15_re;

        std::vector<Double_t> totSigArrI0_re;
        std::vector<Double_t> totSigArrI1_re;
        std::vector<Double_t> totSigArrI2_re;
        std::vector<Double_t> totSigArrI3_re;
        std::vector<Double_t> totSigArrI4_re;
        std::vector<Double_t> totSigArrI5_re;
        std::vector<Double_t> totSigArrI6_re;
        std::vector<Double_t> totSigArrI7_re;
        std::vector<Double_t> totSigArrI8_re;
        std::vector<Double_t> totSigArrI9_re;
        std::vector<Double_t> totSigArrI10_re;
        std::vector<Double_t> totSigArrI11_re;
        std::vector<Double_t> totSigArrI12_re;
        std::vector<Double_t> totSigArrI13_re;
        std::vector<Double_t> totSigArrI14_re;
        std::vector<Double_t> totSigArrI15_re;

        std::vector<Double_t> totSigErrArrI0_re;
        std::vector<Double_t> totSigErrArrI1_re;
        std::vector<Double_t> totSigErrArrI2_re;
        std::vector<Double_t> totSigErrArrI3_re;
        std::vector<Double_t> totSigErrArrI4_re;
        std::vector<Double_t> totSigErrArrI5_re;
        std::vector<Double_t> totSigErrArrI6_re;
        std::vector<Double_t> totSigErrArrI7_re;
        std::vector<Double_t> totSigErrArrI8_re;
        std::vector<Double_t> totSigErrArrI9_re;
        std::vector<Double_t> totSigErrArrI10_re;
        std::vector<Double_t> totSigErrArrI11_re;
        std::vector<Double_t> totSigErrArrI12_re;
        std::vector<Double_t> totSigErrArrI13_re;
        std::vector<Double_t> totSigErrArrI14_re;
        std::vector<Double_t> totSigErrArrI15_re;


        for(int i=0; i < ncharge; i++){
          chargeArrI0_re.push_back(chargeArr[i]);
          chargeArrI1_re.push_back(chargeArr[i]);
          chargeArrI2_re.push_back(chargeArr[i]);
          chargeArrI3_re.push_back(chargeArr[i]);
          chargeArrI4_re.push_back(chargeArr[i]);
          chargeArrI5_re.push_back(chargeArr[i]);
          chargeArrI6_re.push_back(chargeArr[i]);
          chargeArrI7_re.push_back(chargeArr[i]);
          chargeArrI8_re.push_back(chargeArr[i]);
          chargeArrI9_re.push_back(chargeArr[i]);
          chargeArrI10_re.push_back(chargeArr[i]);
          chargeArrI11_re.push_back(chargeArr[i]);
          chargeArrI12_re.push_back(chargeArr[i]);
          chargeArrI13_re.push_back(chargeArr[i]);
          chargeArrI14_re.push_back(chargeArr[i]);
          chargeArrI15_re.push_back(chargeArr[i]);

          chargeErrArrI0_re.push_back(chargeErrArr[i]);
          chargeErrArrI1_re.push_back(chargeErrArr[i]);
          chargeErrArrI2_re.push_back(chargeErrArr[i]);
          chargeErrArrI3_re.push_back(chargeErrArr[i]);
          chargeErrArrI4_re.push_back(chargeErrArr[i]);
          chargeErrArrI5_re.push_back(chargeErrArr[i]);
          chargeErrArrI6_re.push_back(chargeErrArr[i]);
          chargeErrArrI7_re.push_back(chargeErrArr[i]);
          chargeErrArrI8_re.push_back(chargeErrArr[i]);
          chargeErrArrI9_re.push_back(chargeErrArr[i]);
          chargeErrArrI10_re.push_back(chargeErrArr[i]);
          chargeErrArrI11_re.push_back(chargeErrArr[i]);
          chargeErrArrI12_re.push_back(chargeErrArr[i]);
          chargeErrArrI13_re.push_back(chargeErrArr[i]);
          chargeErrArrI14_re.push_back(chargeErrArr[i]);
          chargeErrArrI15_re.push_back(chargeErrArr[i]);

          totArrI0_re.push_back(totArrI0[i]);
          totArrI1_re.push_back(totArrI1[i]);
          totArrI2_re.push_back(totArrI2[i]);
          totArrI3_re.push_back(totArrI3[i]);
          totArrI4_re.push_back(totArrI4[i]);
          totArrI5_re.push_back(totArrI5[i]);
          totArrI6_re.push_back(totArrI6[i]);
          totArrI7_re.push_back(totArrI7[i]);
          totArrI8_re.push_back(totArrI8[i]);
          totArrI9_re.push_back(totArrI9[i]);
          totArrI10_re.push_back(totArrI10[i]);
          totArrI11_re.push_back(totArrI11[i]);
          totArrI12_re.push_back(totArrI12[i]);
          totArrI13_re.push_back(totArrI13[i]);
          totArrI14_re.push_back(totArrI14[i]);
          totArrI15_re.push_back(totArrI15[i]);

          totErrArrI0_re.push_back(totErrArrI0[i]);
          totErrArrI1_re.push_back(totErrArrI1[i]);
          totErrArrI2_re.push_back(totErrArrI2[i]);
          totErrArrI3_re.push_back(totErrArrI3[i]);
          totErrArrI4_re.push_back(totErrArrI4[i]);
          totErrArrI5_re.push_back(totErrArrI5[i]);
          totErrArrI6_re.push_back(totErrArrI6[i]);
          totErrArrI7_re.push_back(totErrArrI7[i]);
          totErrArrI8_re.push_back(totErrArrI8[i]);
          totErrArrI9_re.push_back(totErrArrI9[i]);
          totErrArrI10_re.push_back(totErrArrI10[i]);
          totErrArrI11_re.push_back(totErrArrI11[i]);
          totErrArrI12_re.push_back(totErrArrI12[i]);
          totErrArrI13_re.push_back(totErrArrI13[i]);
          totErrArrI14_re.push_back(totErrArrI14[i]);
          totErrArrI15_re.push_back(totErrArrI15[i]);

          totSigArrI0_re.push_back(totSigArrI0[i]);
          totSigArrI1_re.push_back(totSigArrI1[i]);
          totSigArrI2_re.push_back(totSigArrI2[i]);
          totSigArrI3_re.push_back(totSigArrI3[i]);
          totSigArrI4_re.push_back(totSigArrI4[i]);
          totSigArrI5_re.push_back(totSigArrI5[i]);
          totSigArrI6_re.push_back(totSigArrI6[i]);
          totSigArrI7_re.push_back(totSigArrI7[i]);
          totSigArrI8_re.push_back(totSigArrI8[i]);
          totSigArrI9_re.push_back(totSigArrI9[i]);
          totSigArrI10_re.push_back(totSigArrI10[i]);
          totSigArrI11_re.push_back(totSigArrI11[i]);
          totSigArrI12_re.push_back(totSigArrI12[i]);
          totSigArrI13_re.push_back(totSigArrI13[i]);
          totSigArrI14_re.push_back(totSigArrI14[i]);
          totSigArrI15_re.push_back(totSigArrI15[i]);

          totSigErrArrI0_re.push_back(totSigErrArrI0[i]);
          totSigErrArrI1_re.push_back(totSigErrArrI1[i]);
          totSigErrArrI2_re.push_back(totSigErrArrI2[i]);
          totSigErrArrI3_re.push_back(totSigErrArrI3[i]);
          totSigErrArrI4_re.push_back(totSigErrArrI4[i]);
          totSigErrArrI5_re.push_back(totSigErrArrI5[i]);
          totSigErrArrI6_re.push_back(totSigErrArrI6[i]);
          totSigErrArrI7_re.push_back(totSigErrArrI7[i]);
          totSigErrArrI8_re.push_back(totSigErrArrI8[i]);
          totSigErrArrI9_re.push_back(totSigErrArrI9[i]);
          totSigErrArrI10_re.push_back(totSigErrArrI10[i]);
          totSigErrArrI11_re.push_back(totSigErrArrI11[i]);
          totSigErrArrI12_re.push_back(totSigErrArrI12[i]);
          totSigErrArrI13_re.push_back(totSigErrArrI13[i]);
          totSigErrArrI14_re.push_back(totSigErrArrI14[i]);
          totSigErrArrI15_re.push_back(totSigErrArrI15[i]);
        }

        const double chi2_error = 0.05;
        fprintf(outputfile, "%s", modStr.c_str());
        fprintf(outputfile, "\n");

        int ncharge_re = ncharge;
        fprintf(outputfile, "[ ");

        while(badcalI0_max > chi2_error){
          if(badcalI0_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI0 * parEI0 - parCI0 * totArrI0_re[i]) / (totArrI0_re[i] - parAI0)) / chargeArrI0_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI0_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI0_re.erase(chargeArrI0_re.begin() + n_max);
            totArrI0_re.erase(totArrI0_re.begin() + n_max);
            totSigArrI0_re.erase(totSigArrI0_re.begin() + n_max);
            chargeErrArrI0_re.erase(chargeErrArrI0_re.begin() + n_max);
            totErrArrI0_re.erase(totErrArrI0_re.begin() + n_max);
            totSigErrArrI0_re.erase(totSigErrArrI0_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI0_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI0_re.erase(chargeArrI0_re.begin() + n_max);
              totArrI0_re.erase(totArrI0_re.begin() + n_max);
              totSigArrI0_re.erase(totSigArrI0_re.begin() + n_max);
              chargeErrArrI0_re.erase(chargeErrArrI0_re.begin() + n_max);
              totErrArrI0_re.erase(totErrArrI0_re.begin() + n_max);
              totSigErrArrI0_re.erase(totSigErrArrI0_re.begin() + n_max);
            }

            TGraphErrors grTotI0(ncharge_re, &chargeArrI0_re[0], &totArrI0_re[0], &chargeErrArrI0_re[0], &totErrArrI0_re[0]);
            grTotI0.SetName(modName+"__grTotI0");
            TGraphErrors grTotSigI0(ncharge_re, &chargeArrI0_re[0], &totSigArrI0_re[0], &chargeErrArrI0_re[0], &totSigErrArrI0_re[0]);
            grTotSigI0.SetName(modName+"__grTotSigI0");
            TF1 f1TotI0("f1TotI0",funcTot, FitStartingPoint, chargeArrI0_re[ncharge_re-1]+100, 3);
            TF1 f1DispI0("f1DispI0",funcDisp, FitStartingPoint, chargeArrI0_re[ncharge_re-1]+100, 2);
            grTotI0.Fit(&f1TotI0,"MRQ");
            grTotSigI0.Fit(&f1DispI0,"MRQ");
            parAI0 = f1TotI0.GetParameter(0);
            parEI0 = f1TotI0.GetParameter(1);
            parCI0 = f1TotI0.GetParameter(2);
            parP0I0 = f1DispI0.GetParameter(0);
            parP1I0 = f1DispI0.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI0[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI0[i] = abs( 1 - ( (parAI0 * parEI0 - parCI0 * totArrI0_re[i]) / (totArrI0_re[i] - parAI0) ) / chargeArrI0_re[i] );
            }
            badcalI0_max = *max_element(badcalI0, badcalI0 + 10);
          }
        }
        fprintf(outputfile, "]");

        ncharge_re = ncharge;
        fprintf(outputfile, "\n");
        fprintf(outputfile, "[ ");

        while(badcalI1_max > chi2_error){
          if(badcalI1_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI1 * parEI1 - parCI1 * totArrI1_re[i]) / (totArrI1_re[i] - parAI1)) / chargeArrI1_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI1_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI1_re.erase(chargeArrI1_re.begin() + n_max);
            totArrI1_re.erase(totArrI1_re.begin() + n_max);
            totSigArrI1_re.erase(totSigArrI1_re.begin() + n_max);
            chargeErrArrI1_re.erase(chargeErrArrI1_re.begin() + n_max);
            totErrArrI1_re.erase(totErrArrI1_re.begin() + n_max);
            totSigErrArrI1_re.erase(totSigErrArrI1_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI1_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI1_re.erase(chargeArrI1_re.begin() + n_max);
              totArrI1_re.erase(totArrI1_re.begin() + n_max );
              totSigArrI1_re.erase(totSigArrI1_re.begin() + n_max );
              chargeErrArrI1_re.erase(chargeErrArrI1_re.begin() + n_max);
              totErrArrI1_re.erase(totErrArrI1_re.begin() + n_max );
              totSigErrArrI1_re.erase(totSigErrArrI1_re.begin() + n_max);
            }

            TGraphErrors grTotI1(ncharge_re, &chargeArrI1_re[0], &totArrI1_re[0], &chargeErrArrI1_re[0], &totErrArrI1_re[0]);
            grTotI1.SetName(modName+"__grTotI1");
            TGraphErrors grTotSigI1(ncharge_re, &chargeArrI1_re[0], &totSigArrI1_re[0], &chargeErrArrI1_re[0], &totSigErrArrI1_re[0]);
            grTotSigI1.SetName(modName+"__grTotSigI1");
            TF1 f1TotI1("f1TotI1",funcTot, FitStartingPoint, chargeArrI1_re[ncharge_re-1]+100, 3);
            TF1 f1DispI1("f1DispI1",funcDisp, FitStartingPoint, chargeArrI1_re[ncharge_re-1]+100, 2);
            grTotI1.Fit(&f1TotI1,"MRQ");
            grTotSigI1.Fit(&f1DispI1,"MRQ");
            parAI1 = f1TotI1.GetParameter(0);
            parEI1 = f1TotI1.GetParameter(1);
            parCI1 = f1TotI1.GetParameter(2);
            parP0I1 = f1DispI1.GetParameter(0);
            parP1I1 = f1DispI1.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI1[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI1[i] = abs( 1 - ( (parAI1 * parEI1 - parCI1 * totArrI1_re[i]) / (totArrI1_re[i] - parAI1) ) / chargeArrI1_re[i]) ;
            }
            badcalI1_max = *max_element(badcalI1, badcalI1 + ncharge_re);
          }
        }
        fprintf(outputfile, "]");

        ncharge_re = ncharge;
        fprintf(outputfile, "\n");
        fprintf(outputfile, "[ ");

        while(badcalI2_max > chi2_error){
          if(badcalI2_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI2 * parEI2 - parCI2 * totArrI2_re[i]) / (totArrI2_re[i] - parAI2)) / chargeArrI2_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI2_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI2_re.erase(chargeArrI2_re.begin() + n_max);
            totArrI2_re.erase(totArrI2_re.begin() + n_max);
            totSigArrI2_re.erase(totSigArrI2_re.begin() + n_max);
            chargeErrArrI2_re.erase(chargeErrArrI2_re.begin() + n_max);
            totErrArrI2_re.erase(totErrArrI2_re.begin() + n_max);
            totSigErrArrI2_re.erase(totSigErrArrI2_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI2_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI2_re.erase(chargeArrI2_re.begin() + n_max);
              totArrI2_re.erase(totArrI2_re.begin() + n_max);
              totSigArrI2_re.erase(totSigArrI2_re.begin() + n_max);
              chargeErrArrI2_re.erase(chargeErrArrI2_re.begin() + n_max);
              totErrArrI2_re.erase(totErrArrI2_re.begin() + n_max);
              totSigErrArrI2_re.erase(totSigErrArrI2_re.begin() + n_max);
            }

            TGraphErrors grTotI2(ncharge_re, &chargeArrI2_re[0], &totArrI2_re[0], &chargeErrArrI2_re[0], &totErrArrI2_re[0]);
            grTotI2.SetName(modName+"__grTotI2");
            TGraphErrors grTotSigI2(ncharge_re, &chargeArrI2_re[0], &totSigArrI2_re[0], &chargeErrArrI2_re[0], &totSigErrArrI2_re[0]);
            grTotSigI2.SetName(modName+"__grTotSigI2");
            TF1 f1TotI2("f1TotI2",funcTot, FitStartingPoint, chargeArrI2_re[ncharge_re-1]+100, 3);
            TF1 f1DispI2("f1DispI2",funcDisp, FitStartingPoint, chargeArrI2_re[ncharge_re-1]+100, 2);
            grTotI2.Fit(&f1TotI2,"MRQ");
            grTotSigI2.Fit(&f1DispI2,"MRQ");
            parAI2 = f1TotI2.GetParameter(0);
            parEI2 = f1TotI2.GetParameter(1);
            parCI2 = f1TotI2.GetParameter(2);
            parP0I2 = f1DispI2.GetParameter(0);
            parP1I2 = f1DispI2.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI2[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI2[i] = abs( 1 - ( (parAI2 * parEI2 - parCI2 * totArrI2_re[i]) / (totArrI2_re[i] - parAI2) ) / chargeArrI2_re[i] );
            }
            badcalI2_max = *max_element(badcalI2, badcalI2 + ncharge_re);
            if( badcalI2_max > 5000){badcalI2_max = -10;}
          }
        }
        fprintf(outputfile, "]");

        ncharge_re = ncharge;
        fprintf(outputfile, "\n");
        fprintf(outputfile, "[ ");

        while(badcalI3_max > chi2_error){
          if(badcalI3_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI3 * parEI3 - parCI3 * totArrI3_re[i]) / (totArrI3_re[i] - parAI3)) / chargeArrI3_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI3_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI3_re.erase(chargeArrI3_re.begin() + n_max);
            totArrI3_re.erase(totArrI3_re.begin() + n_max);
            totSigArrI3_re.erase(totSigArrI3_re.begin() + n_max);
            chargeErrArrI3_re.erase(chargeErrArrI3_re.begin() + n_max);
            totErrArrI3_re.erase(totErrArrI3_re.begin() + n_max);
            totSigErrArrI3_re.erase(totSigErrArrI3_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI3_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI3_re.erase(chargeArrI3_re.begin() + n_max);
              totArrI3_re.erase(totArrI3_re.begin() + n_max);
              totSigArrI3_re.erase(totSigArrI3_re.begin() + n_max);
              chargeErrArrI3_re.erase(chargeErrArrI3_re.begin() + n_max);
              totErrArrI3_re.erase(totErrArrI3_re.begin() + n_max);
              totSigErrArrI3_re.erase(totSigErrArrI3_re.begin() + n_max);
            }

            TGraphErrors grTotI3(ncharge_re, &chargeArrI3_re[0], &totArrI3_re[0], &chargeErrArrI3_re[0], &totErrArrI3_re[0]);
            grTotI3.SetName(modName+"__grTotI3");
            TGraphErrors grTotSigI3(ncharge_re, &chargeArrI3_re[0], &totSigArrI3_re[0], &chargeErrArrI3_re[0], &totSigErrArrI3_re[0]);
            grTotSigI3.SetName(modName+"__grTotSigI3");
            TF1 f1TotI3("f1TotI3",funcTot, FitStartingPoint, chargeArrI3_re[ncharge_re-1]+100, 3);
            TF1 f1DispI3("f1DispI3",funcDisp, FitStartingPoint, chargeArrI3_re[ncharge_re-1]+100, 2);
            grTotI3.Fit(&f1TotI3,"MRQ");
            grTotSigI3.Fit(&f1DispI3,"MRQ");
            parAI3 = f1TotI3.GetParameter(0);
            parEI3 = f1TotI3.GetParameter(1);
            parCI3 = f1TotI3.GetParameter(2);
            parP0I3 = f1DispI3.GetParameter(0);
            parP1I3 = f1DispI3.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI3[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI3[i] = abs( 1 - ( (parAI3 * parEI3 - parCI3 * totArrI3_re[i]) / (totArrI3_re[i] - parAI3) ) / chargeArrI3_re[i] );
            }
            badcalI3_max = *max_element(badcalI3, badcalI3 + ncharge_re);
          }
        }
        fprintf(outputfile, "]");

        ncharge_re = ncharge;
        fprintf(outputfile, "\n");
        fprintf(outputfile, "[ ");

        while(badcalI4_max > chi2_error){
          if(badcalI4_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI4 * parEI4 - parCI4 * totArrI4_re[i]) / (totArrI4_re[i] - parAI4)) / chargeArrI4_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI4_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI4_re.erase(chargeArrI4_re.begin() + n_max);
            totArrI4_re.erase(totArrI4_re.begin() + n_max);
            totSigArrI4_re.erase(totSigArrI4_re.begin() + n_max);
            chargeErrArrI4_re.erase(chargeErrArrI4_re.begin() + n_max);
            totErrArrI4_re.erase(totErrArrI4_re.begin() + n_max);
            totSigErrArrI4_re.erase(totSigErrArrI4_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI4_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI4_re.erase(chargeArrI4_re.begin() + n_max);
              totArrI4_re.erase(totArrI4_re.begin() + n_max);
              totSigArrI4_re.erase(totSigArrI4_re.begin() + n_max);
              chargeErrArrI4_re.erase(chargeErrArrI4_re.begin() + n_max);
              totErrArrI4_re.erase(totErrArrI4_re.begin() + n_max);
              totSigErrArrI4_re.erase(totSigErrArrI4_re.begin() + n_max);
            }

            TGraphErrors grTotI4(ncharge_re, &chargeArrI4_re[0], &totArrI4_re[0], &chargeErrArrI4_re[0], &totErrArrI4_re[0]);
            grTotI4.SetName(modName+"__grTotI4");
            TGraphErrors grTotSigI4(ncharge_re, &chargeArrI4_re[0], &totSigArrI4_re[0], &chargeErrArrI4_re[0], &totSigErrArrI4_re[0]);
            grTotSigI4.SetName(modName+"__grTotSigI4");
            TF1 f1TotI4("f1TotI4",funcTot, FitStartingPoint, chargeArrI4_re[ncharge_re-1]+100, 3);
            TF1 f1DispI4("f1DispI4",funcDisp, FitStartingPoint, chargeArrI4_re[ncharge_re-1]+100, 2);
            grTotI4.Fit(&f1TotI4,"MRQ");
            grTotSigI4.Fit(&f1DispI4,"MRQ");
            parAI4 = f1TotI4.GetParameter(0);
            parEI4 = f1TotI4.GetParameter(1);
            parCI4 = f1TotI4.GetParameter(2);
            parP0I4 = f1DispI4.GetParameter(0);
            parP1I4 = f1DispI4.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI4[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI4[i] = abs( 1 - ( (parAI4 * parEI4 - parCI4 * totArrI4_re[i]) / (totArrI4_re[i] - parAI4) ) / chargeArrI4_re[i] );
            }
            badcalI4_max = *max_element(badcalI4, badcalI4 + ncharge_re);
          }
        }
        fprintf(outputfile, "]");

        ncharge_re = ncharge;
        fprintf(outputfile, "\n");
        fprintf(outputfile, "[ ");

        while(badcalI5_max > chi2_error){
          if(badcalI5_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI5 * parEI5 - parCI5 * totArrI5_re[i]) / (totArrI5_re[i] - parAI5)) / chargeArrI5_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI5_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI5_re.erase(chargeArrI5_re.begin() + n_max);
            totArrI5_re.erase(totArrI5_re.begin() + n_max);
            totSigArrI5_re.erase(totSigArrI5_re.begin() + n_max);
            chargeErrArrI5_re.erase(chargeErrArrI5_re.begin() + n_max);
            totErrArrI5_re.erase(totErrArrI5_re.begin() + n_max);
            totSigErrArrI5_re.erase(totSigErrArrI5_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI5_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI5_re.erase(chargeArrI5_re.begin() + n_max);
              totArrI5_re.erase(totArrI5_re.begin() + n_max);
              totSigArrI5_re.erase(totSigArrI5_re.begin() + n_max);
              chargeErrArrI5_re.erase(chargeErrArrI5_re.begin() + n_max);
              totErrArrI5_re.erase(totErrArrI5_re.begin() + n_max);
              totSigErrArrI5_re.erase(totSigErrArrI5_re.begin() + n_max);
            }

            TGraphErrors grTotI5(ncharge_re, &chargeArrI5_re[0], &totArrI5_re[0], &chargeErrArrI5_re[0], &totErrArrI5_re[0]);
            grTotI5.SetName(modName+"__grTotI5");
            TGraphErrors grTotSigI5(ncharge_re, &chargeArrI5_re[0], &totSigArrI5_re[0], &chargeErrArrI5_re[0], &totSigErrArrI5_re[0]);
            grTotSigI5.SetName(modName+"__grTotSigI5");
            TF1 f1TotI5("f1TotI5",funcTot, FitStartingPoint, chargeArrI5_re[ncharge_re-1]+100, 3);
            TF1 f1DispI5("f1DispI5",funcDisp, FitStartingPoint, chargeArrI5_re[ncharge_re-1]+100, 2);
            grTotI5.Fit(&f1TotI5,"MRQ");
            grTotSigI5.Fit(&f1DispI5,"MRQ");
            parAI5 = f1TotI5.GetParameter(0);
            parEI5 = f1TotI5.GetParameter(1);
            parCI5 = f1TotI5.GetParameter(2);
            parP0I5 = f1DispI5.GetParameter(0);
            parP1I5 = f1DispI5.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI5[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI5[i] = abs( 1 - ( (parAI5 * parEI5 - parCI5 * totArrI5_re[i]) / (totArrI5_re[i] - parAI5) ) / chargeArrI5_re[i] );
            }
            badcalI5_max = *max_element(badcalI5, badcalI5 + ncharge_re);
          }
        }
        fprintf(outputfile, "]");

        ncharge_re = ncharge;
        fprintf(outputfile, "\n");
        fprintf(outputfile, "[ ");

        while(badcalI6_max > chi2_error){
          if(badcalI6_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI6 * parEI6 - parCI6 * totArrI6_re[i]) / (totArrI6_re[i] - parAI6)) / chargeArrI6_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI6_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI6_re.erase(chargeArrI6_re.begin() + n_max);
            totArrI6_re.erase(totArrI6_re.begin() + n_max);
            totSigArrI6_re.erase(totSigArrI6_re.begin() + n_max);
            chargeErrArrI6_re.erase(chargeErrArrI6_re.begin() + n_max);
            totErrArrI6_re.erase(totErrArrI6_re.begin() + n_max);
            totSigErrArrI6_re.erase(totSigErrArrI6_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI6_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI6_re.erase(chargeArrI6_re.begin() + n_max);
              totArrI6_re.erase(totArrI6_re.begin() + n_max);
              totSigArrI6_re.erase(totSigArrI6_re.begin() + n_max);
              chargeErrArrI6_re.erase(chargeErrArrI6_re.begin() + n_max);
              totErrArrI6_re.erase(totErrArrI6_re.begin() + n_max);
              totSigErrArrI6_re.erase(totSigErrArrI6_re.begin() + n_max);
            }

            TGraphErrors grTotI6(ncharge_re, &chargeArrI6_re[0], &totArrI6_re[0], &chargeErrArrI6_re[0], &totErrArrI6_re[0]);
            grTotI6.SetName(modName+"__grTotI6");
            TGraphErrors grTotSigI6(ncharge_re, &chargeArrI6_re[0], &totSigArrI6_re[0], &chargeErrArrI6_re[0], &totSigErrArrI6_re[0]);
            grTotSigI6.SetName(modName+"__grTotSigI6");
            TF1 f1TotI6("f1TotI6",funcTot, FitStartingPoint, chargeArrI6_re[ncharge_re-1]+100, 3);
            TF1 f1DispI6("f1DispI6",funcDisp, FitStartingPoint, chargeArrI6_re[ncharge_re-1]+100, 2);
            grTotI6.Fit(&f1TotI6,"MRQ");
            grTotSigI6.Fit(&f1DispI6,"MRQ");
            parAI6 = f1TotI6.GetParameter(0);
            parEI6 = f1TotI6.GetParameter(1);
            parCI6 = f1TotI6.GetParameter(2);
            parP0I6 = f1DispI6.GetParameter(0);
            parP1I6 = f1DispI6.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI6[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI6[i] = abs( 1 - ( (parAI6 * parEI6 - parCI6 * totArrI6_re[i]) / (totArrI6_re[i] - parAI6) ) / chargeArrI6_re[i] );
            }
            badcalI6_max = *max_element(badcalI6, badcalI6 + ncharge_re);
          }
        }
        fprintf(outputfile, "]");

        ncharge_re = ncharge;
        fprintf(outputfile, "\n");
        fprintf(outputfile, "[ ");

        while(badcalI7_max > chi2_error){
          if(badcalI7_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI7 * parEI7 - parCI7 * totArrI7_re[i]) / (totArrI7_re[i] - parAI7)) / chargeArrI7_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI7_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI7_re.erase(chargeArrI7_re.begin() + n_max);
            totArrI7_re.erase(totArrI7_re.begin() + n_max);
            totSigArrI7_re.erase(totSigArrI7_re.begin() + n_max);
            chargeErrArrI7_re.erase(chargeErrArrI7_re.begin() + n_max);
            totErrArrI7_re.erase(totErrArrI7_re.begin() + n_max);
            totSigErrArrI7_re.erase(totSigErrArrI7_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI7_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI7_re.erase(chargeArrI7_re.begin() + n_max);
              totArrI7_re.erase(totArrI7_re.begin() + n_max);
              totSigArrI7_re.erase(totSigArrI7_re.begin() + n_max);
              chargeErrArrI7_re.erase(chargeErrArrI7_re.begin() + n_max);
              totErrArrI7_re.erase(totErrArrI7_re.begin() + n_max);
              totSigErrArrI7_re.erase(totSigErrArrI7_re.begin() + n_max);
            }

            TGraphErrors grTotI7(ncharge_re, &chargeArrI7_re[0], &totArrI7_re[0], &chargeErrArrI7_re[0], &totErrArrI7_re[0]);
            grTotI7.SetName(modName+"__grTotI7");
            TGraphErrors grTotSigI7(ncharge_re, &chargeArrI7_re[0], &totSigArrI7_re[0], &chargeErrArrI7_re[0], &totSigErrArrI7_re[0]);
            grTotSigI7.SetName(modName+"__grTotSigI7");
            TF1 f1TotI7("f1TotI7",funcTot, FitStartingPoint, chargeArrI7_re[ncharge_re-1]+100, 3);
            TF1 f1DispI7("f1DispI7",funcDisp, FitStartingPoint, chargeArrI7_re[ncharge_re-1]+100, 2);
            grTotI7.Fit(&f1TotI7,"MRQ");
            grTotSigI7.Fit(&f1DispI7,"MRQ");
            parAI7 = f1TotI7.GetParameter(0);
            parEI7 = f1TotI7.GetParameter(1);
            parCI7 = f1TotI7.GetParameter(2);
            parP0I7 = f1DispI7.GetParameter(0);
            parP1I7 = f1DispI7.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI7[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI7[i] = abs( 1 - ( (parAI7 * parEI7 - parCI7 * totArrI7_re[i]) / (totArrI7_re[i] - parAI7) ) / chargeArrI7_re[i] );
            }
            badcalI7_max = *max_element(badcalI7, badcalI7 + ncharge_re);
          }
        }
        fprintf(outputfile, "]");

        ncharge_re = ncharge;
        fprintf(outputfile, "\n");
        fprintf(outputfile, "[ ");

        while(badcalI8_max > chi2_error){
          if(badcalI8_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI8 * parEI8 - parCI8 * totArrI8_re[i]) / (totArrI8_re[i] - parAI8)) / chargeArrI8_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI8_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI8_re.erase(chargeArrI8_re.begin() + n_max);
            totArrI8_re.erase(totArrI8_re.begin() + n_max);
            totSigArrI8_re.erase(totSigArrI8_re.begin() + n_max);
            chargeErrArrI8_re.erase(chargeErrArrI8_re.begin() + n_max);
            totErrArrI8_re.erase(totErrArrI8_re.begin() + n_max);
            totSigErrArrI8_re.erase(totSigErrArrI8_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI8_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI8_re.erase(chargeArrI8_re.begin() + n_max);
              totArrI8_re.erase(totArrI8_re.begin() + n_max);
              totSigArrI8_re.erase(totSigArrI8_re.begin() + n_max);
              chargeErrArrI8_re.erase(chargeErrArrI8_re.begin() + n_max);
              totErrArrI8_re.erase(totErrArrI8_re.begin() + n_max);
              totSigErrArrI8_re.erase(totSigErrArrI8_re.begin() + n_max);
            }

            TGraphErrors grTotI8(ncharge_re, &chargeArrI8_re[0], &totArrI8_re[0], &chargeErrArrI8_re[0], &totErrArrI8_re[0]);
            grTotI8.SetName(modName+"__grTotI8");
            TGraphErrors grTotSigI8(ncharge_re, &chargeArrI8_re[0], &totSigArrI8_re[0], &chargeErrArrI8_re[0], &totSigErrArrI8_re[0]);
            grTotSigI8.SetName(modName+"__grTotSigI8");
            TF1 f1TotI8("f1TotI8",funcTot, FitStartingPoint, chargeArrI8_re[ncharge_re-1]+100, 3);
            TF1 f1DispI8("f1DispI8",funcDisp, FitStartingPoint, chargeArrI8_re[ncharge_re-1]+100, 2);
            grTotI8.Fit(&f1TotI8,"MRQ");
            grTotSigI8.Fit(&f1DispI8,"MRQ");
            parAI8 = f1TotI8.GetParameter(0);
            parEI8 = f1TotI8.GetParameter(1);
            parCI8 = f1TotI8.GetParameter(2);
            parP0I8 = f1DispI8.GetParameter(0);
            parP1I8 = f1DispI8.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI8[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI8[i] = abs( 1 - ( (parAI8 * parEI8 - parCI8 * totArrI8_re[i]) / (totArrI8_re[i] - parAI8) ) / chargeArrI8_re[i] );
            }
            badcalI8_max = *max_element(badcalI8, badcalI8 + ncharge_re);
          }
        }
        fprintf(outputfile, "]");

        ncharge_re = ncharge;
        fprintf(outputfile, "\n");
        fprintf(outputfile, "[ ");

        while(badcalI9_max > chi2_error){
          if(badcalI9_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI9 * parEI9 - parCI9 * totArrI9_re[i]) / (totArrI9_re[i] - parAI9)) / chargeArrI9_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI9_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI9_re.erase(chargeArrI9_re.begin() + n_max);
            totArrI9_re.erase(totArrI9_re.begin() + n_max);
            totSigArrI9_re.erase(totSigArrI9_re.begin() + n_max);
            chargeErrArrI9_re.erase(chargeErrArrI9_re.begin() + n_max);
            totErrArrI9_re.erase(totErrArrI9_re.begin() + n_max);
            totSigErrArrI9_re.erase(totSigErrArrI9_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI9_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI9_re.erase(chargeArrI9_re.begin() + n_max);
              totArrI9_re.erase(totArrI9_re.begin() + n_max);
              totSigArrI9_re.erase(totSigArrI9_re.begin() + n_max);
              chargeErrArrI9_re.erase(chargeErrArrI9_re.begin() + n_max);
              totErrArrI9_re.erase(totErrArrI9_re.begin() + n_max);
              totSigErrArrI9_re.erase(totSigErrArrI9_re.begin() + n_max);
            }

            TGraphErrors grTotI9(ncharge_re, &chargeArrI9_re[0], &totArrI9_re[0], &chargeErrArrI9_re[0], &totErrArrI9_re[0]);
            grTotI9.SetName(modName+"__grTotI9");
            TGraphErrors grTotSigI9(ncharge_re, &chargeArrI9_re[0], &totSigArrI9_re[0], &chargeErrArrI9_re[0], &totSigErrArrI9_re[0]);
            grTotSigI9.SetName(modName+"__grTotSigI9");
            TF1 f1TotI9("f1TotI9",funcTot, FitStartingPoint, chargeArrI9_re[ncharge_re-1]+100, 3);
            TF1 f1DispI9("f1DispI9",funcDisp, FitStartingPoint, chargeArrI9_re[ncharge_re-1]+100, 2);
            grTotI9.Fit(&f1TotI9,"MRQ");
            grTotSigI9.Fit(&f1DispI9,"MRQ");
            parAI9 = f1TotI9.GetParameter(0);
            parEI9 = f1TotI9.GetParameter(1);
            parCI9 = f1TotI9.GetParameter(2);
            parP0I9 = f1DispI9.GetParameter(0);
            parP1I9 = f1DispI9.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI9[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI9[i] = abs( 1 - ( (parAI9 * parEI9 - parCI9 * totArrI9_re[i]) / (totArrI9_re[i] - parAI9) ) / chargeArrI9_re[i] );
            }
            badcalI9_max = *max_element(badcalI9, badcalI9 + ncharge_re);
          }
        }
        fprintf(outputfile, "]");

        ncharge_re = ncharge;
        fprintf(outputfile, "\n");
        fprintf(outputfile, "[ ");

        while(badcalI10_max > chi2_error){
          if(badcalI10_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI10 * parEI10 - parCI10 * totArrI10_re[i]) / (totArrI10_re[i] - parAI10)) / chargeArrI10_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI10_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI10_re.erase(chargeArrI10_re.begin() + n_max);
            totArrI10_re.erase(totArrI10_re.begin() + n_max);
            totSigArrI10_re.erase(totSigArrI10_re.begin() + n_max);
            chargeErrArrI10_re.erase(chargeErrArrI10_re.begin() + n_max);
            totErrArrI10_re.erase(totErrArrI10_re.begin() + n_max);
            totSigErrArrI10_re.erase(totSigErrArrI10_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI10_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI10_re.erase(chargeArrI10_re.begin() + n_max);
              totArrI10_re.erase(totArrI10_re.begin() + n_max);
              totSigArrI10_re.erase(totSigArrI10_re.begin() + n_max);
              chargeErrArrI10_re.erase(chargeErrArrI10_re.begin() + n_max);
              totErrArrI10_re.erase(totErrArrI10_re.begin() + n_max);
              totSigErrArrI10_re.erase(totSigErrArrI10_re.begin() + n_max);
            }

            TGraphErrors grTotI10(ncharge_re, &chargeArrI10_re[0], &totArrI10_re[0], &chargeErrArrI10_re[0], &totErrArrI10_re[0]);
            grTotI10.SetName(modName+"__grTotI10");
            TGraphErrors grTotSigI10(ncharge_re, &chargeArrI10_re[0], &totSigArrI10_re[0], &chargeErrArrI10_re[0], &totSigErrArrI10_re[0]);
            grTotSigI10.SetName(modName+"__grTotSigI10");
            TF1 f1TotI10("f1TotI10",funcTot, FitStartingPoint, chargeArrI10_re[ncharge_re-1]+100, 3);
            TF1 f1DispI10("f1DispI10",funcDisp, FitStartingPoint, chargeArrI10_re[ncharge_re-1]+100, 2);
            grTotI10.Fit(&f1TotI10,"MRQ");
            grTotSigI10.Fit(&f1DispI10,"MRQ");
            parAI10 = f1TotI10.GetParameter(0);
            parEI10 = f1TotI10.GetParameter(1);
            parCI10 = f1TotI10.GetParameter(2);
            parP0I10 = f1DispI10.GetParameter(0);
            parP1I10 = f1DispI10.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI10[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI10[i] = abs( 1 - ( (parAI10 * parEI10 - parCI10 * totArrI10_re[i]) / (totArrI10_re[i] - parAI10) ) / chargeArrI10_re[i] );
            }
            badcalI10_max = *max_element(badcalI10, badcalI10 + ncharge_re);
          }
        }
        fprintf(outputfile, "]");

        ncharge_re = ncharge;
        fprintf(outputfile, "\n");
        fprintf(outputfile, "[ ");

        while(badcalI11_max > chi2_error){
          if(badcalI11_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI11 * parEI11 - parCI11 * totArrI11_re[i]) / (totArrI11_re[i] - parAI11)) / chargeArrI11_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI11_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI11_re.erase(chargeArrI11_re.begin() + n_max);
            totArrI11_re.erase(totArrI11_re.begin() + n_max);
            totSigArrI11_re.erase(totSigArrI11_re.begin() + n_max);
            chargeErrArrI11_re.erase(chargeErrArrI11_re.begin() + n_max);
            totErrArrI11_re.erase(totErrArrI11_re.begin() + n_max);
            totSigErrArrI11_re.erase(totSigErrArrI11_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI11_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI11_re.erase(chargeArrI11_re.begin() + n_max);
              totArrI11_re.erase(totArrI11_re.begin() + n_max);
              totSigArrI11_re.erase(totSigArrI11_re.begin() + n_max);
              chargeErrArrI11_re.erase(chargeErrArrI11_re.begin() + n_max);
              totErrArrI11_re.erase(totErrArrI11_re.begin() + n_max);
              totSigErrArrI11_re.erase(totSigErrArrI11_re.begin() + n_max);
            }

            TGraphErrors grTotI11(ncharge_re, &chargeArrI11_re[0], &totArrI11_re[0], &chargeErrArrI11_re[0], &totErrArrI11_re[0]);
            grTotI11.SetName(modName+"__grTotI11");
            TGraphErrors grTotSigI11(ncharge_re, &chargeArrI11_re[0], &totSigArrI11_re[0], &chargeErrArrI11_re[0], &totSigErrArrI11_re[0]);
            grTotSigI11.SetName(modName+"__grTotSigI11");
            TF1 f1TotI11("f1TotI11",funcTot, FitStartingPoint, chargeArrI11_re[ncharge_re-1]+100, 3);
            TF1 f1DispI11("f1DispI11",funcDisp, FitStartingPoint, chargeArrI11_re[ncharge_re-1]+100, 2);
            grTotI11.Fit(&f1TotI11,"MRQ");
            grTotSigI11.Fit(&f1DispI11,"MRQ");
            parAI11 = f1TotI11.GetParameter(0);
            parEI11 = f1TotI11.GetParameter(1);
            parCI11 = f1TotI11.GetParameter(2);
            parP0I11 = f1DispI11.GetParameter(0);
            parP1I11 = f1DispI11.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI11[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI11[i] = abs( 1 - ( (parAI11 * parEI11 - parCI11 * totArrI11_re[i]) / (totArrI11_re[i] - parAI11) ) / chargeArrI11_re[i] );
            }
            badcalI11_max = *max_element(badcalI11, badcalI11 + ncharge_re);
          }
        }
        fprintf(outputfile, "]");

        ncharge_re = ncharge;
        fprintf(outputfile, "\n");
        fprintf(outputfile, "[ ");

        while(badcalI12_max > chi2_error){
          if(badcalI12_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI12 * parEI12 - parCI12 * totArrI12_re[i]) / (totArrI12_re[i] - parAI12)) / chargeArrI12_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI12_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI12_re.erase(chargeArrI12_re.begin() + n_max);
            totArrI12_re.erase(totArrI12_re.begin() + n_max);
            totSigArrI12_re.erase(totSigArrI12_re.begin() + n_max);
            chargeErrArrI12_re.erase(chargeErrArrI12_re.begin() + n_max);
            totErrArrI12_re.erase(totErrArrI12_re.begin() + n_max);
            totSigErrArrI12_re.erase(totSigErrArrI12_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI12_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI12_re.erase(chargeArrI12_re.begin() + n_max);
              totArrI12_re.erase(totArrI12_re.begin() + n_max);
              totSigArrI12_re.erase(totSigArrI12_re.begin() + n_max);
              chargeErrArrI12_re.erase(chargeErrArrI12_re.begin() + n_max);
              totErrArrI12_re.erase(totErrArrI12_re.begin() + n_max);
              totSigErrArrI12_re.erase(totSigErrArrI12_re.begin() + n_max);
            }

            TGraphErrors grTotI12(ncharge_re, &chargeArrI12_re[0], &totArrI12_re[0], &chargeErrArrI12_re[0], &totErrArrI12_re[0]);
            grTotI12.SetName(modName+"__grTotI12");
            TGraphErrors grTotSigI12(ncharge_re, &chargeArrI12_re[0], &totSigArrI12_re[0], &chargeErrArrI12_re[0], &totSigErrArrI12_re[0]);
            grTotSigI12.SetName(modName+"__grTotSigI12");
            TF1 f1TotI12("f1TotI12",funcTot, FitStartingPoint, chargeArrI12_re[ncharge_re-1]+100, 3);
            TF1 f1DispI12("f1DispI12",funcDisp, FitStartingPoint, chargeArrI12_re[ncharge_re-1]+100, 2);
            grTotI12.Fit(&f1TotI12,"MRQ");
            grTotSigI12.Fit(&f1DispI12,"MRQ");
            parAI12 = f1TotI12.GetParameter(0);
            parEI12 = f1TotI12.GetParameter(1);
            parCI12 = f1TotI12.GetParameter(2);
            parP0I12 = f1DispI12.GetParameter(0);
            parP1I12 = f1DispI12.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI12[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI12[i] = abs( 1 - ( (parAI12 * parEI12 - parCI12 * totArrI12_re[i]) / (totArrI12_re[i] - parAI12) ) / chargeArrI12_re[i] );
            }
            badcalI12_max = *max_element(badcalI12, badcalI12 + ncharge_re);
          }
        }
        fprintf(outputfile, "]");

        ncharge_re = ncharge;
        fprintf(outputfile, "\n");
        fprintf(outputfile, "[ ");

        while(badcalI13_max > chi2_error){
          if(badcalI13_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI13 * parEI13 - parCI13 * totArrI13_re[i]) / (totArrI13_re[i] - parAI13)) / chargeArrI13_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI13_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI13_re.erase(chargeArrI13_re.begin() + n_max);
            totArrI13_re.erase(totArrI13_re.begin() + n_max);
            totSigArrI13_re.erase(totSigArrI13_re.begin() + n_max);
            chargeErrArrI13_re.erase(chargeErrArrI13_re.begin() + n_max);
            totErrArrI13_re.erase(totErrArrI13_re.begin() + n_max);
            totSigErrArrI13_re.erase(totSigErrArrI13_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI13_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI13_re.erase(chargeArrI13_re.begin() + n_max);
              totArrI13_re.erase(totArrI13_re.begin() + n_max);
              totSigArrI13_re.erase(totSigArrI13_re.begin() + n_max);
              chargeErrArrI13_re.erase(chargeErrArrI13_re.begin() + n_max);
              totErrArrI13_re.erase(totErrArrI13_re.begin() + n_max);
              totSigErrArrI13_re.erase(totSigErrArrI13_re.begin() + n_max);
            }

            TGraphErrors grTotI13(ncharge_re, &chargeArrI13_re[0], &totArrI13_re[0], &chargeErrArrI13_re[0], &totErrArrI13_re[0]);
            grTotI13.SetName(modName+"__grTotI13");
            TGraphErrors grTotSigI13(ncharge_re, &chargeArrI13_re[0], &totSigArrI13_re[0], &chargeErrArrI13_re[0], &totSigErrArrI13_re[0]);
            grTotSigI13.SetName(modName+"__grTotSigI13");
            TF1 f1TotI13("f1TotI13",funcTot, FitStartingPoint, chargeArrI13_re[ncharge_re-1]+100, 3);
            TF1 f1DispI13("f1DispI13",funcDisp, FitStartingPoint, chargeArrI13_re[ncharge_re-1]+100, 2);
            grTotI13.Fit(&f1TotI13,"MRQ");
            grTotSigI13.Fit(&f1DispI13,"MRQ");
            parAI13 = f1TotI13.GetParameter(0);
            parEI13 = f1TotI13.GetParameter(1);
            parCI13 = f1TotI13.GetParameter(2);
            parP0I13 = f1DispI13.GetParameter(0);
            parP1I13 = f1DispI13.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI13[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI13[i] = abs( 1 - ( (parAI13 * parEI13 - parCI13 * totArrI13_re[i]) / (totArrI13_re[i] - parAI13) ) / chargeArrI13_re[i] );
            }
            badcalI13_max = *max_element(badcalI13, badcalI13 + ncharge_re);
          }
        }
        fprintf(outputfile, "]");

        ncharge_re = ncharge;
        fprintf(outputfile, "\n");
        fprintf(outputfile, "[ ");

        while(badcalI14_max > chi2_error){
          if(badcalI14_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI14 * parEI14 - parCI14 * totArrI14_re[i]) / (totArrI14_re[i] - parAI14)) / chargeArrI14_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI14_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI14_re.erase(chargeArrI14_re.begin() + n_max);
            totArrI14_re.erase(totArrI14_re.begin() + n_max);
            totSigArrI14_re.erase(totSigArrI14_re.begin() + n_max);
            chargeErrArrI14_re.erase(chargeErrArrI14_re.begin() + n_max);
            totErrArrI14_re.erase(totErrArrI14_re.begin() + n_max);
            totSigErrArrI14_re.erase(totSigErrArrI14_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI14_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI14_re.erase(chargeArrI14_re.begin() + n_max);
              totArrI14_re.erase(totArrI14_re.begin() + n_max);
              totSigArrI14_re.erase(totSigArrI14_re.begin() + n_max);
              chargeErrArrI14_re.erase(chargeErrArrI14_re.begin() + n_max);
              totErrArrI14_re.erase(totErrArrI14_re.begin() + n_max);
              totSigErrArrI14_re.erase(totSigErrArrI14_re.begin() + n_max);
            }

            TGraphErrors grTotI14(ncharge_re, &chargeArrI14_re[0], &totArrI14_re[0], &chargeErrArrI14_re[0], &totErrArrI14_re[0]);
            grTotI14.SetName(modName+"__grTotI14");
            TGraphErrors grTotSigI14(ncharge_re, &chargeArrI14_re[0], &totSigArrI14_re[0], &chargeErrArrI14_re[0], &totSigErrArrI14_re[0]);
            grTotSigI14.SetName(modName+"__grTotSigI14");
            TF1 f1TotI14("f1TotI14",funcTot, FitStartingPoint, chargeArrI14_re[ncharge_re-1]+100, 3);
            TF1 f1DispI14("f1DispI14",funcDisp, FitStartingPoint, chargeArrI14_re[ncharge_re-1]+100, 2);
            grTotI14.Fit(&f1TotI14,"MRQ");
            grTotSigI14.Fit(&f1DispI14,"MRQ");
            parAI14 = f1TotI14.GetParameter(0);
            parEI14 = f1TotI14.GetParameter(1);
            parCI14 = f1TotI14.GetParameter(2);
            parP0I14 = f1DispI14.GetParameter(0);
            parP1I14 = f1DispI14.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI14[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI14[i] = abs( 1 - ( (parAI14 * parEI14 - parCI14 * totArrI14_re[i]) / (totArrI14_re[i] - parAI14) ) / chargeArrI14_re[i] );
            }
            badcalI14_max = *max_element(badcalI14, badcalI14 + ncharge_re);
          }
        }
        fprintf(outputfile, "]");

        ncharge_re = ncharge;
        fprintf(outputfile, "\n");
        fprintf(outputfile, "[ ");

        while(badcalI15_max > chi2_error){
          if(badcalI15_max < chi2_error){
            break;
          }else{
            std::vector<Double_t> find_max;
            for(int i = 0; i < ncharge_re; i++){
              if( i < qthresh ){
                find_max.push_back(0);
              }else{
                find_max.push_back(abs(1 - ((parAI15 * parEI15 - parCI15 * totArrI15_re[i]) / (totArrI15_re[i] - parAI15)) / chargeArrI15_re[i]));
              }
            }
            std::vector<Double_t>::iterator iter = std::max_element(find_max.begin(), find_max.end());
            size_t n_max = std::distance(find_max.begin(), iter);

            fprintf(outputfile, "%d", (int) chargeArrI15_re[n_max]);
            fprintf(outputfile, " ");

            ncharge_re = ncharge_re - 1;
            chargeArrI15_re.erase(chargeArrI15_re.begin() + n_max);
            totArrI15_re.erase(totArrI15_re.begin() + n_max);
            totSigArrI15_re.erase(totSigArrI15_re.begin() + n_max);
            chargeErrArrI15_re.erase(chargeErrArrI15_re.begin() + n_max);
            totErrArrI15_re.erase(totErrArrI15_re.begin() + n_max);
            totSigErrArrI15_re.erase(totSigErrArrI15_re.begin() + n_max);

            if ( (ncharge == ncharge_re + 1 ) && ( n_max == ncharge_re - 1 ) ){
              fprintf(outputfile, "%d", (int) chargeArrI15_re[n_max]);
              fprintf(outputfile, " ");

              ncharge_re = ncharge_re - 1;
              chargeArrI15_re.erase(chargeArrI15_re.begin() + n_max);
              totArrI15_re.erase(totArrI15_re.begin() + n_max);
              totSigArrI15_re.erase(totSigArrI15_re.begin() + n_max);
              chargeErrArrI15_re.erase(chargeErrArrI15_re.begin() + n_max);
              totErrArrI15_re.erase(totErrArrI15_re.begin() + n_max);
              totSigErrArrI15_re.erase(totSigErrArrI15_re.begin() + n_max);
            }

            TGraphErrors grTotI15(ncharge_re, &chargeArrI15_re[0], &totArrI15_re[0], &chargeErrArrI15_re[0], &totErrArrI15_re[0]);
            grTotI15.SetName(modName+"__grTotI15");
            TGraphErrors grTotSigI15(ncharge_re, &chargeArrI15_re[0], &totSigArrI15_re[0], &chargeErrArrI15_re[0], &totSigErrArrI15_re[0]);
            grTotSigI15.SetName(modName+"__grTotSigI15");
            TF1 f1TotI15("f1TotI15",funcTot, FitStartingPoint, chargeArrI15_re[ncharge_re-1]+100, 3);
            TF1 f1DispI15("f1DispI15",funcDisp, FitStartingPoint, chargeArrI15_re[ncharge_re-1]+100, 2);
            grTotI15.Fit(&f1TotI15,"MRQ");
            grTotSigI15.Fit(&f1DispI15,"MRQ");
            parAI15 = f1TotI15.GetParameter(0);
            parEI15 = f1TotI15.GetParameter(1);
            parCI15 = f1TotI15.GetParameter(2);
            parP0I15 = f1DispI15.GetParameter(0);
            parP1I15 = f1DispI15.GetParameter(1);

            for(int i = 0; i < ncharge; i++){ badcalI15[i] = 0; }
            for(int i = qthresh; i < ncharge_re; i++){
              badcalI15[i] = abs( 1 - ( (parAI15 * parEI15 - parCI15 * totArrI15_re[i]) / (totArrI15_re[i] - parAI15) ) / chargeArrI15_re[i] );
            }
            badcalI15_max = *max_element(badcalI15, badcalI15 + ncharge_re);
          }
        }
        fprintf(outputfile, "]");

        fprintf(outputfile, "\n");

        if (WhichPart != 0){
        std::cout << modStr << std::endl;
        std::cout << "I0 "
          << int(pcdMap[modStr]["I0"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I0"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I0"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I0"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I0"]["ThrLong"]) << " " << int(pcdMap[modStr]["I0"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I0"]["ThrSigLong"]) << " " << int(timMap[modStr]["I0"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I0"]["ThrGang"]) << " " << int(pcdMap[modStr]["I0"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I0"]["ThrSigGang"]) << " " << int(timMap[modStr]["I0"]["TimGang"]) << " "
          << parAI0 << " " << parEI0 << " " << parCI0 << " "
          << parLongAI0 << " " << parLongEI0 << " " << parLongCI0 << " "
          << parP0I0 << " " << parP1I0
          << std::endl;

        std::cout << "I1 "
          << int(pcdMap[modStr]["I1"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I1"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I1"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I1"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I1"]["ThrLong"]) << " " << int(pcdMap[modStr]["I1"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I1"]["ThrSigLong"]) << " " << int(timMap[modStr]["I1"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I1"]["ThrGang"]) << " " << int(pcdMap[modStr]["I1"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I1"]["ThrSigGang"]) << " " << int(timMap[modStr]["I1"]["TimGang"]) << " "
          << parAI1 << " " << parEI1 << " " << parCI1 << " "
          << parLongAI1 << " " << parLongEI1 << " " << parLongCI1 << " "
          << parP0I1 << " " << parP1I1
          << std::endl;

        std::cout << "I2 "
          << int(pcdMap[modStr]["I2"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I2"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I2"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I2"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I2"]["ThrLong"]) << " " << int(pcdMap[modStr]["I2"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I2"]["ThrSigLong"]) << " " << int(timMap[modStr]["I2"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I2"]["ThrGang"]) << " " << int(pcdMap[modStr]["I2"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I2"]["ThrSigGang"]) << " " << int(timMap[modStr]["I2"]["TimGang"]) << " "
          << parAI2 << " " << parEI2 << " " << parCI2 << " "
          << parLongAI2 << " " << parLongEI2 << " " << parLongCI2 << " "
          << parP0I2 << " " << parP1I2
          << std::endl;

        std::cout << "I3 "
          << int(pcdMap[modStr]["I3"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I3"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I3"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I3"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I3"]["ThrLong"]) << " " << int(pcdMap[modStr]["I3"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I3"]["ThrSigLong"]) << " " << int(timMap[modStr]["I3"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I3"]["ThrGang"]) << " " << int(pcdMap[modStr]["I3"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I3"]["ThrSigGang"]) << " " << int(timMap[modStr]["I3"]["TimGang"]) << " "
          << parAI3 << " " << parEI3 << " " << parCI3 << " "
          << parLongAI3 << " " << parLongEI3 << " " << parLongCI3 << " "
          << parP0I3 << " " << parP1I3
          << std::endl;

        std::cout << "I4 "
          << int(pcdMap[modStr]["I4"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I4"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I4"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I4"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I4"]["ThrLong"]) << " " << int(pcdMap[modStr]["I4"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I4"]["ThrSigLong"]) << " " << int(timMap[modStr]["I4"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I4"]["ThrGang"]) << " " << int(pcdMap[modStr]["I4"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I4"]["ThrSigGang"]) << " " << int(timMap[modStr]["I4"]["TimGang"]) << " "
          << parAI4 << " " << parEI4 << " " << parCI4 << " "
          << parLongAI4 << " " << parLongEI4 << " " << parLongCI4 << " "
          << parP0I4 << " " << parP1I4
          << std::endl;

        std::cout << "I5 "
          << int(pcdMap[modStr]["I5"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I5"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I5"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I5"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I5"]["ThrLong"]) << " " << int(pcdMap[modStr]["I5"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I5"]["ThrSigLong"]) << " " << int(timMap[modStr]["I5"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I5"]["ThrGang"]) << " " << int(pcdMap[modStr]["I5"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I5"]["ThrSigGang"]) << " " << int(timMap[modStr]["I5"]["TimGang"]) << " "
          << parAI5 << " " << parEI5 << " " << parCI5 << " "
          << parLongAI5 << " " << parLongEI5 << " " << parLongCI5 << " "
          << parP0I5 << " " << parP1I5
          << std::endl;

        std::cout << "I6 "
          << int(pcdMap[modStr]["I6"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I6"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I6"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I6"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I6"]["ThrLong"]) << " " << int(pcdMap[modStr]["I6"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I6"]["ThrSigLong"]) << " " << int(timMap[modStr]["I6"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I6"]["ThrGang"]) << " " << int(pcdMap[modStr]["I6"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I6"]["ThrSigGang"]) << " " << int(timMap[modStr]["I6"]["TimGang"]) << " "
          << parAI6 << " " << parEI6 << " " << parCI6 << " "
          << parLongAI6 << " " << parLongEI6 << " " << parLongCI6 << " "
          << parP0I6 << " " << parP1I6
          << std::endl;

        std::cout << "I7 "
          << int(pcdMap[modStr]["I7"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I7"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I7"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I7"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I7"]["ThrLong"]) << " " << int(pcdMap[modStr]["I7"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I7"]["ThrSigLong"]) << " " << int(timMap[modStr]["I7"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I7"]["ThrGang"]) << " " << int(pcdMap[modStr]["I7"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I7"]["ThrSigGang"]) << " " << int(timMap[modStr]["I7"]["TimGang"]) << " "
          << parAI7 << " " << parEI7 << " " << parCI7 << " "
          << parLongAI7 << " " << parLongEI7 << " " << parLongCI7 << " "
          << parP0I7 << " " << parP1I7
          << std::endl;

        std::cout << "I8 "
          << int(pcdMap[modStr]["I8"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I8"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I8"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I8"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I8"]["ThrLong"]) << " " << int(pcdMap[modStr]["I8"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I8"]["ThrSigLong"]) << " " << int(timMap[modStr]["I8"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I8"]["ThrGang"]) << " " << int(pcdMap[modStr]["I8"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I8"]["ThrSigGang"]) << " " << int(timMap[modStr]["I8"]["TimGang"]) << " "
          << parAI8 << " " << parEI8 << " " << parCI8 << " "
          << parLongAI8 << " " << parLongEI8 << " " << parLongCI8 << " "
          << parP0I8 << " " << parP1I8
          << std::endl;

        std::cout << "I9 "
          << int(pcdMap[modStr]["I9"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I9"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I9"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I9"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I9"]["ThrLong"]) << " " << int(pcdMap[modStr]["I9"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I9"]["ThrSigLong"]) << " " << int(timMap[modStr]["I9"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I9"]["ThrGang"]) << " " << int(pcdMap[modStr]["I9"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I9"]["ThrSigGang"]) << " " << int(timMap[modStr]["I9"]["TimGang"]) << " "
          << parAI9 << " " << parEI9 << " " << parCI9 << " "
          << parLongAI9 << " " << parLongEI9 << " " << parLongCI9 << " "
          << parP0I9 << " " << parP1I9
          << std::endl;

        std::cout << "I10 "
          << int(pcdMap[modStr]["I10"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I10"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I10"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I10"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I10"]["ThrLong"]) << " " << int(pcdMap[modStr]["I10"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I10"]["ThrSigLong"]) << " " << int(timMap[modStr]["I10"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I10"]["ThrGang"]) << " " << int(pcdMap[modStr]["I10"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I10"]["ThrSigGang"]) << " " << int(timMap[modStr]["I10"]["TimGang"]) << " "
          << parAI10 << " " << parEI10 << " " << parCI10 << " "
          << parLongAI10 << " " << parLongEI10 << " " << parLongCI10 << " "
          << parP0I10 << " " << parP1I10
          << std::endl;

        std::cout << "I11 "
          << int(pcdMap[modStr]["I11"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I11"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I11"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I11"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I11"]["ThrLong"]) << " " << int(pcdMap[modStr]["I11"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I11"]["ThrSigLong"]) << " " << int(timMap[modStr]["I11"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I11"]["ThrGang"]) << " " << int(pcdMap[modStr]["I11"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I11"]["ThrSigGang"]) << " " << int(timMap[modStr]["I11"]["TimGang"]) << " "
          << parAI11 << " " << parEI11 << " " << parCI11 << " "
          << parLongAI11 << " " << parLongEI11 << " " << parLongCI11 << " "
          << parP0I11 << " " << parP1I11
          << std::endl;

        std::cout << "I12 "
          << int(pcdMap[modStr]["I12"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I12"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I12"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I12"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I12"]["ThrLong"]) << " " << int(pcdMap[modStr]["I12"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I12"]["ThrSigLong"]) << " " << int(timMap[modStr]["I12"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I12"]["ThrGang"]) << " " << int(pcdMap[modStr]["I12"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I12"]["ThrSigGang"]) << " " << int(timMap[modStr]["I12"]["TimGang"]) << " "
          << parAI12 << " " << parEI12 << " " << parCI12 << " "
          << parLongAI12 << " " << parLongEI12 << " " << parLongCI12 << " "
          << parP0I12 << " " << parP1I12
          << std::endl;

        std::cout << "I13 "
          << int(pcdMap[modStr]["I13"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I13"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I13"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I13"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I13"]["ThrLong"]) << " " << int(pcdMap[modStr]["I13"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I13"]["ThrSigLong"]) << " " << int(timMap[modStr]["I13"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I13"]["ThrGang"]) << " " << int(pcdMap[modStr]["I13"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I13"]["ThrSigGang"]) << " " << int(timMap[modStr]["I13"]["TimGang"]) << " "
          << parAI13 << " " << parEI13 << " " << parCI13 << " "
          << parLongAI13 << " " << parLongEI13 << " " << parLongCI13 << " "
          << parP0I13 << " " << parP1I13
          << std::endl;

        std::cout << "I14 "
          << int(pcdMap[modStr]["I14"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I14"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I14"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I14"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I14"]["ThrLong"]) << " " << int(pcdMap[modStr]["I14"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I14"]["ThrSigLong"]) << " " << int(timMap[modStr]["I14"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I14"]["ThrGang"]) << " " << int(pcdMap[modStr]["I14"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I14"]["ThrSigGang"]) << " " << int(timMap[modStr]["I14"]["TimGang"]) << " "
          << parAI14 << " " << parEI14 << " " << parCI14 << " "
          << parLongAI14 << " " << parLongEI14 << " " << parLongCI14 << " "
          << parP0I14 << " " << parP1I14
          << std::endl;

        std::cout << "I15 " //int(timMap[modStr]["I15"]["TimLong"])
          << int(pcdMap[modStr]["I15"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I15"]["ThrRmsNorm"]) << " "
          << int(pcdMap[modStr]["I15"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I15"]["TimNorm"]) << " "
          << int(pcdMap[modStr]["I15"]["ThrLong"]) << " " << int(pcdMap[modStr]["I15"]["ThrRmsLong"]) << " "
          << int(pcdMap[modStr]["I15"]["ThrSigLong"]) << " " << int(timMap[modStr]["I15"]["TimLong"]) << " "
          << int(pcdMap[modStr]["I15"]["ThrGang"]) << " " << int(pcdMap[modStr]["I15"]["ThrRmsGang"]) << " "
          << int(pcdMap[modStr]["I15"]["ThrSigGang"]) << " " << int(timMap[modStr]["I15"]["TimGang"]) << " "
          << parAI15 << " " << parEI15 << " " << parCI15 << " "
          << parLongAI15 << " " << parLongEI15 << " " << parLongCI15 << " "
          << parP0I15 << " " << parP1I15
          << std::endl;
        }
        else
        {
          std::cout << modStr << std::endl;
          std::cout << "I0 "
                    << int(pcdMap[modStr]["I0"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I0"]["ThrRmsNorm"]) << " "
                    << int(pcdMap[modStr]["I0"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I0"]["TimNorm"]) << " "
                    << int(pcdMap[modStr]["I0"]["ThrLong"]) << " " << int(pcdMap[modStr]["I0"]["ThrRmsLong"]) << " "
                    << int(pcdMap[modStr]["I0"]["ThrSigLong"]) << " " << int(timMap[modStr]["I0"]["TimLong"]) << " "
                    << int(pcdMap[modStr]["I0"]["ThrLong"]) << " " << int(pcdMap[modStr]["I0"]["ThrRmsLong"]) << " "
                    << int(pcdMap[modStr]["I0"]["ThrSigLong"]) << " " << int(timMap[modStr]["I0"]["TimLong"]) << " "
                    << parAI0 << " " << parEI0 << " " << parCI0 << " "
                    << parLongAI0 << " " << parLongEI0 << " " << parLongCI0 << " "
                    << parP0I0 << " " << parP1I0
                    << std::endl;

          std::cout << "I1 "
                    << int(pcdMap[modStr]["I1"]["ThrNorm"]) << " " << int(pcdMap[modStr]["I1"]["ThrRmsNorm"]) << " "
                    << int(pcdMap[modStr]["I1"]["ThrSigNorm"]) << " " << int(timMap[modStr]["I1"]["TimNorm"]) << " "
                    << int(pcdMap[modStr]["I1"]["ThrLong"]) << " " << int(pcdMap[modStr]["I1"]["ThrRmsLong"]) << " "
                    << int(pcdMap[modStr]["I1"]["ThrSigLong"]) << " " << int(timMap[modStr]["I1"]["TimLong"]) << " "
                    << int(pcdMap[modStr]["I1"]["ThrLong"]) << " " << int(pcdMap[modStr]["I1"]["ThrRmsLong"]) << " "
                    << int(pcdMap[modStr]["I1"]["ThrSigLong"]) << " " << int(timMap[modStr]["I1"]["TimLong"]) << " "
                    << parAI1 << " " << parEI1 << " " << parCI1 << " "
                    << parLongAI1 << " " << parLongEI1 << " " << parLongCI1 << " "
                    << parP0I1 << " " << parP1I1
                    << std::endl;
        }

        roTotDir->WriteTObject(&grTotI0);
        roTotDir->WriteTObject(&grTotI1);
        roTotDir->WriteTObject(&grTotI2);
        roTotDir->WriteTObject(&grTotI3);
        roTotDir->WriteTObject(&grTotI4);
        roTotDir->WriteTObject(&grTotI5);
        roTotDir->WriteTObject(&grTotI6);
        roTotDir->WriteTObject(&grTotI7);
        roTotDir->WriteTObject(&grTotI8);
        roTotDir->WriteTObject(&grTotI9);
        roTotDir->WriteTObject(&grTotI10);
        roTotDir->WriteTObject(&grTotI11);
        roTotDir->WriteTObject(&grTotI12);
        roTotDir->WriteTObject(&grTotI13);
        roTotDir->WriteTObject(&grTotI14);
        roTotDir->WriteTObject(&grTotI15);

        roTotDir->WriteTObject(&grTotSigI0);
        roTotDir->WriteTObject(&grTotSigI1);
        roTotDir->WriteTObject(&grTotSigI2);
        roTotDir->WriteTObject(&grTotSigI3);
        roTotDir->WriteTObject(&grTotSigI4);
        roTotDir->WriteTObject(&grTotSigI5);
        roTotDir->WriteTObject(&grTotSigI6);
        roTotDir->WriteTObject(&grTotSigI7);
        roTotDir->WriteTObject(&grTotSigI8);
        roTotDir->WriteTObject(&grTotSigI9);
        roTotDir->WriteTObject(&grTotSigI10);
        roTotDir->WriteTObject(&grTotSigI11);
        roTotDir->WriteTObject(&grTotSigI12);
        roTotDir->WriteTObject(&grTotSigI13);
        roTotDir->WriteTObject(&grTotSigI14);
        roTotDir->WriteTObject(&grTotSigI15);

        roTotDir->WriteTObject(&grTotLongI0);
        roTotDir->WriteTObject(&grTotLongI1);
        roTotDir->WriteTObject(&grTotLongI2);
        roTotDir->WriteTObject(&grTotLongI3);
        roTotDir->WriteTObject(&grTotLongI4);
        roTotDir->WriteTObject(&grTotLongI5);
        roTotDir->WriteTObject(&grTotLongI6);
        roTotDir->WriteTObject(&grTotLongI7);
        roTotDir->WriteTObject(&grTotLongI8);
        roTotDir->WriteTObject(&grTotLongI9);
        roTotDir->WriteTObject(&grTotLongI10);
        roTotDir->WriteTObject(&grTotLongI11);
        roTotDir->WriteTObject(&grTotLongI12);
        roTotDir->WriteTObject(&grTotLongI13);
        roTotDir->WriteTObject(&grTotLongI14);
        roTotDir->WriteTObject(&grTotLongI15);
      }
    }
    roTotDir->WriteTObject(&h1dTot7);
  }
  roFile.Close();
  fclose(outputfile);
//  return 0;
}



//===========================================================
// This getFEID method should not be used in the calibration
// because the mapping convention is totally different between
// actual detector alignment and calibrtion.
//===========================================================
// Identify FE chip ID in athena
void getFEID(int iphi, int ieta, int phi_module, int *circ, int *pixtype) {

  int rowsPerFE = 164;    // FEI3
  int columnsPerFE = 18;  // FEI3
  int rowsFGanged = 153;  // FEI3
  int rowsLGanged = 159;  // FEI3

  int row = -1;
  int col = -1;
  if (phi_module%2 == 0) {
    iphi = 2*rowsPerFE-iphi-1;
  }
  if (iphi >= rowsPerFE) {
    col = columnsPerFE-1-ieta%columnsPerFE;   // 17 -> 0
    row = 2*rowsPerFE-1-iphi;                 // 159 -> 0
    *circ = (int)((8-1)-(ieta/columnsPerFE)); // 7 -> 0
  }
  else {
    col = ieta%columnsPerFE;                  // 0 -> 17
    row = iphi;                               // 0 -> 159
    *circ = (int)(ieta/columnsPerFE)+8;       // 8 -> 15
  }

  // Check if long(ganged) or normal sensor
  if (col>0 && col<columnsPerFE-1) {
    if (row>=rowsFGanged-1 && row<=rowsLGanged) {
      *pixtype = (row-rowsFGanged+1)%2+1; // 1 inter ganged pixel; 2 ganged pixel
    }
    else {
      *pixtype = 0;
    }
  }
  else if (col==0 || col==columnsPerFE-1) {
    if (row>=rowsFGanged-1) {
      *pixtype = 2; // treat long ganged (3) as ganged
    }
    else {
      *pixtype = 1; // long
    }
  }
  else {
    *pixtype = 0; // treat it as normal
  }
}
