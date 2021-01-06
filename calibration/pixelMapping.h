void pixelMapping(std::string geographicalID, int *hashID, int *bec, int *layer, int *phimod, int *etamod) {
  if      (geographicalID=="LI_S15_C_34_M3_C7")  { *hashID=   0; *bec=-4; *layer=0; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="LI_S15_C_34_M4_C10") { *hashID=   1; *bec=-4; *layer=0; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="LI_S15_C_12_M1_C1")  { *hashID=   2; *bec=-4; *layer=0; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="LI_S15_C_12_M2_C4")  { *hashID=   3; *bec=-4; *layer=0; *phimod= 3; *etamod=  0; }
  else if (geographicalID=="LI_S15_C_34_M3_C8")  { *hashID=   4; *bec=-4; *layer=1; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="LI_S15_C_34_M4_C11") { *hashID=   5; *bec=-4; *layer=1; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="LI_S15_C_12_M1_C2")  { *hashID=   6; *bec=-4; *layer=1; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="LI_S15_C_12_M2_C5")  { *hashID=   7; *bec=-4; *layer=1; *phimod= 3; *etamod=  0; }
  else if (geographicalID=="LI_S15_C_34_M3_C9")  { *hashID=   8; *bec=-4; *layer=2; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="LI_S15_C_34_M4_C12") { *hashID=   9; *bec=-4; *layer=2; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="LI_S15_C_12_M1_C3")  { *hashID=  10; *bec=-4; *layer=2; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="LI_S15_C_12_M2_C6")  { *hashID=  11; *bec=-4; *layer=2; *phimod= 3; *etamod=  0; }
  else if (geographicalID=="D1C_B01_S2_M4")      { *hashID=  12; *bec=-2; *layer=0; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="D1C_B01_S2_M3")      { *hashID=  13; *bec=-2; *layer=0; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="D1C_B01_S2_M5")      { *hashID=  14; *bec=-2; *layer=0; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="D1C_B01_S2_M2")      { *hashID=  15; *bec=-2; *layer=0; *phimod= 3; *etamod=  0; }
  else if (geographicalID=="D1C_B01_S2_M6")      { *hashID=  16; *bec=-2; *layer=0; *phimod= 4; *etamod=  0; }
  else if (geographicalID=="D1C_B01_S2_M1")      { *hashID=  17; *bec=-2; *layer=0; *phimod= 5; *etamod=  0; }
  else if (geographicalID=="D1C_B02_S1_M4")      { *hashID=  18; *bec=-2; *layer=0; *phimod= 6; *etamod=  0; }
  else if (geographicalID=="D1C_B02_S1_M3")      { *hashID=  19; *bec=-2; *layer=0; *phimod= 7; *etamod=  0; }
  else if (geographicalID=="D1C_B02_S1_M5")      { *hashID=  20; *bec=-2; *layer=0; *phimod= 8; *etamod=  0; }
  else if (geographicalID=="D1C_B02_S1_M2")      { *hashID=  21; *bec=-2; *layer=0; *phimod= 9; *etamod=  0; }
  else if (geographicalID=="D1C_B02_S1_M6")      { *hashID=  22; *bec=-2; *layer=0; *phimod=10; *etamod=  0; }
  else if (geographicalID=="D1C_B02_S1_M1")      { *hashID=  23; *bec=-2; *layer=0; *phimod=11; *etamod=  0; }
  else if (geographicalID=="D1C_B02_S2_M4")      { *hashID=  24; *bec=-2; *layer=0; *phimod=12; *etamod=  0; }
  else if (geographicalID=="D1C_B02_S2_M3")      { *hashID=  25; *bec=-2; *layer=0; *phimod=13; *etamod=  0; }
  else if (geographicalID=="D1C_B02_S2_M5")      { *hashID=  26; *bec=-2; *layer=0; *phimod=14; *etamod=  0; }
  else if (geographicalID=="D1C_B02_S2_M2")      { *hashID=  27; *bec=-2; *layer=0; *phimod=15; *etamod=  0; }
  else if (geographicalID=="D1C_B02_S2_M6")      { *hashID=  28; *bec=-2; *layer=0; *phimod=16; *etamod=  0; }
  else if (geographicalID=="D1C_B02_S2_M1")      { *hashID=  29; *bec=-2; *layer=0; *phimod=17; *etamod=  0; }
  else if (geographicalID=="D1C_B03_S1_M4")      { *hashID=  30; *bec=-2; *layer=0; *phimod=18; *etamod=  0; }
  else if (geographicalID=="D1C_B03_S1_M3")      { *hashID=  31; *bec=-2; *layer=0; *phimod=19; *etamod=  0; }
  else if (geographicalID=="D1C_B03_S1_M5")      { *hashID=  32; *bec=-2; *layer=0; *phimod=20; *etamod=  0; }
  else if (geographicalID=="D1C_B03_S1_M2")      { *hashID=  33; *bec=-2; *layer=0; *phimod=21; *etamod=  0; }
  else if (geographicalID=="D1C_B03_S1_M6")      { *hashID=  34; *bec=-2; *layer=0; *phimod=22; *etamod=  0; }
  else if (geographicalID=="D1C_B03_S1_M1")      { *hashID=  35; *bec=-2; *layer=0; *phimod=23; *etamod=  0; }
  else if (geographicalID=="D1C_B03_S2_M4")      { *hashID=  36; *bec=-2; *layer=0; *phimod=24; *etamod=  0; }
  else if (geographicalID=="D1C_B03_S2_M3")      { *hashID=  37; *bec=-2; *layer=0; *phimod=25; *etamod=  0; }
  else if (geographicalID=="D1C_B03_S2_M5")      { *hashID=  38; *bec=-2; *layer=0; *phimod=26; *etamod=  0; }
  else if (geographicalID=="D1C_B03_S2_M2")      { *hashID=  39; *bec=-2; *layer=0; *phimod=27; *etamod=  0; }
  else if (geographicalID=="D1C_B03_S2_M6")      { *hashID=  40; *bec=-2; *layer=0; *phimod=28; *etamod=  0; }
  else if (geographicalID=="D1C_B03_S2_M1")      { *hashID=  41; *bec=-2; *layer=0; *phimod=29; *etamod=  0; }
  else if (geographicalID=="D1C_B04_S1_M4")      { *hashID=  42; *bec=-2; *layer=0; *phimod=30; *etamod=  0; }
  else if (geographicalID=="D1C_B04_S1_M3")      { *hashID=  43; *bec=-2; *layer=0; *phimod=31; *etamod=  0; }
  else if (geographicalID=="D1C_B04_S1_M5")      { *hashID=  44; *bec=-2; *layer=0; *phimod=32; *etamod=  0; }
  else if (geographicalID=="D1C_B04_S1_M2")      { *hashID=  45; *bec=-2; *layer=0; *phimod=33; *etamod=  0; }
  else if (geographicalID=="D1C_B04_S1_M6")      { *hashID=  46; *bec=-2; *layer=0; *phimod=34; *etamod=  0; }
  else if (geographicalID=="D1C_B04_S1_M1")      { *hashID=  47; *bec=-2; *layer=0; *phimod=35; *etamod=  0; }
  else if (geographicalID=="D1C_B04_S2_M4")      { *hashID=  48; *bec=-2; *layer=0; *phimod=36; *etamod=  0; }
  else if (geographicalID=="D1C_B04_S2_M3")      { *hashID=  49; *bec=-2; *layer=0; *phimod=37; *etamod=  0; }
  else if (geographicalID=="D1C_B04_S2_M5")      { *hashID=  50; *bec=-2; *layer=0; *phimod=38; *etamod=  0; }
  else if (geographicalID=="D1C_B04_S2_M2")      { *hashID=  51; *bec=-2; *layer=0; *phimod=39; *etamod=  0; }
  else if (geographicalID=="D1C_B04_S2_M6")      { *hashID=  52; *bec=-2; *layer=0; *phimod=40; *etamod=  0; }
  else if (geographicalID=="D1C_B04_S2_M1")      { *hashID=  53; *bec=-2; *layer=0; *phimod=41; *etamod=  0; }
  else if (geographicalID=="D1C_B01_S1_M4")      { *hashID=  54; *bec=-2; *layer=0; *phimod=42; *etamod=  0; }
  else if (geographicalID=="D1C_B01_S1_M3")      { *hashID=  55; *bec=-2; *layer=0; *phimod=43; *etamod=  0; }
  else if (geographicalID=="D1C_B01_S1_M5")      { *hashID=  56; *bec=-2; *layer=0; *phimod=44; *etamod=  0; }
  else if (geographicalID=="D1C_B01_S1_M2")      { *hashID=  57; *bec=-2; *layer=0; *phimod=45; *etamod=  0; }
  else if (geographicalID=="D1C_B01_S1_M6")      { *hashID=  58; *bec=-2; *layer=0; *phimod=46; *etamod=  0; }
  else if (geographicalID=="D1C_B01_S1_M1")      { *hashID=  59; *bec=-2; *layer=0; *phimod=47; *etamod=  0; }
  else if (geographicalID=="D2C_B01_S2_M4")      { *hashID=  60; *bec=-2; *layer=1; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="D2C_B01_S2_M3")      { *hashID=  61; *bec=-2; *layer=1; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="D2C_B01_S2_M5")      { *hashID=  62; *bec=-2; *layer=1; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="D2C_B01_S2_M2")      { *hashID=  63; *bec=-2; *layer=1; *phimod= 3; *etamod=  0; }
  else if (geographicalID=="D2C_B01_S2_M6")      { *hashID=  64; *bec=-2; *layer=1; *phimod= 4; *etamod=  0; }
  else if (geographicalID=="D2C_B01_S2_M1")      { *hashID=  65; *bec=-2; *layer=1; *phimod= 5; *etamod=  0; }
  else if (geographicalID=="D2C_B02_S1_M4")      { *hashID=  66; *bec=-2; *layer=1; *phimod= 6; *etamod=  0; }
  else if (geographicalID=="D2C_B02_S1_M3")      { *hashID=  67; *bec=-2; *layer=1; *phimod= 7; *etamod=  0; }
  else if (geographicalID=="D2C_B02_S1_M5")      { *hashID=  68; *bec=-2; *layer=1; *phimod= 8; *etamod=  0; }
  else if (geographicalID=="D2C_B02_S1_M2")      { *hashID=  69; *bec=-2; *layer=1; *phimod= 9; *etamod=  0; }
  else if (geographicalID=="D2C_B02_S1_M6")      { *hashID=  70; *bec=-2; *layer=1; *phimod=10; *etamod=  0; }
  else if (geographicalID=="D2C_B02_S1_M1")      { *hashID=  71; *bec=-2; *layer=1; *phimod=11; *etamod=  0; }
  else if (geographicalID=="D2C_B02_S2_M4")      { *hashID=  72; *bec=-2; *layer=1; *phimod=12; *etamod=  0; }
  else if (geographicalID=="D2C_B02_S2_M3")      { *hashID=  73; *bec=-2; *layer=1; *phimod=13; *etamod=  0; }
  else if (geographicalID=="D2C_B02_S2_M5")      { *hashID=  74; *bec=-2; *layer=1; *phimod=14; *etamod=  0; }
  else if (geographicalID=="D2C_B02_S2_M2")      { *hashID=  75; *bec=-2; *layer=1; *phimod=15; *etamod=  0; }
  else if (geographicalID=="D2C_B02_S2_M6")      { *hashID=  76; *bec=-2; *layer=1; *phimod=16; *etamod=  0; }
  else if (geographicalID=="D2C_B02_S2_M1")      { *hashID=  77; *bec=-2; *layer=1; *phimod=17; *etamod=  0; }
  else if (geographicalID=="D2C_B03_S1_M4")      { *hashID=  78; *bec=-2; *layer=1; *phimod=18; *etamod=  0; }
  else if (geographicalID=="D2C_B03_S1_M3")      { *hashID=  79; *bec=-2; *layer=1; *phimod=19; *etamod=  0; }
  else if (geographicalID=="D2C_B03_S1_M5")      { *hashID=  80; *bec=-2; *layer=1; *phimod=20; *etamod=  0; }
  else if (geographicalID=="D2C_B03_S1_M2")      { *hashID=  81; *bec=-2; *layer=1; *phimod=21; *etamod=  0; }
  else if (geographicalID=="D2C_B03_S1_M6")      { *hashID=  82; *bec=-2; *layer=1; *phimod=22; *etamod=  0; }
  else if (geographicalID=="D2C_B03_S1_M1")      { *hashID=  83; *bec=-2; *layer=1; *phimod=23; *etamod=  0; }
  else if (geographicalID=="D2C_B03_S2_M4")      { *hashID=  84; *bec=-2; *layer=1; *phimod=24; *etamod=  0; }
  else if (geographicalID=="D2C_B03_S2_M3")      { *hashID=  85; *bec=-2; *layer=1; *phimod=25; *etamod=  0; }
  else if (geographicalID=="D2C_B03_S2_M5")      { *hashID=  86; *bec=-2; *layer=1; *phimod=26; *etamod=  0; }
  else if (geographicalID=="D2C_B03_S2_M2")      { *hashID=  87; *bec=-2; *layer=1; *phimod=27; *etamod=  0; }
  else if (geographicalID=="D2C_B03_S2_M6")      { *hashID=  88; *bec=-2; *layer=1; *phimod=28; *etamod=  0; }
  else if (geographicalID=="D2C_B03_S2_M1")      { *hashID=  89; *bec=-2; *layer=1; *phimod=29; *etamod=  0; }
  else if (geographicalID=="D2C_B04_S1_M4")      { *hashID=  90; *bec=-2; *layer=1; *phimod=30; *etamod=  0; }
  else if (geographicalID=="D2C_B04_S1_M3")      { *hashID=  91; *bec=-2; *layer=1; *phimod=31; *etamod=  0; }
  else if (geographicalID=="D2C_B04_S1_M5")      { *hashID=  92; *bec=-2; *layer=1; *phimod=32; *etamod=  0; }
  else if (geographicalID=="D2C_B04_S1_M2")      { *hashID=  93; *bec=-2; *layer=1; *phimod=33; *etamod=  0; }
  else if (geographicalID=="D2C_B04_S1_M6")      { *hashID=  94; *bec=-2; *layer=1; *phimod=34; *etamod=  0; }
  else if (geographicalID=="D2C_B04_S1_M1")      { *hashID=  95; *bec=-2; *layer=1; *phimod=35; *etamod=  0; }
  else if (geographicalID=="D2C_B04_S2_M4")      { *hashID=  96; *bec=-2; *layer=1; *phimod=36; *etamod=  0; }
  else if (geographicalID=="D2C_B04_S2_M3")      { *hashID=  97; *bec=-2; *layer=1; *phimod=37; *etamod=  0; }
  else if (geographicalID=="D2C_B04_S2_M5")      { *hashID=  98; *bec=-2; *layer=1; *phimod=38; *etamod=  0; }
  else if (geographicalID=="D2C_B04_S2_M2")      { *hashID=  99; *bec=-2; *layer=1; *phimod=39; *etamod=  0; }
  else if (geographicalID=="D2C_B04_S2_M6")      { *hashID= 100; *bec=-2; *layer=1; *phimod=40; *etamod=  0; }
  else if (geographicalID=="D2C_B04_S2_M1")      { *hashID= 101; *bec=-2; *layer=1; *phimod=41; *etamod=  0; }
  else if (geographicalID=="D2C_B01_S1_M4")      { *hashID= 102; *bec=-2; *layer=1; *phimod=42; *etamod=  0; }
  else if (geographicalID=="D2C_B01_S1_M3")      { *hashID= 103; *bec=-2; *layer=1; *phimod=43; *etamod=  0; }
  else if (geographicalID=="D2C_B01_S1_M5")      { *hashID= 104; *bec=-2; *layer=1; *phimod=44; *etamod=  0; }
  else if (geographicalID=="D2C_B01_S1_M2")      { *hashID= 105; *bec=-2; *layer=1; *phimod=45; *etamod=  0; }
  else if (geographicalID=="D2C_B01_S1_M6")      { *hashID= 106; *bec=-2; *layer=1; *phimod=46; *etamod=  0; }
  else if (geographicalID=="D2C_B01_S1_M1")      { *hashID= 107; *bec=-2; *layer=1; *phimod=47; *etamod=  0; }
  else if (geographicalID=="D3C_B01_S2_M4")      { *hashID= 108; *bec=-2; *layer=2; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="D3C_B01_S2_M3")      { *hashID= 109; *bec=-2; *layer=2; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="D3C_B01_S2_M5")      { *hashID= 110; *bec=-2; *layer=2; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="D3C_B01_S2_M2")      { *hashID= 111; *bec=-2; *layer=2; *phimod= 3; *etamod=  0; }
  else if (geographicalID=="D3C_B01_S2_M6")      { *hashID= 112; *bec=-2; *layer=2; *phimod= 4; *etamod=  0; }
  else if (geographicalID=="D3C_B01_S2_M1")      { *hashID= 113; *bec=-2; *layer=2; *phimod= 5; *etamod=  0; }
  else if (geographicalID=="D3C_B02_S1_M4")      { *hashID= 114; *bec=-2; *layer=2; *phimod= 6; *etamod=  0; }
  else if (geographicalID=="D3C_B02_S1_M3")      { *hashID= 115; *bec=-2; *layer=2; *phimod= 7; *etamod=  0; }
  else if (geographicalID=="D3C_B02_S1_M5")      { *hashID= 116; *bec=-2; *layer=2; *phimod= 8; *etamod=  0; }
  else if (geographicalID=="D3C_B02_S1_M2")      { *hashID= 117; *bec=-2; *layer=2; *phimod= 9; *etamod=  0; }
  else if (geographicalID=="D3C_B02_S1_M6")      { *hashID= 118; *bec=-2; *layer=2; *phimod=10; *etamod=  0; }
  else if (geographicalID=="D3C_B02_S1_M1")      { *hashID= 119; *bec=-2; *layer=2; *phimod=11; *etamod=  0; }
  else if (geographicalID=="D3C_B02_S2_M4")      { *hashID= 120; *bec=-2; *layer=2; *phimod=12; *etamod=  0; }
  else if (geographicalID=="D3C_B02_S2_M3")      { *hashID= 121; *bec=-2; *layer=2; *phimod=13; *etamod=  0; }
  else if (geographicalID=="D3C_B02_S2_M5")      { *hashID= 122; *bec=-2; *layer=2; *phimod=14; *etamod=  0; }
  else if (geographicalID=="D3C_B02_S2_M2")      { *hashID= 123; *bec=-2; *layer=2; *phimod=15; *etamod=  0; }
  else if (geographicalID=="D3C_B02_S2_M6")      { *hashID= 124; *bec=-2; *layer=2; *phimod=16; *etamod=  0; }
  else if (geographicalID=="D3C_B02_S2_M1")      { *hashID= 125; *bec=-2; *layer=2; *phimod=17; *etamod=  0; }
  else if (geographicalID=="D3C_B03_S1_M4")      { *hashID= 126; *bec=-2; *layer=2; *phimod=18; *etamod=  0; }
  else if (geographicalID=="D3C_B03_S1_M3")      { *hashID= 127; *bec=-2; *layer=2; *phimod=19; *etamod=  0; }
  else if (geographicalID=="D3C_B03_S1_M5")      { *hashID= 128; *bec=-2; *layer=2; *phimod=20; *etamod=  0; }
  else if (geographicalID=="D3C_B03_S1_M2")      { *hashID= 129; *bec=-2; *layer=2; *phimod=21; *etamod=  0; }
  else if (geographicalID=="D3C_B03_S1_M6")      { *hashID= 130; *bec=-2; *layer=2; *phimod=22; *etamod=  0; }
  else if (geographicalID=="D3C_B03_S1_M1")      { *hashID= 131; *bec=-2; *layer=2; *phimod=23; *etamod=  0; }
  else if (geographicalID=="D3C_B03_S2_M4")      { *hashID= 132; *bec=-2; *layer=2; *phimod=24; *etamod=  0; }
  else if (geographicalID=="D3C_B03_S2_M3")      { *hashID= 133; *bec=-2; *layer=2; *phimod=25; *etamod=  0; }
  else if (geographicalID=="D3C_B03_S2_M5")      { *hashID= 134; *bec=-2; *layer=2; *phimod=26; *etamod=  0; }
  else if (geographicalID=="D3C_B03_S2_M2")      { *hashID= 135; *bec=-2; *layer=2; *phimod=27; *etamod=  0; }
  else if (geographicalID=="D3C_B03_S2_M6")      { *hashID= 136; *bec=-2; *layer=2; *phimod=28; *etamod=  0; }
  else if (geographicalID=="D3C_B03_S2_M1")      { *hashID= 137; *bec=-2; *layer=2; *phimod=29; *etamod=  0; }
  else if (geographicalID=="D3C_B04_S1_M4")      { *hashID= 138; *bec=-2; *layer=2; *phimod=30; *etamod=  0; }
  else if (geographicalID=="D3C_B04_S1_M3")      { *hashID= 139; *bec=-2; *layer=2; *phimod=31; *etamod=  0; }
  else if (geographicalID=="D3C_B04_S1_M5")      { *hashID= 140; *bec=-2; *layer=2; *phimod=32; *etamod=  0; }
  else if (geographicalID=="D3C_B04_S1_M2")      { *hashID= 141; *bec=-2; *layer=2; *phimod=33; *etamod=  0; }
  else if (geographicalID=="D3C_B04_S1_M6")      { *hashID= 142; *bec=-2; *layer=2; *phimod=34; *etamod=  0; }
  else if (geographicalID=="D3C_B04_S1_M1")      { *hashID= 143; *bec=-2; *layer=2; *phimod=35; *etamod=  0; }
  else if (geographicalID=="D3C_B04_S2_M4")      { *hashID= 144; *bec=-2; *layer=2; *phimod=36; *etamod=  0; }
  else if (geographicalID=="D3C_B04_S2_M3")      { *hashID= 145; *bec=-2; *layer=2; *phimod=37; *etamod=  0; }
  else if (geographicalID=="D3C_B04_S2_M5")      { *hashID= 146; *bec=-2; *layer=2; *phimod=38; *etamod=  0; }
  else if (geographicalID=="D3C_B04_S2_M2")      { *hashID= 147; *bec=-2; *layer=2; *phimod=39; *etamod=  0; }
  else if (geographicalID=="D3C_B04_S2_M6")      { *hashID= 148; *bec=-2; *layer=2; *phimod=40; *etamod=  0; }
  else if (geographicalID=="D3C_B04_S2_M1")      { *hashID= 149; *bec=-2; *layer=2; *phimod=41; *etamod=  0; }
  else if (geographicalID=="D3C_B01_S1_M4")      { *hashID= 150; *bec=-2; *layer=2; *phimod=42; *etamod=  0; }
  else if (geographicalID=="D3C_B01_S1_M3")      { *hashID= 151; *bec=-2; *layer=2; *phimod=43; *etamod=  0; }
  else if (geographicalID=="D3C_B01_S1_M5")      { *hashID= 152; *bec=-2; *layer=2; *phimod=44; *etamod=  0; }
  else if (geographicalID=="D3C_B01_S1_M2")      { *hashID= 153; *bec=-2; *layer=2; *phimod=45; *etamod=  0; }
  else if (geographicalID=="D3C_B01_S1_M6")      { *hashID= 154; *bec=-2; *layer=2; *phimod=46; *etamod=  0; }
  else if (geographicalID=="D3C_B01_S1_M1")      { *hashID= 155; *bec=-2; *layer=2; *phimod=47; *etamod=  0; }
  else if (geographicalID=="LI_S01_C_M4_C8_2")   { *hashID= 156; *bec= 0; *layer=0; *phimod= 0; *etamod=-10; }
  else if (geographicalID=="LI_S01_C_M4_C8_1")   { *hashID= 157; *bec= 0; *layer=0; *phimod= 0; *etamod= -9; }
  else if (geographicalID=="LI_S01_C_M4_C7_2")   { *hashID= 158; *bec= 0; *layer=0; *phimod= 0; *etamod= -8; }
  else if (geographicalID=="LI_S01_C_M4_C7_1")   { *hashID= 159; *bec= 0; *layer=0; *phimod= 0; *etamod= -7; }
  else if (geographicalID=="LI_S01_C_M3_C6")     { *hashID= 160; *bec= 0; *layer=0; *phimod= 0; *etamod= -6; }
  else if (geographicalID=="LI_S01_C_M3_C5")     { *hashID= 161; *bec= 0; *layer=0; *phimod= 0; *etamod= -5; }
  else if (geographicalID=="LI_S01_C_M2_C4")     { *hashID= 162; *bec= 0; *layer=0; *phimod= 0; *etamod= -4; }
  else if (geographicalID=="LI_S01_C_M2_C3")     { *hashID= 163; *bec= 0; *layer=0; *phimod= 0; *etamod= -3; }
  else if (geographicalID=="LI_S01_C_M1_C2")     { *hashID= 164; *bec= 0; *layer=0; *phimod= 0; *etamod= -2; }
  else if (geographicalID=="LI_S01_C_M1_C1")     { *hashID= 165; *bec= 0; *layer=0; *phimod= 0; *etamod= -1; }
  else if (geographicalID=="LI_S01_A_M1_A1")     { *hashID= 166; *bec= 0; *layer=0; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="LI_S01_A_M1_A2")     { *hashID= 167; *bec= 0; *layer=0; *phimod= 0; *etamod=  1; }
  else if (geographicalID=="LI_S01_A_M2_A3")     { *hashID= 168; *bec= 0; *layer=0; *phimod= 0; *etamod=  2; }
  else if (geographicalID=="LI_S01_A_M2_A4")     { *hashID= 169; *bec= 0; *layer=0; *phimod= 0; *etamod=  3; }
  else if (geographicalID=="LI_S01_A_M3_A5")     { *hashID= 170; *bec= 0; *layer=0; *phimod= 0; *etamod=  4; }
  else if (geographicalID=="LI_S01_A_M3_A6")     { *hashID= 171; *bec= 0; *layer=0; *phimod= 0; *etamod=  5; }
  else if (geographicalID=="LI_S01_A_M4_A7_1")   { *hashID= 172; *bec= 0; *layer=0; *phimod= 0; *etamod=  6; }
  else if (geographicalID=="LI_S01_A_M4_A7_2")   { *hashID= 173; *bec= 0; *layer=0; *phimod= 0; *etamod=  7; }
  else if (geographicalID=="LI_S01_A_M4_A8_1")   { *hashID= 174; *bec= 0; *layer=0; *phimod= 0; *etamod=  8; }
  else if (geographicalID=="LI_S01_A_M4_A8_2")   { *hashID= 175; *bec= 0; *layer=0; *phimod= 0; *etamod=  9; }
  else if (geographicalID=="LI_S02_C_M4_C8_2")   { *hashID= 176; *bec= 0; *layer=0; *phimod= 1; *etamod=-10; }
  else if (geographicalID=="LI_S02_C_M4_C8_1")   { *hashID= 177; *bec= 0; *layer=0; *phimod= 1; *etamod= -9; }
  else if (geographicalID=="LI_S02_C_M4_C7_2")   { *hashID= 178; *bec= 0; *layer=0; *phimod= 1; *etamod= -8; }
  else if (geographicalID=="LI_S02_C_M4_C7_1")   { *hashID= 179; *bec= 0; *layer=0; *phimod= 1; *etamod= -7; }
  else if (geographicalID=="LI_S02_C_M3_C6")     { *hashID= 180; *bec= 0; *layer=0; *phimod= 1; *etamod= -6; }
  else if (geographicalID=="LI_S02_C_M3_C5")     { *hashID= 181; *bec= 0; *layer=0; *phimod= 1; *etamod= -5; }
  else if (geographicalID=="LI_S02_C_M2_C4")     { *hashID= 182; *bec= 0; *layer=0; *phimod= 1; *etamod= -4; }
  else if (geographicalID=="LI_S02_C_M2_C3")     { *hashID= 183; *bec= 0; *layer=0; *phimod= 1; *etamod= -3; }
  else if (geographicalID=="LI_S02_C_M1_C2")     { *hashID= 184; *bec= 0; *layer=0; *phimod= 1; *etamod= -2; }
  else if (geographicalID=="LI_S02_C_M1_C1")     { *hashID= 185; *bec= 0; *layer=0; *phimod= 1; *etamod= -1; }
  else if (geographicalID=="LI_S02_A_M1_A1")     { *hashID= 186; *bec= 0; *layer=0; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="LI_S02_A_M1_A2")     { *hashID= 187; *bec= 0; *layer=0; *phimod= 1; *etamod=  1; }
  else if (geographicalID=="LI_S02_A_M2_A3")     { *hashID= 188; *bec= 0; *layer=0; *phimod= 1; *etamod=  2; }
  else if (geographicalID=="LI_S02_A_M2_A4")     { *hashID= 189; *bec= 0; *layer=0; *phimod= 1; *etamod=  3; }
  else if (geographicalID=="LI_S02_A_M3_A5")     { *hashID= 190; *bec= 0; *layer=0; *phimod= 1; *etamod=  4; }
  else if (geographicalID=="LI_S02_A_M3_A6")     { *hashID= 191; *bec= 0; *layer=0; *phimod= 1; *etamod=  5; }
  else if (geographicalID=="LI_S02_A_M4_A7_1")   { *hashID= 192; *bec= 0; *layer=0; *phimod= 1; *etamod=  6; }
  else if (geographicalID=="LI_S02_A_M4_A7_2")   { *hashID= 193; *bec= 0; *layer=0; *phimod= 1; *etamod=  7; }
  else if (geographicalID=="LI_S02_A_M4_A8_1")   { *hashID= 194; *bec= 0; *layer=0; *phimod= 1; *etamod=  8; }
  else if (geographicalID=="LI_S02_A_M4_A8_2")   { *hashID= 195; *bec= 0; *layer=0; *phimod= 1; *etamod=  9; }
  else if (geographicalID=="LI_S03_C_M4_C8_2")   { *hashID= 196; *bec= 0; *layer=0; *phimod= 2; *etamod=-10; }
  else if (geographicalID=="LI_S03_C_M4_C8_1")   { *hashID= 197; *bec= 0; *layer=0; *phimod= 2; *etamod= -9; }
  else if (geographicalID=="LI_S03_C_M4_C7_2")   { *hashID= 198; *bec= 0; *layer=0; *phimod= 2; *etamod= -8; }
  else if (geographicalID=="LI_S03_C_M4_C7_1")   { *hashID= 199; *bec= 0; *layer=0; *phimod= 2; *etamod= -7; }
  else if (geographicalID=="LI_S03_C_M3_C6")     { *hashID= 200; *bec= 0; *layer=0; *phimod= 2; *etamod= -6; }
  else if (geographicalID=="LI_S03_C_M3_C5")     { *hashID= 201; *bec= 0; *layer=0; *phimod= 2; *etamod= -5; }
  else if (geographicalID=="LI_S03_C_M2_C4")     { *hashID= 202; *bec= 0; *layer=0; *phimod= 2; *etamod= -4; }
  else if (geographicalID=="LI_S03_C_M2_C3")     { *hashID= 203; *bec= 0; *layer=0; *phimod= 2; *etamod= -3; }
  else if (geographicalID=="LI_S03_C_M1_C2")     { *hashID= 204; *bec= 0; *layer=0; *phimod= 2; *etamod= -2; }
  else if (geographicalID=="LI_S03_C_M1_C1")     { *hashID= 205; *bec= 0; *layer=0; *phimod= 2; *etamod= -1; }
  else if (geographicalID=="LI_S03_A_M1_A1")     { *hashID= 206; *bec= 0; *layer=0; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="LI_S03_A_M1_A2")     { *hashID= 207; *bec= 0; *layer=0; *phimod= 2; *etamod=  1; }
  else if (geographicalID=="LI_S03_A_M2_A3")     { *hashID= 208; *bec= 0; *layer=0; *phimod= 2; *etamod=  2; }
  else if (geographicalID=="LI_S03_A_M2_A4")     { *hashID= 209; *bec= 0; *layer=0; *phimod= 2; *etamod=  3; }
  else if (geographicalID=="LI_S03_A_M3_A5")     { *hashID= 210; *bec= 0; *layer=0; *phimod= 2; *etamod=  4; }
  else if (geographicalID=="LI_S03_A_M3_A6")     { *hashID= 211; *bec= 0; *layer=0; *phimod= 2; *etamod=  5; }
  else if (geographicalID=="LI_S03_A_M4_A7_1")   { *hashID= 212; *bec= 0; *layer=0; *phimod= 2; *etamod=  6; }
  else if (geographicalID=="LI_S03_A_M4_A7_2")   { *hashID= 213; *bec= 0; *layer=0; *phimod= 2; *etamod=  7; }
  else if (geographicalID=="LI_S03_A_M4_A8_1")   { *hashID= 214; *bec= 0; *layer=0; *phimod= 2; *etamod=  8; }
  else if (geographicalID=="LI_S03_A_M4_A8_2")   { *hashID= 215; *bec= 0; *layer=0; *phimod= 2; *etamod=  9; }
  else if (geographicalID=="LI_S04_C_M4_C8_2")   { *hashID= 216; *bec= 0; *layer=0; *phimod= 3; *etamod=-10; }
  else if (geographicalID=="LI_S04_C_M4_C8_1")   { *hashID= 217; *bec= 0; *layer=0; *phimod= 3; *etamod= -9; }
  else if (geographicalID=="LI_S04_C_M4_C7_2")   { *hashID= 218; *bec= 0; *layer=0; *phimod= 3; *etamod= -8; }
  else if (geographicalID=="LI_S04_C_M4_C7_1")   { *hashID= 219; *bec= 0; *layer=0; *phimod= 3; *etamod= -7; }
  else if (geographicalID=="LI_S04_C_M3_C6")     { *hashID= 220; *bec= 0; *layer=0; *phimod= 3; *etamod= -6; }
  else if (geographicalID=="LI_S04_C_M3_C5")     { *hashID= 221; *bec= 0; *layer=0; *phimod= 3; *etamod= -5; }
  else if (geographicalID=="LI_S04_C_M2_C4")     { *hashID= 222; *bec= 0; *layer=0; *phimod= 3; *etamod= -4; }
  else if (geographicalID=="LI_S04_C_M2_C3")     { *hashID= 223; *bec= 0; *layer=0; *phimod= 3; *etamod= -3; }
  else if (geographicalID=="LI_S04_C_M1_C2")     { *hashID= 224; *bec= 0; *layer=0; *phimod= 3; *etamod= -2; }
  else if (geographicalID=="LI_S04_C_M1_C1")     { *hashID= 225; *bec= 0; *layer=0; *phimod= 3; *etamod= -1; }
  else if (geographicalID=="LI_S04_A_M1_A1")     { *hashID= 226; *bec= 0; *layer=0; *phimod= 3; *etamod=  0; }
  else if (geographicalID=="LI_S04_A_M1_A2")     { *hashID= 227; *bec= 0; *layer=0; *phimod= 3; *etamod=  1; }
  else if (geographicalID=="LI_S04_A_M2_A3")     { *hashID= 228; *bec= 0; *layer=0; *phimod= 3; *etamod=  2; }
  else if (geographicalID=="LI_S04_A_M2_A4")     { *hashID= 229; *bec= 0; *layer=0; *phimod= 3; *etamod=  3; }
  else if (geographicalID=="LI_S04_A_M3_A5")     { *hashID= 230; *bec= 0; *layer=0; *phimod= 3; *etamod=  4; }
  else if (geographicalID=="LI_S04_A_M3_A6")     { *hashID= 231; *bec= 0; *layer=0; *phimod= 3; *etamod=  5; }
  else if (geographicalID=="LI_S04_A_M4_A7_1")   { *hashID= 232; *bec= 0; *layer=0; *phimod= 3; *etamod=  6; }
  else if (geographicalID=="LI_S04_A_M4_A7_2")   { *hashID= 233; *bec= 0; *layer=0; *phimod= 3; *etamod=  7; }
  else if (geographicalID=="LI_S04_A_M4_A8_1")   { *hashID= 234; *bec= 0; *layer=0; *phimod= 3; *etamod=  8; }
  else if (geographicalID=="LI_S04_A_M4_A8_2")   { *hashID= 235; *bec= 0; *layer=0; *phimod= 3; *etamod=  9; }
  else if (geographicalID=="LI_S05_C_M4_C8_2")   { *hashID= 236; *bec= 0; *layer=0; *phimod= 4; *etamod=-10; }
  else if (geographicalID=="LI_S05_C_M4_C8_1")   { *hashID= 237; *bec= 0; *layer=0; *phimod= 4; *etamod= -9; }
  else if (geographicalID=="LI_S05_C_M4_C7_2")   { *hashID= 238; *bec= 0; *layer=0; *phimod= 4; *etamod= -8; }
  else if (geographicalID=="LI_S05_C_M4_C7_1")   { *hashID= 239; *bec= 0; *layer=0; *phimod= 4; *etamod= -7; }
  else if (geographicalID=="LI_S05_C_M3_C6")     { *hashID= 240; *bec= 0; *layer=0; *phimod= 4; *etamod= -6; }
  else if (geographicalID=="LI_S05_C_M3_C5")     { *hashID= 241; *bec= 0; *layer=0; *phimod= 4; *etamod= -5; }
  else if (geographicalID=="LI_S05_C_M2_C4")     { *hashID= 242; *bec= 0; *layer=0; *phimod= 4; *etamod= -4; }
  else if (geographicalID=="LI_S05_C_M2_C3")     { *hashID= 243; *bec= 0; *layer=0; *phimod= 4; *etamod= -3; }
  else if (geographicalID=="LI_S05_C_M1_C2")     { *hashID= 244; *bec= 0; *layer=0; *phimod= 4; *etamod= -2; }
  else if (geographicalID=="LI_S05_C_M1_C1")     { *hashID= 245; *bec= 0; *layer=0; *phimod= 4; *etamod= -1; }
  else if (geographicalID=="LI_S05_A_M1_A1")     { *hashID= 246; *bec= 0; *layer=0; *phimod= 4; *etamod=  0; }
  else if (geographicalID=="LI_S05_A_M1_A2")     { *hashID= 247; *bec= 0; *layer=0; *phimod= 4; *etamod=  1; }
  else if (geographicalID=="LI_S05_A_M2_A3")     { *hashID= 248; *bec= 0; *layer=0; *phimod= 4; *etamod=  2; }
  else if (geographicalID=="LI_S05_A_M2_A4")     { *hashID= 249; *bec= 0; *layer=0; *phimod= 4; *etamod=  3; }
  else if (geographicalID=="LI_S05_A_M3_A5")     { *hashID= 250; *bec= 0; *layer=0; *phimod= 4; *etamod=  4; }
  else if (geographicalID=="LI_S05_A_M3_A6")     { *hashID= 251; *bec= 0; *layer=0; *phimod= 4; *etamod=  5; }
  else if (geographicalID=="LI_S05_A_M4_A7_1")   { *hashID= 252; *bec= 0; *layer=0; *phimod= 4; *etamod=  6; }
  else if (geographicalID=="LI_S05_A_M4_A7_2")   { *hashID= 253; *bec= 0; *layer=0; *phimod= 4; *etamod=  7; }
  else if (geographicalID=="LI_S05_A_M4_A8_1")   { *hashID= 254; *bec= 0; *layer=0; *phimod= 4; *etamod=  8; }
  else if (geographicalID=="LI_S05_A_M4_A8_2")   { *hashID= 255; *bec= 0; *layer=0; *phimod= 4; *etamod=  9; }
  else if (geographicalID=="LI_S06_C_M4_C8_2")   { *hashID= 256; *bec= 0; *layer=0; *phimod= 5; *etamod=-10; }
  else if (geographicalID=="LI_S06_C_M4_C8_1")   { *hashID= 257; *bec= 0; *layer=0; *phimod= 5; *etamod= -9; }
  else if (geographicalID=="LI_S06_C_M4_C7_2")   { *hashID= 258; *bec= 0; *layer=0; *phimod= 5; *etamod= -8; }
  else if (geographicalID=="LI_S06_C_M4_C7_1")   { *hashID= 259; *bec= 0; *layer=0; *phimod= 5; *etamod= -7; }
  else if (geographicalID=="LI_S06_C_M3_C6")     { *hashID= 260; *bec= 0; *layer=0; *phimod= 5; *etamod= -6; }
  else if (geographicalID=="LI_S06_C_M3_C5")     { *hashID= 261; *bec= 0; *layer=0; *phimod= 5; *etamod= -5; }
  else if (geographicalID=="LI_S06_C_M2_C4")     { *hashID= 262; *bec= 0; *layer=0; *phimod= 5; *etamod= -4; }
  else if (geographicalID=="LI_S06_C_M2_C3")     { *hashID= 263; *bec= 0; *layer=0; *phimod= 5; *etamod= -3; }
  else if (geographicalID=="LI_S06_C_M1_C2")     { *hashID= 264; *bec= 0; *layer=0; *phimod= 5; *etamod= -2; }
  else if (geographicalID=="LI_S06_C_M1_C1")     { *hashID= 265; *bec= 0; *layer=0; *phimod= 5; *etamod= -1; }
  else if (geographicalID=="LI_S06_A_M1_A1")     { *hashID= 266; *bec= 0; *layer=0; *phimod= 5; *etamod=  0; }
  else if (geographicalID=="LI_S06_A_M1_A2")     { *hashID= 267; *bec= 0; *layer=0; *phimod= 5; *etamod=  1; }
  else if (geographicalID=="LI_S06_A_M2_A3")     { *hashID= 268; *bec= 0; *layer=0; *phimod= 5; *etamod=  2; }
  else if (geographicalID=="LI_S06_A_M2_A4")     { *hashID= 269; *bec= 0; *layer=0; *phimod= 5; *etamod=  3; }
  else if (geographicalID=="LI_S06_A_M3_A5")     { *hashID= 270; *bec= 0; *layer=0; *phimod= 5; *etamod=  4; }
  else if (geographicalID=="LI_S06_A_M3_A6")     { *hashID= 271; *bec= 0; *layer=0; *phimod= 5; *etamod=  5; }
  else if (geographicalID=="LI_S06_A_M4_A7_1")   { *hashID= 272; *bec= 0; *layer=0; *phimod= 5; *etamod=  6; }
  else if (geographicalID=="LI_S06_A_M4_A7_2")   { *hashID= 273; *bec= 0; *layer=0; *phimod= 5; *etamod=  7; }
  else if (geographicalID=="LI_S06_A_M4_A8_1")   { *hashID= 274; *bec= 0; *layer=0; *phimod= 5; *etamod=  8; }
  else if (geographicalID=="LI_S06_A_M4_A8_2")   { *hashID= 275; *bec= 0; *layer=0; *phimod= 5; *etamod=  9; }
  else if (geographicalID=="LI_S07_C_M4_C8_2")   { *hashID= 276; *bec= 0; *layer=0; *phimod= 6; *etamod=-10; }
  else if (geographicalID=="LI_S07_C_M4_C8_1")   { *hashID= 277; *bec= 0; *layer=0; *phimod= 6; *etamod= -9; }
  else if (geographicalID=="LI_S07_C_M4_C7_2")   { *hashID= 278; *bec= 0; *layer=0; *phimod= 6; *etamod= -8; }
  else if (geographicalID=="LI_S07_C_M4_C7_1")   { *hashID= 279; *bec= 0; *layer=0; *phimod= 6; *etamod= -7; }
  else if (geographicalID=="LI_S07_C_M3_C6")     { *hashID= 280; *bec= 0; *layer=0; *phimod= 6; *etamod= -6; }
  else if (geographicalID=="LI_S07_C_M3_C5")     { *hashID= 281; *bec= 0; *layer=0; *phimod= 6; *etamod= -5; }
  else if (geographicalID=="LI_S07_C_M2_C4")     { *hashID= 282; *bec= 0; *layer=0; *phimod= 6; *etamod= -4; }
  else if (geographicalID=="LI_S07_C_M2_C3")     { *hashID= 283; *bec= 0; *layer=0; *phimod= 6; *etamod= -3; }
  else if (geographicalID=="LI_S07_C_M1_C2")     { *hashID= 284; *bec= 0; *layer=0; *phimod= 6; *etamod= -2; }
  else if (geographicalID=="LI_S07_C_M1_C1")     { *hashID= 285; *bec= 0; *layer=0; *phimod= 6; *etamod= -1; }
  else if (geographicalID=="LI_S07_A_M1_A1")     { *hashID= 286; *bec= 0; *layer=0; *phimod= 6; *etamod=  0; }
  else if (geographicalID=="LI_S07_A_M1_A2")     { *hashID= 287; *bec= 0; *layer=0; *phimod= 6; *etamod=  1; }
  else if (geographicalID=="LI_S07_A_M2_A3")     { *hashID= 288; *bec= 0; *layer=0; *phimod= 6; *etamod=  2; }
  else if (geographicalID=="LI_S07_A_M2_A4")     { *hashID= 289; *bec= 0; *layer=0; *phimod= 6; *etamod=  3; }
  else if (geographicalID=="LI_S07_A_M3_A5")     { *hashID= 290; *bec= 0; *layer=0; *phimod= 6; *etamod=  4; }
  else if (geographicalID=="LI_S07_A_M3_A6")     { *hashID= 291; *bec= 0; *layer=0; *phimod= 6; *etamod=  5; }
  else if (geographicalID=="LI_S07_A_M4_A7_1")   { *hashID= 292; *bec= 0; *layer=0; *phimod= 6; *etamod=  6; }
  else if (geographicalID=="LI_S07_A_M4_A7_2")   { *hashID= 293; *bec= 0; *layer=0; *phimod= 6; *etamod=  7; }
  else if (geographicalID=="LI_S07_A_M4_A8_1")   { *hashID= 294; *bec= 0; *layer=0; *phimod= 6; *etamod=  8; }
  else if (geographicalID=="LI_S07_A_M4_A8_2")   { *hashID= 295; *bec= 0; *layer=0; *phimod= 6; *etamod=  9; }
  else if (geographicalID=="LI_S08_C_M4_C8_2")   { *hashID= 296; *bec= 0; *layer=0; *phimod= 7; *etamod=-10; }
  else if (geographicalID=="LI_S08_C_M4_C8_1")   { *hashID= 297; *bec= 0; *layer=0; *phimod= 7; *etamod= -9; }
  else if (geographicalID=="LI_S08_C_M4_C7_2")   { *hashID= 298; *bec= 0; *layer=0; *phimod= 7; *etamod= -8; }
  else if (geographicalID=="LI_S08_C_M4_C7_1")   { *hashID= 299; *bec= 0; *layer=0; *phimod= 7; *etamod= -7; }
  else if (geographicalID=="LI_S08_C_M3_C6")     { *hashID= 300; *bec= 0; *layer=0; *phimod= 7; *etamod= -6; }
  else if (geographicalID=="LI_S08_C_M3_C5")     { *hashID= 301; *bec= 0; *layer=0; *phimod= 7; *etamod= -5; }
  else if (geographicalID=="LI_S08_C_M2_C4")     { *hashID= 302; *bec= 0; *layer=0; *phimod= 7; *etamod= -4; }
  else if (geographicalID=="LI_S08_C_M2_C3")     { *hashID= 303; *bec= 0; *layer=0; *phimod= 7; *etamod= -3; }
  else if (geographicalID=="LI_S08_C_M1_C2")     { *hashID= 304; *bec= 0; *layer=0; *phimod= 7; *etamod= -2; }
  else if (geographicalID=="LI_S08_C_M1_C1")     { *hashID= 305; *bec= 0; *layer=0; *phimod= 7; *etamod= -1; }
  else if (geographicalID=="LI_S08_A_M1_A1")     { *hashID= 306; *bec= 0; *layer=0; *phimod= 7; *etamod=  0; }
  else if (geographicalID=="LI_S08_A_M1_A2")     { *hashID= 307; *bec= 0; *layer=0; *phimod= 7; *etamod=  1; }
  else if (geographicalID=="LI_S08_A_M2_A3")     { *hashID= 308; *bec= 0; *layer=0; *phimod= 7; *etamod=  2; }
  else if (geographicalID=="LI_S08_A_M2_A4")     { *hashID= 309; *bec= 0; *layer=0; *phimod= 7; *etamod=  3; }
  else if (geographicalID=="LI_S08_A_M3_A5")     { *hashID= 310; *bec= 0; *layer=0; *phimod= 7; *etamod=  4; }
  else if (geographicalID=="LI_S08_A_M3_A6")     { *hashID= 311; *bec= 0; *layer=0; *phimod= 7; *etamod=  5; }
  else if (geographicalID=="LI_S08_A_M4_A7_1")   { *hashID= 312; *bec= 0; *layer=0; *phimod= 7; *etamod=  6; }
  else if (geographicalID=="LI_S08_A_M4_A7_2")   { *hashID= 313; *bec= 0; *layer=0; *phimod= 7; *etamod=  7; }
  else if (geographicalID=="LI_S08_A_M4_A8_1")   { *hashID= 314; *bec= 0; *layer=0; *phimod= 7; *etamod=  8; }
  else if (geographicalID=="LI_S08_A_M4_A8_2")   { *hashID= 315; *bec= 0; *layer=0; *phimod= 7; *etamod=  9; }
  else if (geographicalID=="LI_S09_C_M4_C8_2")   { *hashID= 316; *bec= 0; *layer=0; *phimod= 8; *etamod=-10; }
  else if (geographicalID=="LI_S09_C_M4_C8_1")   { *hashID= 317; *bec= 0; *layer=0; *phimod= 8; *etamod= -9; }
  else if (geographicalID=="LI_S09_C_M4_C7_2")   { *hashID= 318; *bec= 0; *layer=0; *phimod= 8; *etamod= -8; }
  else if (geographicalID=="LI_S09_C_M4_C7_1")   { *hashID= 319; *bec= 0; *layer=0; *phimod= 8; *etamod= -7; }
  else if (geographicalID=="LI_S09_C_M3_C6")     { *hashID= 320; *bec= 0; *layer=0; *phimod= 8; *etamod= -6; }
  else if (geographicalID=="LI_S09_C_M3_C5")     { *hashID= 321; *bec= 0; *layer=0; *phimod= 8; *etamod= -5; }
  else if (geographicalID=="LI_S09_C_M2_C4")     { *hashID= 322; *bec= 0; *layer=0; *phimod= 8; *etamod= -4; }
  else if (geographicalID=="LI_S09_C_M2_C3")     { *hashID= 323; *bec= 0; *layer=0; *phimod= 8; *etamod= -3; }
  else if (geographicalID=="LI_S09_C_M1_C2")     { *hashID= 324; *bec= 0; *layer=0; *phimod= 8; *etamod= -2; }
  else if (geographicalID=="LI_S09_C_M1_C1")     { *hashID= 325; *bec= 0; *layer=0; *phimod= 8; *etamod= -1; }
  else if (geographicalID=="LI_S09_A_M1_A1")     { *hashID= 326; *bec= 0; *layer=0; *phimod= 8; *etamod=  0; }
  else if (geographicalID=="LI_S09_A_M1_A2")     { *hashID= 327; *bec= 0; *layer=0; *phimod= 8; *etamod=  1; }
  else if (geographicalID=="LI_S09_A_M2_A3")     { *hashID= 328; *bec= 0; *layer=0; *phimod= 8; *etamod=  2; }
  else if (geographicalID=="LI_S09_A_M2_A4")     { *hashID= 329; *bec= 0; *layer=0; *phimod= 8; *etamod=  3; }
  else if (geographicalID=="LI_S09_A_M3_A5")     { *hashID= 330; *bec= 0; *layer=0; *phimod= 8; *etamod=  4; }
  else if (geographicalID=="LI_S09_A_M3_A6")     { *hashID= 331; *bec= 0; *layer=0; *phimod= 8; *etamod=  5; }
  else if (geographicalID=="LI_S09_A_M4_A7_1")   { *hashID= 332; *bec= 0; *layer=0; *phimod= 8; *etamod=  6; }
  else if (geographicalID=="LI_S09_A_M4_A7_2")   { *hashID= 333; *bec= 0; *layer=0; *phimod= 8; *etamod=  7; }
  else if (geographicalID=="LI_S09_A_M4_A8_1")   { *hashID= 334; *bec= 0; *layer=0; *phimod= 8; *etamod=  8; }
  else if (geographicalID=="LI_S09_A_M4_A8_2")   { *hashID= 335; *bec= 0; *layer=0; *phimod= 8; *etamod=  9; }
  else if (geographicalID=="LI_S10_C_M4_C8_2")   { *hashID= 336; *bec= 0; *layer=0; *phimod= 9; *etamod=-10; }
  else if (geographicalID=="LI_S10_C_M4_C8_1")   { *hashID= 337; *bec= 0; *layer=0; *phimod= 9; *etamod= -9; }
  else if (geographicalID=="LI_S10_C_M4_C7_2")   { *hashID= 338; *bec= 0; *layer=0; *phimod= 9; *etamod= -8; }
  else if (geographicalID=="LI_S10_C_M4_C7_1")   { *hashID= 339; *bec= 0; *layer=0; *phimod= 9; *etamod= -7; }
  else if (geographicalID=="LI_S10_C_M3_C6")     { *hashID= 340; *bec= 0; *layer=0; *phimod= 9; *etamod= -6; }
  else if (geographicalID=="LI_S10_C_M3_C5")     { *hashID= 341; *bec= 0; *layer=0; *phimod= 9; *etamod= -5; }
  else if (geographicalID=="LI_S10_C_M2_C4")     { *hashID= 342; *bec= 0; *layer=0; *phimod= 9; *etamod= -4; }
  else if (geographicalID=="LI_S10_C_M2_C3")     { *hashID= 343; *bec= 0; *layer=0; *phimod= 9; *etamod= -3; }
  else if (geographicalID=="LI_S10_C_M1_C2")     { *hashID= 344; *bec= 0; *layer=0; *phimod= 9; *etamod= -2; }
  else if (geographicalID=="LI_S10_C_M1_C1")     { *hashID= 345; *bec= 0; *layer=0; *phimod= 9; *etamod= -1; }
  else if (geographicalID=="LI_S10_A_M1_A1")     { *hashID= 346; *bec= 0; *layer=0; *phimod= 9; *etamod=  0; }
  else if (geographicalID=="LI_S10_A_M1_A2")     { *hashID= 347; *bec= 0; *layer=0; *phimod= 9; *etamod=  1; }
  else if (geographicalID=="LI_S10_A_M2_A3")     { *hashID= 348; *bec= 0; *layer=0; *phimod= 9; *etamod=  2; }
  else if (geographicalID=="LI_S10_A_M2_A4")     { *hashID= 349; *bec= 0; *layer=0; *phimod= 9; *etamod=  3; }
  else if (geographicalID=="LI_S10_A_M3_A5")     { *hashID= 350; *bec= 0; *layer=0; *phimod= 9; *etamod=  4; }
  else if (geographicalID=="LI_S10_A_M3_A6")     { *hashID= 351; *bec= 0; *layer=0; *phimod= 9; *etamod=  5; }
  else if (geographicalID=="LI_S10_A_M4_A7_1")   { *hashID= 352; *bec= 0; *layer=0; *phimod= 9; *etamod=  6; }
  else if (geographicalID=="LI_S10_A_M4_A7_2")   { *hashID= 353; *bec= 0; *layer=0; *phimod= 9; *etamod=  7; }
  else if (geographicalID=="LI_S10_A_M4_A8_1")   { *hashID= 354; *bec= 0; *layer=0; *phimod= 9; *etamod=  8; }
  else if (geographicalID=="LI_S10_A_M4_A8_2")   { *hashID= 355; *bec= 0; *layer=0; *phimod= 9; *etamod=  9; }
  else if (geographicalID=="LI_S11_C_M4_C8_2")   { *hashID= 356; *bec= 0; *layer=0; *phimod=10; *etamod=-10; }
  else if (geographicalID=="LI_S11_C_M4_C8_1")   { *hashID= 357; *bec= 0; *layer=0; *phimod=10; *etamod= -9; }
  else if (geographicalID=="LI_S11_C_M4_C7_2")   { *hashID= 358; *bec= 0; *layer=0; *phimod=10; *etamod= -8; }
  else if (geographicalID=="LI_S11_C_M4_C7_1")   { *hashID= 359; *bec= 0; *layer=0; *phimod=10; *etamod= -7; }
  else if (geographicalID=="LI_S11_C_M3_C6")     { *hashID= 360; *bec= 0; *layer=0; *phimod=10; *etamod= -6; }
  else if (geographicalID=="LI_S11_C_M3_C5")     { *hashID= 361; *bec= 0; *layer=0; *phimod=10; *etamod= -5; }
  else if (geographicalID=="LI_S11_C_M2_C4")     { *hashID= 362; *bec= 0; *layer=0; *phimod=10; *etamod= -4; }
  else if (geographicalID=="LI_S11_C_M2_C3")     { *hashID= 363; *bec= 0; *layer=0; *phimod=10; *etamod= -3; }
  else if (geographicalID=="LI_S11_C_M1_C2")     { *hashID= 364; *bec= 0; *layer=0; *phimod=10; *etamod= -2; }
  else if (geographicalID=="LI_S11_C_M1_C1")     { *hashID= 365; *bec= 0; *layer=0; *phimod=10; *etamod= -1; }
  else if (geographicalID=="LI_S11_A_M1_A1")     { *hashID= 366; *bec= 0; *layer=0; *phimod=10; *etamod=  0; }
  else if (geographicalID=="LI_S11_A_M1_A2")     { *hashID= 367; *bec= 0; *layer=0; *phimod=10; *etamod=  1; }
  else if (geographicalID=="LI_S11_A_M2_A3")     { *hashID= 368; *bec= 0; *layer=0; *phimod=10; *etamod=  2; }
  else if (geographicalID=="LI_S11_A_M2_A4")     { *hashID= 369; *bec= 0; *layer=0; *phimod=10; *etamod=  3; }
  else if (geographicalID=="LI_S11_A_M3_A5")     { *hashID= 370; *bec= 0; *layer=0; *phimod=10; *etamod=  4; }
  else if (geographicalID=="LI_S11_A_M3_A6")     { *hashID= 371; *bec= 0; *layer=0; *phimod=10; *etamod=  5; }
  else if (geographicalID=="LI_S11_A_M4_A7_1")   { *hashID= 372; *bec= 0; *layer=0; *phimod=10; *etamod=  6; }
  else if (geographicalID=="LI_S11_A_M4_A7_2")   { *hashID= 373; *bec= 0; *layer=0; *phimod=10; *etamod=  7; }
  else if (geographicalID=="LI_S11_A_M4_A8_1")   { *hashID= 374; *bec= 0; *layer=0; *phimod=10; *etamod=  8; }
  else if (geographicalID=="LI_S11_A_M4_A8_2")   { *hashID= 375; *bec= 0; *layer=0; *phimod=10; *etamod=  9; }
  else if (geographicalID=="LI_S12_C_M4_C8_2")   { *hashID= 376; *bec= 0; *layer=0; *phimod=11; *etamod=-10; }
  else if (geographicalID=="LI_S12_C_M4_C8_1")   { *hashID= 377; *bec= 0; *layer=0; *phimod=11; *etamod= -9; }
  else if (geographicalID=="LI_S12_C_M4_C7_2")   { *hashID= 378; *bec= 0; *layer=0; *phimod=11; *etamod= -8; }
  else if (geographicalID=="LI_S12_C_M4_C7_1")   { *hashID= 379; *bec= 0; *layer=0; *phimod=11; *etamod= -7; }
  else if (geographicalID=="LI_S12_C_M3_C6")     { *hashID= 380; *bec= 0; *layer=0; *phimod=11; *etamod= -6; }
  else if (geographicalID=="LI_S12_C_M3_C5")     { *hashID= 381; *bec= 0; *layer=0; *phimod=11; *etamod= -5; }
  else if (geographicalID=="LI_S12_C_M2_C4")     { *hashID= 382; *bec= 0; *layer=0; *phimod=11; *etamod= -4; }
  else if (geographicalID=="LI_S12_C_M2_C3")     { *hashID= 383; *bec= 0; *layer=0; *phimod=11; *etamod= -3; }
  else if (geographicalID=="LI_S12_C_M1_C2")     { *hashID= 384; *bec= 0; *layer=0; *phimod=11; *etamod= -2; }
  else if (geographicalID=="LI_S12_C_M1_C1")     { *hashID= 385; *bec= 0; *layer=0; *phimod=11; *etamod= -1; }
  else if (geographicalID=="LI_S12_A_M1_A1")     { *hashID= 386; *bec= 0; *layer=0; *phimod=11; *etamod=  0; }
  else if (geographicalID=="LI_S12_A_M1_A2")     { *hashID= 387; *bec= 0; *layer=0; *phimod=11; *etamod=  1; }
  else if (geographicalID=="LI_S12_A_M2_A3")     { *hashID= 388; *bec= 0; *layer=0; *phimod=11; *etamod=  2; }
  else if (geographicalID=="LI_S12_A_M2_A4")     { *hashID= 389; *bec= 0; *layer=0; *phimod=11; *etamod=  3; }
  else if (geographicalID=="LI_S12_A_M3_A5")     { *hashID= 390; *bec= 0; *layer=0; *phimod=11; *etamod=  4; }
  else if (geographicalID=="LI_S12_A_M3_A6")     { *hashID= 391; *bec= 0; *layer=0; *phimod=11; *etamod=  5; }
  else if (geographicalID=="LI_S12_A_M4_A7_1")   { *hashID= 392; *bec= 0; *layer=0; *phimod=11; *etamod=  6; }
  else if (geographicalID=="LI_S12_A_M4_A7_2")   { *hashID= 393; *bec= 0; *layer=0; *phimod=11; *etamod=  7; }
  else if (geographicalID=="LI_S12_A_M4_A8_1")   { *hashID= 394; *bec= 0; *layer=0; *phimod=11; *etamod=  8; }
  else if (geographicalID=="LI_S12_A_M4_A8_2")   { *hashID= 395; *bec= 0; *layer=0; *phimod=11; *etamod=  9; }
  else if (geographicalID=="LI_S13_C_M4_C8_2")   { *hashID= 396; *bec= 0; *layer=0; *phimod=12; *etamod=-10; }
  else if (geographicalID=="LI_S13_C_M4_C8_1")   { *hashID= 397; *bec= 0; *layer=0; *phimod=12; *etamod= -9; }
  else if (geographicalID=="LI_S13_C_M4_C7_2")   { *hashID= 398; *bec= 0; *layer=0; *phimod=12; *etamod= -8; }
  else if (geographicalID=="LI_S13_C_M4_C7_1")   { *hashID= 399; *bec= 0; *layer=0; *phimod=12; *etamod= -7; }
  else if (geographicalID=="LI_S13_C_M3_C6")     { *hashID= 400; *bec= 0; *layer=0; *phimod=12; *etamod= -6; }
  else if (geographicalID=="LI_S13_C_M3_C5")     { *hashID= 401; *bec= 0; *layer=0; *phimod=12; *etamod= -5; }
  else if (geographicalID=="LI_S13_C_M2_C4")     { *hashID= 402; *bec= 0; *layer=0; *phimod=12; *etamod= -4; }
  else if (geographicalID=="LI_S13_C_M2_C3")     { *hashID= 403; *bec= 0; *layer=0; *phimod=12; *etamod= -3; }
  else if (geographicalID=="LI_S13_C_M1_C2")     { *hashID= 404; *bec= 0; *layer=0; *phimod=12; *etamod= -2; }
  else if (geographicalID=="LI_S13_C_M1_C1")     { *hashID= 405; *bec= 0; *layer=0; *phimod=12; *etamod= -1; }
  else if (geographicalID=="LI_S13_A_M1_A1")     { *hashID= 406; *bec= 0; *layer=0; *phimod=12; *etamod=  0; }
  else if (geographicalID=="LI_S13_A_M1_A2")     { *hashID= 407; *bec= 0; *layer=0; *phimod=12; *etamod=  1; }
  else if (geographicalID=="LI_S13_A_M2_A3")     { *hashID= 408; *bec= 0; *layer=0; *phimod=12; *etamod=  2; }
  else if (geographicalID=="LI_S13_A_M2_A4")     { *hashID= 409; *bec= 0; *layer=0; *phimod=12; *etamod=  3; }
  else if (geographicalID=="LI_S13_A_M3_A5")     { *hashID= 410; *bec= 0; *layer=0; *phimod=12; *etamod=  4; }
  else if (geographicalID=="LI_S13_A_M3_A6")     { *hashID= 411; *bec= 0; *layer=0; *phimod=12; *etamod=  5; }
  else if (geographicalID=="LI_S13_A_M4_A7_1")   { *hashID= 412; *bec= 0; *layer=0; *phimod=12; *etamod=  6; }
  else if (geographicalID=="LI_S13_A_M4_A7_2")   { *hashID= 413; *bec= 0; *layer=0; *phimod=12; *etamod=  7; }
  else if (geographicalID=="LI_S13_A_M4_A8_1")   { *hashID= 414; *bec= 0; *layer=0; *phimod=12; *etamod=  8; }
  else if (geographicalID=="LI_S13_A_M4_A8_2")   { *hashID= 415; *bec= 0; *layer=0; *phimod=12; *etamod=  9; }
  else if (geographicalID=="LI_S14_C_M4_C8_2")   { *hashID= 416; *bec= 0; *layer=0; *phimod=13; *etamod=-10; }
  else if (geographicalID=="LI_S14_C_M4_C8_1")   { *hashID= 417; *bec= 0; *layer=0; *phimod=13; *etamod= -9; }
  else if (geographicalID=="LI_S14_C_M4_C7_2")   { *hashID= 418; *bec= 0; *layer=0; *phimod=13; *etamod= -8; }
  else if (geographicalID=="LI_S14_C_M4_C7_1")   { *hashID= 419; *bec= 0; *layer=0; *phimod=13; *etamod= -7; }
  else if (geographicalID=="LI_S14_C_M3_C6")     { *hashID= 420; *bec= 0; *layer=0; *phimod=13; *etamod= -6; }
  else if (geographicalID=="LI_S14_C_M3_C5")     { *hashID= 421; *bec= 0; *layer=0; *phimod=13; *etamod= -5; }
  else if (geographicalID=="LI_S14_C_M2_C4")     { *hashID= 422; *bec= 0; *layer=0; *phimod=13; *etamod= -4; }
  else if (geographicalID=="LI_S14_C_M2_C3")     { *hashID= 423; *bec= 0; *layer=0; *phimod=13; *etamod= -3; }
  else if (geographicalID=="LI_S14_C_M1_C2")     { *hashID= 424; *bec= 0; *layer=0; *phimod=13; *etamod= -2; }
  else if (geographicalID=="LI_S14_C_M1_C1")     { *hashID= 425; *bec= 0; *layer=0; *phimod=13; *etamod= -1; }
  else if (geographicalID=="LI_S14_A_M1_A1")     { *hashID= 426; *bec= 0; *layer=0; *phimod=13; *etamod=  0; }
  else if (geographicalID=="LI_S14_A_M1_A2")     { *hashID= 427; *bec= 0; *layer=0; *phimod=13; *etamod=  1; }
  else if (geographicalID=="LI_S14_A_M2_A3")     { *hashID= 428; *bec= 0; *layer=0; *phimod=13; *etamod=  2; }
  else if (geographicalID=="LI_S14_A_M2_A4")     { *hashID= 429; *bec= 0; *layer=0; *phimod=13; *etamod=  3; }
  else if (geographicalID=="LI_S14_A_M3_A5")     { *hashID= 430; *bec= 0; *layer=0; *phimod=13; *etamod=  4; }
  else if (geographicalID=="LI_S14_A_M3_A6")     { *hashID= 431; *bec= 0; *layer=0; *phimod=13; *etamod=  5; }
  else if (geographicalID=="LI_S14_A_M4_A7_1")   { *hashID= 432; *bec= 0; *layer=0; *phimod=13; *etamod=  6; }
  else if (geographicalID=="LI_S14_A_M4_A7_2")   { *hashID= 433; *bec= 0; *layer=0; *phimod=13; *etamod=  7; }
  else if (geographicalID=="LI_S14_A_M4_A8_1")   { *hashID= 434; *bec= 0; *layer=0; *phimod=13; *etamod=  8; }
  else if (geographicalID=="LI_S14_A_M4_A8_2")   { *hashID= 435; *bec= 0; *layer=0; *phimod=13; *etamod=  9; }
  else if (geographicalID=="L0_B11_S2_C6_M6C")   { *hashID= 436; *bec= 0; *layer=1; *phimod= 0; *etamod= -6; }
  else if (geographicalID=="L0_B11_S2_C6_M5C")   { *hashID= 437; *bec= 0; *layer=1; *phimod= 0; *etamod= -5; }
  else if (geographicalID=="L0_B11_S2_C6_M4C")   { *hashID= 438; *bec= 0; *layer=1; *phimod= 0; *etamod= -4; }
  else if (geographicalID=="L0_B11_S2_C6_M3C")   { *hashID= 439; *bec= 0; *layer=1; *phimod= 0; *etamod= -3; }
  else if (geographicalID=="L0_B11_S2_C6_M2C")   { *hashID= 440; *bec= 0; *layer=1; *phimod= 0; *etamod= -2; }
  else if (geographicalID=="L0_B11_S2_C6_M1C")   { *hashID= 441; *bec= 0; *layer=1; *phimod= 0; *etamod= -1; }
  else if (geographicalID=="L0_B11_S2_A7_M0")    { *hashID= 442; *bec= 0; *layer=1; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="L0_B11_S2_A7_M1A")   { *hashID= 443; *bec= 0; *layer=1; *phimod= 0; *etamod=  1; }
  else if (geographicalID=="L0_B11_S2_A7_M2A")   { *hashID= 444; *bec= 0; *layer=1; *phimod= 0; *etamod=  2; }
  else if (geographicalID=="L0_B11_S2_A7_M3A")   { *hashID= 445; *bec= 0; *layer=1; *phimod= 0; *etamod=  3; }
  else if (geographicalID=="L0_B11_S2_A7_M4A")   { *hashID= 446; *bec= 0; *layer=1; *phimod= 0; *etamod=  4; }
  else if (geographicalID=="L0_B11_S2_A7_M5A")   { *hashID= 447; *bec= 0; *layer=1; *phimod= 0; *etamod=  5; }
  else if (geographicalID=="L0_B11_S2_A7_M6A")   { *hashID= 448; *bec= 0; *layer=1; *phimod= 0; *etamod=  6; }
  else if (geographicalID=="L0_B01_S1_C7_M6C")   { *hashID= 449; *bec= 0; *layer=1; *phimod= 1; *etamod= -6; }
  else if (geographicalID=="L0_B01_S1_C7_M5C")   { *hashID= 450; *bec= 0; *layer=1; *phimod= 1; *etamod= -5; }
  else if (geographicalID=="L0_B01_S1_C7_M4C")   { *hashID= 451; *bec= 0; *layer=1; *phimod= 1; *etamod= -4; }
  else if (geographicalID=="L0_B01_S1_C7_M3C")   { *hashID= 452; *bec= 0; *layer=1; *phimod= 1; *etamod= -3; }
  else if (geographicalID=="L0_B01_S1_C7_M2C")   { *hashID= 453; *bec= 0; *layer=1; *phimod= 1; *etamod= -2; }
  else if (geographicalID=="L0_B01_S1_C7_M1C")   { *hashID= 454; *bec= 0; *layer=1; *phimod= 1; *etamod= -1; }
  else if (geographicalID=="L0_B01_S1_C7_M0")    { *hashID= 455; *bec= 0; *layer=1; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="L0_B01_S1_A6_M1A")   { *hashID= 456; *bec= 0; *layer=1; *phimod= 1; *etamod=  1; }
  else if (geographicalID=="L0_B01_S1_A6_M2A")   { *hashID= 457; *bec= 0; *layer=1; *phimod= 1; *etamod=  2; }
  else if (geographicalID=="L0_B01_S1_A6_M3A")   { *hashID= 458; *bec= 0; *layer=1; *phimod= 1; *etamod=  3; }
  else if (geographicalID=="L0_B01_S1_A6_M4A")   { *hashID= 459; *bec= 0; *layer=1; *phimod= 1; *etamod=  4; }
  else if (geographicalID=="L0_B01_S1_A6_M5A")   { *hashID= 460; *bec= 0; *layer=1; *phimod= 1; *etamod=  5; }
  else if (geographicalID=="L0_B01_S1_A6_M6A")   { *hashID= 461; *bec= 0; *layer=1; *phimod= 1; *etamod=  6; }
  else if (geographicalID=="L0_B01_S2_C6_M6C")   { *hashID= 462; *bec= 0; *layer=1; *phimod= 2; *etamod= -6; }
  else if (geographicalID=="L0_B01_S2_C6_M5C")   { *hashID= 463; *bec= 0; *layer=1; *phimod= 2; *etamod= -5; }
  else if (geographicalID=="L0_B01_S2_C6_M4C")   { *hashID= 464; *bec= 0; *layer=1; *phimod= 2; *etamod= -4; }
  else if (geographicalID=="L0_B01_S2_C6_M3C")   { *hashID= 465; *bec= 0; *layer=1; *phimod= 2; *etamod= -3; }
  else if (geographicalID=="L0_B01_S2_C6_M2C")   { *hashID= 466; *bec= 0; *layer=1; *phimod= 2; *etamod= -2; }
  else if (geographicalID=="L0_B01_S2_C6_M1C")   { *hashID= 467; *bec= 0; *layer=1; *phimod= 2; *etamod= -1; }
  else if (geographicalID=="L0_B01_S2_A7_M0")    { *hashID= 468; *bec= 0; *layer=1; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="L0_B01_S2_A7_M1A")   { *hashID= 469; *bec= 0; *layer=1; *phimod= 2; *etamod=  1; }
  else if (geographicalID=="L0_B01_S2_A7_M2A")   { *hashID= 470; *bec= 0; *layer=1; *phimod= 2; *etamod=  2; }
  else if (geographicalID=="L0_B01_S2_A7_M3A")   { *hashID= 471; *bec= 0; *layer=1; *phimod= 2; *etamod=  3; }
  else if (geographicalID=="L0_B01_S2_A7_M4A")   { *hashID= 472; *bec= 0; *layer=1; *phimod= 2; *etamod=  4; }
  else if (geographicalID=="L0_B01_S2_A7_M5A")   { *hashID= 473; *bec= 0; *layer=1; *phimod= 2; *etamod=  5; }
  else if (geographicalID=="L0_B01_S2_A7_M6A")   { *hashID= 474; *bec= 0; *layer=1; *phimod= 2; *etamod=  6; }
  else if (geographicalID=="L0_B02_S1_C7_M6C")   { *hashID= 475; *bec= 0; *layer=1; *phimod= 3; *etamod= -6; }
  else if (geographicalID=="L0_B02_S1_C7_M5C")   { *hashID= 476; *bec= 0; *layer=1; *phimod= 3; *etamod= -5; }
  else if (geographicalID=="L0_B02_S1_C7_M4C")   { *hashID= 477; *bec= 0; *layer=1; *phimod= 3; *etamod= -4; }
  else if (geographicalID=="L0_B02_S1_C7_M3C")   { *hashID= 478; *bec= 0; *layer=1; *phimod= 3; *etamod= -3; }
  else if (geographicalID=="L0_B02_S1_C7_M2C")   { *hashID= 479; *bec= 0; *layer=1; *phimod= 3; *etamod= -2; }
  else if (geographicalID=="L0_B02_S1_C7_M1C")   { *hashID= 480; *bec= 0; *layer=1; *phimod= 3; *etamod= -1; }
  else if (geographicalID=="L0_B02_S1_C7_M0")    { *hashID= 481; *bec= 0; *layer=1; *phimod= 3; *etamod=  0; }
  else if (geographicalID=="L0_B02_S1_A6_M1A")   { *hashID= 482; *bec= 0; *layer=1; *phimod= 3; *etamod=  1; }
  else if (geographicalID=="L0_B02_S1_A6_M2A")   { *hashID= 483; *bec= 0; *layer=1; *phimod= 3; *etamod=  2; }
  else if (geographicalID=="L0_B02_S1_A6_M3A")   { *hashID= 484; *bec= 0; *layer=1; *phimod= 3; *etamod=  3; }
  else if (geographicalID=="L0_B02_S1_A6_M4A")   { *hashID= 485; *bec= 0; *layer=1; *phimod= 3; *etamod=  4; }
  else if (geographicalID=="L0_B02_S1_A6_M5A")   { *hashID= 486; *bec= 0; *layer=1; *phimod= 3; *etamod=  5; }
  else if (geographicalID=="L0_B02_S1_A6_M6A")   { *hashID= 487; *bec= 0; *layer=1; *phimod= 3; *etamod=  6; }
  else if (geographicalID=="L0_B02_S2_C6_M6C")   { *hashID= 488; *bec= 0; *layer=1; *phimod= 4; *etamod= -6; }
  else if (geographicalID=="L0_B02_S2_C6_M5C")   { *hashID= 489; *bec= 0; *layer=1; *phimod= 4; *etamod= -5; }
  else if (geographicalID=="L0_B02_S2_C6_M4C")   { *hashID= 490; *bec= 0; *layer=1; *phimod= 4; *etamod= -4; }
  else if (geographicalID=="L0_B02_S2_C6_M3C")   { *hashID= 491; *bec= 0; *layer=1; *phimod= 4; *etamod= -3; }
  else if (geographicalID=="L0_B02_S2_C6_M2C")   { *hashID= 492; *bec= 0; *layer=1; *phimod= 4; *etamod= -2; }
  else if (geographicalID=="L0_B02_S2_C6_M1C")   { *hashID= 493; *bec= 0; *layer=1; *phimod= 4; *etamod= -1; }
  else if (geographicalID=="L0_B02_S2_A7_M0")    { *hashID= 494; *bec= 0; *layer=1; *phimod= 4; *etamod=  0; }
  else if (geographicalID=="L0_B02_S2_A7_M1A")   { *hashID= 495; *bec= 0; *layer=1; *phimod= 4; *etamod=  1; }
  else if (geographicalID=="L0_B02_S2_A7_M2A")   { *hashID= 496; *bec= 0; *layer=1; *phimod= 4; *etamod=  2; }
  else if (geographicalID=="L0_B02_S2_A7_M3A")   { *hashID= 497; *bec= 0; *layer=1; *phimod= 4; *etamod=  3; }
  else if (geographicalID=="L0_B02_S2_A7_M4A")   { *hashID= 498; *bec= 0; *layer=1; *phimod= 4; *etamod=  4; }
  else if (geographicalID=="L0_B02_S2_A7_M5A")   { *hashID= 499; *bec= 0; *layer=1; *phimod= 4; *etamod=  5; }
  else if (geographicalID=="L0_B02_S2_A7_M6A")   { *hashID= 500; *bec= 0; *layer=1; *phimod= 4; *etamod=  6; }
  else if (geographicalID=="L0_B03_S1_C7_M6C")   { *hashID= 501; *bec= 0; *layer=1; *phimod= 5; *etamod= -6; }
  else if (geographicalID=="L0_B03_S1_C7_M5C")   { *hashID= 502; *bec= 0; *layer=1; *phimod= 5; *etamod= -5; }
  else if (geographicalID=="L0_B03_S1_C7_M4C")   { *hashID= 503; *bec= 0; *layer=1; *phimod= 5; *etamod= -4; }
  else if (geographicalID=="L0_B03_S1_C7_M3C")   { *hashID= 504; *bec= 0; *layer=1; *phimod= 5; *etamod= -3; }
  else if (geographicalID=="L0_B03_S1_C7_M2C")   { *hashID= 505; *bec= 0; *layer=1; *phimod= 5; *etamod= -2; }
  else if (geographicalID=="L0_B03_S1_C7_M1C")   { *hashID= 506; *bec= 0; *layer=1; *phimod= 5; *etamod= -1; }
  else if (geographicalID=="L0_B03_S1_C7_M0")    { *hashID= 507; *bec= 0; *layer=1; *phimod= 5; *etamod=  0; }
  else if (geographicalID=="L0_B03_S1_A6_M1A")   { *hashID= 508; *bec= 0; *layer=1; *phimod= 5; *etamod=  1; }
  else if (geographicalID=="L0_B03_S1_A6_M2A")   { *hashID= 509; *bec= 0; *layer=1; *phimod= 5; *etamod=  2; }
  else if (geographicalID=="L0_B03_S1_A6_M3A")   { *hashID= 510; *bec= 0; *layer=1; *phimod= 5; *etamod=  3; }
  else if (geographicalID=="L0_B03_S1_A6_M4A")   { *hashID= 511; *bec= 0; *layer=1; *phimod= 5; *etamod=  4; }
  else if (geographicalID=="L0_B03_S1_A6_M5A")   { *hashID= 512; *bec= 0; *layer=1; *phimod= 5; *etamod=  5; }
  else if (geographicalID=="L0_B03_S1_A6_M6A")   { *hashID= 513; *bec= 0; *layer=1; *phimod= 5; *etamod=  6; }
  else if (geographicalID=="L0_B03_S2_C6_M6C")   { *hashID= 514; *bec= 0; *layer=1; *phimod= 6; *etamod= -6; }
  else if (geographicalID=="L0_B03_S2_C6_M5C")   { *hashID= 515; *bec= 0; *layer=1; *phimod= 6; *etamod= -5; }
  else if (geographicalID=="L0_B03_S2_C6_M4C")   { *hashID= 516; *bec= 0; *layer=1; *phimod= 6; *etamod= -4; }
  else if (geographicalID=="L0_B03_S2_C6_M3C")   { *hashID= 517; *bec= 0; *layer=1; *phimod= 6; *etamod= -3; }
  else if (geographicalID=="L0_B03_S2_C6_M2C")   { *hashID= 518; *bec= 0; *layer=1; *phimod= 6; *etamod= -2; }
  else if (geographicalID=="L0_B03_S2_C6_M1C")   { *hashID= 519; *bec= 0; *layer=1; *phimod= 6; *etamod= -1; }
  else if (geographicalID=="L0_B03_S2_A7_M0")    { *hashID= 520; *bec= 0; *layer=1; *phimod= 6; *etamod=  0; }
  else if (geographicalID=="L0_B03_S2_A7_M1A")   { *hashID= 521; *bec= 0; *layer=1; *phimod= 6; *etamod=  1; }
  else if (geographicalID=="L0_B03_S2_A7_M2A")   { *hashID= 522; *bec= 0; *layer=1; *phimod= 6; *etamod=  2; }
  else if (geographicalID=="L0_B03_S2_A7_M3A")   { *hashID= 523; *bec= 0; *layer=1; *phimod= 6; *etamod=  3; }
  else if (geographicalID=="L0_B03_S2_A7_M4A")   { *hashID= 524; *bec= 0; *layer=1; *phimod= 6; *etamod=  4; }
  else if (geographicalID=="L0_B03_S2_A7_M5A")   { *hashID= 525; *bec= 0; *layer=1; *phimod= 6; *etamod=  5; }
  else if (geographicalID=="L0_B03_S2_A7_M6A")   { *hashID= 526; *bec= 0; *layer=1; *phimod= 6; *etamod=  6; }
  else if (geographicalID=="L0_B04_S1_C7_M6C")   { *hashID= 527; *bec= 0; *layer=1; *phimod= 7; *etamod= -6; }
  else if (geographicalID=="L0_B04_S1_C7_M5C")   { *hashID= 528; *bec= 0; *layer=1; *phimod= 7; *etamod= -5; }
  else if (geographicalID=="L0_B04_S1_C7_M4C")   { *hashID= 529; *bec= 0; *layer=1; *phimod= 7; *etamod= -4; }
  else if (geographicalID=="L0_B04_S1_C7_M3C")   { *hashID= 530; *bec= 0; *layer=1; *phimod= 7; *etamod= -3; }
  else if (geographicalID=="L0_B04_S1_C7_M2C")   { *hashID= 531; *bec= 0; *layer=1; *phimod= 7; *etamod= -2; }
  else if (geographicalID=="L0_B04_S1_C7_M1C")   { *hashID= 532; *bec= 0; *layer=1; *phimod= 7; *etamod= -1; }
  else if (geographicalID=="L0_B04_S1_C7_M0")    { *hashID= 533; *bec= 0; *layer=1; *phimod= 7; *etamod=  0; }
  else if (geographicalID=="L0_B04_S1_A6_M1A")   { *hashID= 534; *bec= 0; *layer=1; *phimod= 7; *etamod=  1; }
  else if (geographicalID=="L0_B04_S1_A6_M2A")   { *hashID= 535; *bec= 0; *layer=1; *phimod= 7; *etamod=  2; }
  else if (geographicalID=="L0_B04_S1_A6_M3A")   { *hashID= 536; *bec= 0; *layer=1; *phimod= 7; *etamod=  3; }
  else if (geographicalID=="L0_B04_S1_A6_M4A")   { *hashID= 537; *bec= 0; *layer=1; *phimod= 7; *etamod=  4; }
  else if (geographicalID=="L0_B04_S1_A6_M5A")   { *hashID= 538; *bec= 0; *layer=1; *phimod= 7; *etamod=  5; }
  else if (geographicalID=="L0_B04_S1_A6_M6A")   { *hashID= 539; *bec= 0; *layer=1; *phimod= 7; *etamod=  6; }
  else if (geographicalID=="L0_B04_S2_C6_M6C")   { *hashID= 540; *bec= 0; *layer=1; *phimod= 8; *etamod= -6; }
  else if (geographicalID=="L0_B04_S2_C6_M5C")   { *hashID= 541; *bec= 0; *layer=1; *phimod= 8; *etamod= -5; }
  else if (geographicalID=="L0_B04_S2_C6_M4C")   { *hashID= 542; *bec= 0; *layer=1; *phimod= 8; *etamod= -4; }
  else if (geographicalID=="L0_B04_S2_C6_M3C")   { *hashID= 543; *bec= 0; *layer=1; *phimod= 8; *etamod= -3; }
  else if (geographicalID=="L0_B04_S2_C6_M2C")   { *hashID= 544; *bec= 0; *layer=1; *phimod= 8; *etamod= -2; }
  else if (geographicalID=="L0_B04_S2_C6_M1C")   { *hashID= 545; *bec= 0; *layer=1; *phimod= 8; *etamod= -1; }
  else if (geographicalID=="L0_B04_S2_A7_M0")    { *hashID= 546; *bec= 0; *layer=1; *phimod= 8; *etamod=  0; }
  else if (geographicalID=="L0_B04_S2_A7_M1A")   { *hashID= 547; *bec= 0; *layer=1; *phimod= 8; *etamod=  1; }
  else if (geographicalID=="L0_B04_S2_A7_M2A")   { *hashID= 548; *bec= 0; *layer=1; *phimod= 8; *etamod=  2; }
  else if (geographicalID=="L0_B04_S2_A7_M3A")   { *hashID= 549; *bec= 0; *layer=1; *phimod= 8; *etamod=  3; }
  else if (geographicalID=="L0_B04_S2_A7_M4A")   { *hashID= 550; *bec= 0; *layer=1; *phimod= 8; *etamod=  4; }
  else if (geographicalID=="L0_B04_S2_A7_M5A")   { *hashID= 551; *bec= 0; *layer=1; *phimod= 8; *etamod=  5; }
  else if (geographicalID=="L0_B04_S2_A7_M6A")   { *hashID= 552; *bec= 0; *layer=1; *phimod= 8; *etamod=  6; }
  else if (geographicalID=="L0_B05_S1_C7_M6C")   { *hashID= 553; *bec= 0; *layer=1; *phimod= 9; *etamod= -6; }
  else if (geographicalID=="L0_B05_S1_C7_M5C")   { *hashID= 554; *bec= 0; *layer=1; *phimod= 9; *etamod= -5; }
  else if (geographicalID=="L0_B05_S1_C7_M4C")   { *hashID= 555; *bec= 0; *layer=1; *phimod= 9; *etamod= -4; }
  else if (geographicalID=="L0_B05_S1_C7_M3C")   { *hashID= 556; *bec= 0; *layer=1; *phimod= 9; *etamod= -3; }
  else if (geographicalID=="L0_B05_S1_C7_M2C")   { *hashID= 557; *bec= 0; *layer=1; *phimod= 9; *etamod= -2; }
  else if (geographicalID=="L0_B05_S1_C7_M1C")   { *hashID= 558; *bec= 0; *layer=1; *phimod= 9; *etamod= -1; }
  else if (geographicalID=="L0_B05_S1_C7_M0")    { *hashID= 559; *bec= 0; *layer=1; *phimod= 9; *etamod=  0; }
  else if (geographicalID=="L0_B05_S1_A6_M1A")   { *hashID= 560; *bec= 0; *layer=1; *phimod= 9; *etamod=  1; }
  else if (geographicalID=="L0_B05_S1_A6_M2A")   { *hashID= 561; *bec= 0; *layer=1; *phimod= 9; *etamod=  2; }
  else if (geographicalID=="L0_B05_S1_A6_M3A")   { *hashID= 562; *bec= 0; *layer=1; *phimod= 9; *etamod=  3; }
  else if (geographicalID=="L0_B05_S1_A6_M4A")   { *hashID= 563; *bec= 0; *layer=1; *phimod= 9; *etamod=  4; }
  else if (geographicalID=="L0_B05_S1_A6_M5A")   { *hashID= 564; *bec= 0; *layer=1; *phimod= 9; *etamod=  5; }
  else if (geographicalID=="L0_B05_S1_A6_M6A")   { *hashID= 565; *bec= 0; *layer=1; *phimod= 9; *etamod=  6; }
  else if (geographicalID=="L0_B05_S2_C6_M6C")   { *hashID= 566; *bec= 0; *layer=1; *phimod=10; *etamod= -6; }
  else if (geographicalID=="L0_B05_S2_C6_M5C")   { *hashID= 567; *bec= 0; *layer=1; *phimod=10; *etamod= -5; }
  else if (geographicalID=="L0_B05_S2_C6_M4C")   { *hashID= 568; *bec= 0; *layer=1; *phimod=10; *etamod= -4; }
  else if (geographicalID=="L0_B05_S2_C6_M3C")   { *hashID= 569; *bec= 0; *layer=1; *phimod=10; *etamod= -3; }
  else if (geographicalID=="L0_B05_S2_C6_M2C")   { *hashID= 570; *bec= 0; *layer=1; *phimod=10; *etamod= -2; }
  else if (geographicalID=="L0_B05_S2_C6_M1C")   { *hashID= 571; *bec= 0; *layer=1; *phimod=10; *etamod= -1; }
  else if (geographicalID=="L0_B05_S2_A7_M0")    { *hashID= 572; *bec= 0; *layer=1; *phimod=10; *etamod=  0; }
  else if (geographicalID=="L0_B05_S2_A7_M1A")   { *hashID= 573; *bec= 0; *layer=1; *phimod=10; *etamod=  1; }
  else if (geographicalID=="L0_B05_S2_A7_M2A")   { *hashID= 574; *bec= 0; *layer=1; *phimod=10; *etamod=  2; }
  else if (geographicalID=="L0_B05_S2_A7_M3A")   { *hashID= 575; *bec= 0; *layer=1; *phimod=10; *etamod=  3; }
  else if (geographicalID=="L0_B05_S2_A7_M4A")   { *hashID= 576; *bec= 0; *layer=1; *phimod=10; *etamod=  4; }
  else if (geographicalID=="L0_B05_S2_A7_M5A")   { *hashID= 577; *bec= 0; *layer=1; *phimod=10; *etamod=  5; }
  else if (geographicalID=="L0_B05_S2_A7_M6A")   { *hashID= 578; *bec= 0; *layer=1; *phimod=10; *etamod=  6; }
  else if (geographicalID=="L0_B06_S1_C7_M6C")   { *hashID= 579; *bec= 0; *layer=1; *phimod=11; *etamod= -6; }
  else if (geographicalID=="L0_B06_S1_C7_M5C")   { *hashID= 580; *bec= 0; *layer=1; *phimod=11; *etamod= -5; }
  else if (geographicalID=="L0_B06_S1_C7_M4C")   { *hashID= 581; *bec= 0; *layer=1; *phimod=11; *etamod= -4; }
  else if (geographicalID=="L0_B06_S1_C7_M3C")   { *hashID= 582; *bec= 0; *layer=1; *phimod=11; *etamod= -3; }
  else if (geographicalID=="L0_B06_S1_C7_M2C")   { *hashID= 583; *bec= 0; *layer=1; *phimod=11; *etamod= -2; }
  else if (geographicalID=="L0_B06_S1_C7_M1C")   { *hashID= 584; *bec= 0; *layer=1; *phimod=11; *etamod= -1; }
  else if (geographicalID=="L0_B06_S1_C7_M0")    { *hashID= 585; *bec= 0; *layer=1; *phimod=11; *etamod=  0; }
  else if (geographicalID=="L0_B06_S1_A6_M1A")   { *hashID= 586; *bec= 0; *layer=1; *phimod=11; *etamod=  1; }
  else if (geographicalID=="L0_B06_S1_A6_M2A")   { *hashID= 587; *bec= 0; *layer=1; *phimod=11; *etamod=  2; }
  else if (geographicalID=="L0_B06_S1_A6_M3A")   { *hashID= 588; *bec= 0; *layer=1; *phimod=11; *etamod=  3; }
  else if (geographicalID=="L0_B06_S1_A6_M4A")   { *hashID= 589; *bec= 0; *layer=1; *phimod=11; *etamod=  4; }
  else if (geographicalID=="L0_B06_S1_A6_M5A")   { *hashID= 590; *bec= 0; *layer=1; *phimod=11; *etamod=  5; }
  else if (geographicalID=="L0_B06_S1_A6_M6A")   { *hashID= 591; *bec= 0; *layer=1; *phimod=11; *etamod=  6; }
  else if (geographicalID=="L0_B06_S2_C6_M6C")   { *hashID= 592; *bec= 0; *layer=1; *phimod=12; *etamod= -6; }
  else if (geographicalID=="L0_B06_S2_C6_M5C")   { *hashID= 593; *bec= 0; *layer=1; *phimod=12; *etamod= -5; }
  else if (geographicalID=="L0_B06_S2_C6_M4C")   { *hashID= 594; *bec= 0; *layer=1; *phimod=12; *etamod= -4; }
  else if (geographicalID=="L0_B06_S2_C6_M3C")   { *hashID= 595; *bec= 0; *layer=1; *phimod=12; *etamod= -3; }
  else if (geographicalID=="L0_B06_S2_C6_M2C")   { *hashID= 596; *bec= 0; *layer=1; *phimod=12; *etamod= -2; }
  else if (geographicalID=="L0_B06_S2_C6_M1C")   { *hashID= 597; *bec= 0; *layer=1; *phimod=12; *etamod= -1; }
  else if (geographicalID=="L0_B06_S2_A7_M0")    { *hashID= 598; *bec= 0; *layer=1; *phimod=12; *etamod=  0; }
  else if (geographicalID=="L0_B06_S2_A7_M1A")   { *hashID= 599; *bec= 0; *layer=1; *phimod=12; *etamod=  1; }
  else if (geographicalID=="L0_B06_S2_A7_M2A")   { *hashID= 600; *bec= 0; *layer=1; *phimod=12; *etamod=  2; }
  else if (geographicalID=="L0_B06_S2_A7_M3A")   { *hashID= 601; *bec= 0; *layer=1; *phimod=12; *etamod=  3; }
  else if (geographicalID=="L0_B06_S2_A7_M4A")   { *hashID= 602; *bec= 0; *layer=1; *phimod=12; *etamod=  4; }
  else if (geographicalID=="L0_B06_S2_A7_M5A")   { *hashID= 603; *bec= 0; *layer=1; *phimod=12; *etamod=  5; }
  else if (geographicalID=="L0_B06_S2_A7_M6A")   { *hashID= 604; *bec= 0; *layer=1; *phimod=12; *etamod=  6; }
  else if (geographicalID=="L0_B07_S1_C7_M6C")   { *hashID= 605; *bec= 0; *layer=1; *phimod=13; *etamod= -6; }
  else if (geographicalID=="L0_B07_S1_C7_M5C")   { *hashID= 606; *bec= 0; *layer=1; *phimod=13; *etamod= -5; }
  else if (geographicalID=="L0_B07_S1_C7_M4C")   { *hashID= 607; *bec= 0; *layer=1; *phimod=13; *etamod= -4; }
  else if (geographicalID=="L0_B07_S1_C7_M3C")   { *hashID= 608; *bec= 0; *layer=1; *phimod=13; *etamod= -3; }
  else if (geographicalID=="L0_B07_S1_C7_M2C")   { *hashID= 609; *bec= 0; *layer=1; *phimod=13; *etamod= -2; }
  else if (geographicalID=="L0_B07_S1_C7_M1C")   { *hashID= 610; *bec= 0; *layer=1; *phimod=13; *etamod= -1; }
  else if (geographicalID=="L0_B07_S1_C7_M0")    { *hashID= 611; *bec= 0; *layer=1; *phimod=13; *etamod=  0; }
  else if (geographicalID=="L0_B07_S1_A6_M1A")   { *hashID= 612; *bec= 0; *layer=1; *phimod=13; *etamod=  1; }
  else if (geographicalID=="L0_B07_S1_A6_M2A")   { *hashID= 613; *bec= 0; *layer=1; *phimod=13; *etamod=  2; }
  else if (geographicalID=="L0_B07_S1_A6_M3A")   { *hashID= 614; *bec= 0; *layer=1; *phimod=13; *etamod=  3; }
  else if (geographicalID=="L0_B07_S1_A6_M4A")   { *hashID= 615; *bec= 0; *layer=1; *phimod=13; *etamod=  4; }
  else if (geographicalID=="L0_B07_S1_A6_M5A")   { *hashID= 616; *bec= 0; *layer=1; *phimod=13; *etamod=  5; }
  else if (geographicalID=="L0_B07_S1_A6_M6A")   { *hashID= 617; *bec= 0; *layer=1; *phimod=13; *etamod=  6; }
  else if (geographicalID=="L0_B07_S2_C6_M6C")   { *hashID= 618; *bec= 0; *layer=1; *phimod=14; *etamod= -6; }
  else if (geographicalID=="L0_B07_S2_C6_M5C")   { *hashID= 619; *bec= 0; *layer=1; *phimod=14; *etamod= -5; }
  else if (geographicalID=="L0_B07_S2_C6_M4C")   { *hashID= 620; *bec= 0; *layer=1; *phimod=14; *etamod= -4; }
  else if (geographicalID=="L0_B07_S2_C6_M3C")   { *hashID= 621; *bec= 0; *layer=1; *phimod=14; *etamod= -3; }
  else if (geographicalID=="L0_B07_S2_C6_M2C")   { *hashID= 622; *bec= 0; *layer=1; *phimod=14; *etamod= -2; }
  else if (geographicalID=="L0_B07_S2_C6_M1C")   { *hashID= 623; *bec= 0; *layer=1; *phimod=14; *etamod= -1; }
  else if (geographicalID=="L0_B07_S2_A7_M0")    { *hashID= 624; *bec= 0; *layer=1; *phimod=14; *etamod=  0; }
  else if (geographicalID=="L0_B07_S2_A7_M1A")   { *hashID= 625; *bec= 0; *layer=1; *phimod=14; *etamod=  1; }
  else if (geographicalID=="L0_B07_S2_A7_M2A")   { *hashID= 626; *bec= 0; *layer=1; *phimod=14; *etamod=  2; }
  else if (geographicalID=="L0_B07_S2_A7_M3A")   { *hashID= 627; *bec= 0; *layer=1; *phimod=14; *etamod=  3; }
  else if (geographicalID=="L0_B07_S2_A7_M4A")   { *hashID= 628; *bec= 0; *layer=1; *phimod=14; *etamod=  4; }
  else if (geographicalID=="L0_B07_S2_A7_M5A")   { *hashID= 629; *bec= 0; *layer=1; *phimod=14; *etamod=  5; }
  else if (geographicalID=="L0_B07_S2_A7_M6A")   { *hashID= 630; *bec= 0; *layer=1; *phimod=14; *etamod=  6; }
  else if (geographicalID=="L0_B08_S1_C7_M6C")   { *hashID= 631; *bec= 0; *layer=1; *phimod=15; *etamod= -6; }
  else if (geographicalID=="L0_B08_S1_C7_M5C")   { *hashID= 632; *bec= 0; *layer=1; *phimod=15; *etamod= -5; }
  else if (geographicalID=="L0_B08_S1_C7_M4C")   { *hashID= 633; *bec= 0; *layer=1; *phimod=15; *etamod= -4; }
  else if (geographicalID=="L0_B08_S1_C7_M3C")   { *hashID= 634; *bec= 0; *layer=1; *phimod=15; *etamod= -3; }
  else if (geographicalID=="L0_B08_S1_C7_M2C")   { *hashID= 635; *bec= 0; *layer=1; *phimod=15; *etamod= -2; }
  else if (geographicalID=="L0_B08_S1_C7_M1C")   { *hashID= 636; *bec= 0; *layer=1; *phimod=15; *etamod= -1; }
  else if (geographicalID=="L0_B08_S1_C7_M0")    { *hashID= 637; *bec= 0; *layer=1; *phimod=15; *etamod=  0; }
  else if (geographicalID=="L0_B08_S1_A6_M1A")   { *hashID= 638; *bec= 0; *layer=1; *phimod=15; *etamod=  1; }
  else if (geographicalID=="L0_B08_S1_A6_M2A")   { *hashID= 639; *bec= 0; *layer=1; *phimod=15; *etamod=  2; }
  else if (geographicalID=="L0_B08_S1_A6_M3A")   { *hashID= 640; *bec= 0; *layer=1; *phimod=15; *etamod=  3; }
  else if (geographicalID=="L0_B08_S1_A6_M4A")   { *hashID= 641; *bec= 0; *layer=1; *phimod=15; *etamod=  4; }
  else if (geographicalID=="L0_B08_S1_A6_M5A")   { *hashID= 642; *bec= 0; *layer=1; *phimod=15; *etamod=  5; }
  else if (geographicalID=="L0_B08_S1_A6_M6A")   { *hashID= 643; *bec= 0; *layer=1; *phimod=15; *etamod=  6; }
  else if (geographicalID=="L0_B08_S2_C6_M6C")   { *hashID= 644; *bec= 0; *layer=1; *phimod=16; *etamod= -6; }
  else if (geographicalID=="L0_B08_S2_C6_M5C")   { *hashID= 645; *bec= 0; *layer=1; *phimod=16; *etamod= -5; }
  else if (geographicalID=="L0_B08_S2_C6_M4C")   { *hashID= 646; *bec= 0; *layer=1; *phimod=16; *etamod= -4; }
  else if (geographicalID=="L0_B08_S2_C6_M3C")   { *hashID= 647; *bec= 0; *layer=1; *phimod=16; *etamod= -3; }
  else if (geographicalID=="L0_B08_S2_C6_M2C")   { *hashID= 648; *bec= 0; *layer=1; *phimod=16; *etamod= -2; }
  else if (geographicalID=="L0_B08_S2_C6_M1C")   { *hashID= 649; *bec= 0; *layer=1; *phimod=16; *etamod= -1; }
  else if (geographicalID=="L0_B08_S2_A7_M0")    { *hashID= 650; *bec= 0; *layer=1; *phimod=16; *etamod=  0; }
  else if (geographicalID=="L0_B08_S2_A7_M1A")   { *hashID= 651; *bec= 0; *layer=1; *phimod=16; *etamod=  1; }
  else if (geographicalID=="L0_B08_S2_A7_M2A")   { *hashID= 652; *bec= 0; *layer=1; *phimod=16; *etamod=  2; }
  else if (geographicalID=="L0_B08_S2_A7_M3A")   { *hashID= 653; *bec= 0; *layer=1; *phimod=16; *etamod=  3; }
  else if (geographicalID=="L0_B08_S2_A7_M4A")   { *hashID= 654; *bec= 0; *layer=1; *phimod=16; *etamod=  4; }
  else if (geographicalID=="L0_B08_S2_A7_M5A")   { *hashID= 655; *bec= 0; *layer=1; *phimod=16; *etamod=  5; }
  else if (geographicalID=="L0_B08_S2_A7_M6A")   { *hashID= 656; *bec= 0; *layer=1; *phimod=16; *etamod=  6; }
  else if (geographicalID=="L0_B09_S1_C7_M6C")   { *hashID= 657; *bec= 0; *layer=1; *phimod=17; *etamod= -6; }
  else if (geographicalID=="L0_B09_S1_C7_M5C")   { *hashID= 658; *bec= 0; *layer=1; *phimod=17; *etamod= -5; }
  else if (geographicalID=="L0_B09_S1_C7_M4C")   { *hashID= 659; *bec= 0; *layer=1; *phimod=17; *etamod= -4; }
  else if (geographicalID=="L0_B09_S1_C7_M3C")   { *hashID= 660; *bec= 0; *layer=1; *phimod=17; *etamod= -3; }
  else if (geographicalID=="L0_B09_S1_C7_M2C")   { *hashID= 661; *bec= 0; *layer=1; *phimod=17; *etamod= -2; }
  else if (geographicalID=="L0_B09_S1_C7_M1C")   { *hashID= 662; *bec= 0; *layer=1; *phimod=17; *etamod= -1; }
  else if (geographicalID=="L0_B09_S1_C7_M0")    { *hashID= 663; *bec= 0; *layer=1; *phimod=17; *etamod=  0; }
  else if (geographicalID=="L0_B09_S1_A6_M1A")   { *hashID= 664; *bec= 0; *layer=1; *phimod=17; *etamod=  1; }
  else if (geographicalID=="L0_B09_S1_A6_M2A")   { *hashID= 665; *bec= 0; *layer=1; *phimod=17; *etamod=  2; }
  else if (geographicalID=="L0_B09_S1_A6_M3A")   { *hashID= 666; *bec= 0; *layer=1; *phimod=17; *etamod=  3; }
  else if (geographicalID=="L0_B09_S1_A6_M4A")   { *hashID= 667; *bec= 0; *layer=1; *phimod=17; *etamod=  4; }
  else if (geographicalID=="L0_B09_S1_A6_M5A")   { *hashID= 668; *bec= 0; *layer=1; *phimod=17; *etamod=  5; }
  else if (geographicalID=="L0_B09_S1_A6_M6A")   { *hashID= 669; *bec= 0; *layer=1; *phimod=17; *etamod=  6; }
  else if (geographicalID=="L0_B09_S2_C6_M6C")   { *hashID= 670; *bec= 0; *layer=1; *phimod=18; *etamod= -6; }
  else if (geographicalID=="L0_B09_S2_C6_M5C")   { *hashID= 671; *bec= 0; *layer=1; *phimod=18; *etamod= -5; }
  else if (geographicalID=="L0_B09_S2_C6_M4C")   { *hashID= 672; *bec= 0; *layer=1; *phimod=18; *etamod= -4; }
  else if (geographicalID=="L0_B09_S2_C6_M3C")   { *hashID= 673; *bec= 0; *layer=1; *phimod=18; *etamod= -3; }
  else if (geographicalID=="L0_B09_S2_C6_M2C")   { *hashID= 674; *bec= 0; *layer=1; *phimod=18; *etamod= -2; }
  else if (geographicalID=="L0_B09_S2_C6_M1C")   { *hashID= 675; *bec= 0; *layer=1; *phimod=18; *etamod= -1; }
  else if (geographicalID=="L0_B09_S2_A7_M0")    { *hashID= 676; *bec= 0; *layer=1; *phimod=18; *etamod=  0; }
  else if (geographicalID=="L0_B09_S2_A7_M1A")   { *hashID= 677; *bec= 0; *layer=1; *phimod=18; *etamod=  1; }
  else if (geographicalID=="L0_B09_S2_A7_M2A")   { *hashID= 678; *bec= 0; *layer=1; *phimod=18; *etamod=  2; }
  else if (geographicalID=="L0_B09_S2_A7_M3A")   { *hashID= 679; *bec= 0; *layer=1; *phimod=18; *etamod=  3; }
  else if (geographicalID=="L0_B09_S2_A7_M4A")   { *hashID= 680; *bec= 0; *layer=1; *phimod=18; *etamod=  4; }
  else if (geographicalID=="L0_B09_S2_A7_M5A")   { *hashID= 681; *bec= 0; *layer=1; *phimod=18; *etamod=  5; }
  else if (geographicalID=="L0_B09_S2_A7_M6A")   { *hashID= 682; *bec= 0; *layer=1; *phimod=18; *etamod=  6; }
  else if (geographicalID=="L0_B10_S1_C7_M6C")   { *hashID= 683; *bec= 0; *layer=1; *phimod=19; *etamod= -6; }
  else if (geographicalID=="L0_B10_S1_C7_M5C")   { *hashID= 684; *bec= 0; *layer=1; *phimod=19; *etamod= -5; }
  else if (geographicalID=="L0_B10_S1_C7_M4C")   { *hashID= 685; *bec= 0; *layer=1; *phimod=19; *etamod= -4; }
  else if (geographicalID=="L0_B10_S1_C7_M3C")   { *hashID= 686; *bec= 0; *layer=1; *phimod=19; *etamod= -3; }
  else if (geographicalID=="L0_B10_S1_C7_M2C")   { *hashID= 687; *bec= 0; *layer=1; *phimod=19; *etamod= -2; }
  else if (geographicalID=="L0_B10_S1_C7_M1C")   { *hashID= 688; *bec= 0; *layer=1; *phimod=19; *etamod= -1; }
  else if (geographicalID=="L0_B10_S1_C7_M0")    { *hashID= 689; *bec= 0; *layer=1; *phimod=19; *etamod=  0; }
  else if (geographicalID=="L0_B10_S1_A6_M1A")   { *hashID= 690; *bec= 0; *layer=1; *phimod=19; *etamod=  1; }
  else if (geographicalID=="L0_B10_S1_A6_M2A")   { *hashID= 691; *bec= 0; *layer=1; *phimod=19; *etamod=  2; }
  else if (geographicalID=="L0_B10_S1_A6_M3A")   { *hashID= 692; *bec= 0; *layer=1; *phimod=19; *etamod=  3; }
  else if (geographicalID=="L0_B10_S1_A6_M4A")   { *hashID= 693; *bec= 0; *layer=1; *phimod=19; *etamod=  4; }
  else if (geographicalID=="L0_B10_S1_A6_M5A")   { *hashID= 694; *bec= 0; *layer=1; *phimod=19; *etamod=  5; }
  else if (geographicalID=="L0_B10_S1_A6_M6A")   { *hashID= 695; *bec= 0; *layer=1; *phimod=19; *etamod=  6; }
  else if (geographicalID=="L0_B10_S2_C6_M6C")   { *hashID= 696; *bec= 0; *layer=1; *phimod=20; *etamod= -6; }
  else if (geographicalID=="L0_B10_S2_C6_M5C")   { *hashID= 697; *bec= 0; *layer=1; *phimod=20; *etamod= -5; }
  else if (geographicalID=="L0_B10_S2_C6_M4C")   { *hashID= 698; *bec= 0; *layer=1; *phimod=20; *etamod= -4; }
  else if (geographicalID=="L0_B10_S2_C6_M3C")   { *hashID= 699; *bec= 0; *layer=1; *phimod=20; *etamod= -3; }
  else if (geographicalID=="L0_B10_S2_C6_M2C")   { *hashID= 700; *bec= 0; *layer=1; *phimod=20; *etamod= -2; }
  else if (geographicalID=="L0_B10_S2_C6_M1C")   { *hashID= 701; *bec= 0; *layer=1; *phimod=20; *etamod= -1; }
  else if (geographicalID=="L0_B10_S2_A7_M0")    { *hashID= 702; *bec= 0; *layer=1; *phimod=20; *etamod=  0; }
  else if (geographicalID=="L0_B10_S2_A7_M1A")   { *hashID= 703; *bec= 0; *layer=1; *phimod=20; *etamod=  1; }
  else if (geographicalID=="L0_B10_S2_A7_M2A")   { *hashID= 704; *bec= 0; *layer=1; *phimod=20; *etamod=  2; }
  else if (geographicalID=="L0_B10_S2_A7_M3A")   { *hashID= 705; *bec= 0; *layer=1; *phimod=20; *etamod=  3; }
  else if (geographicalID=="L0_B10_S2_A7_M4A")   { *hashID= 706; *bec= 0; *layer=1; *phimod=20; *etamod=  4; }
  else if (geographicalID=="L0_B10_S2_A7_M5A")   { *hashID= 707; *bec= 0; *layer=1; *phimod=20; *etamod=  5; }
  else if (geographicalID=="L0_B10_S2_A7_M6A")   { *hashID= 708; *bec= 0; *layer=1; *phimod=20; *etamod=  6; }
  else if (geographicalID=="L0_B11_S1_C7_M6C")   { *hashID= 709; *bec= 0; *layer=1; *phimod=21; *etamod= -6; }
  else if (geographicalID=="L0_B11_S1_C7_M5C")   { *hashID= 710; *bec= 0; *layer=1; *phimod=21; *etamod= -5; }
  else if (geographicalID=="L0_B11_S1_C7_M4C")   { *hashID= 711; *bec= 0; *layer=1; *phimod=21; *etamod= -4; }
  else if (geographicalID=="L0_B11_S1_C7_M3C")   { *hashID= 712; *bec= 0; *layer=1; *phimod=21; *etamod= -3; }
  else if (geographicalID=="L0_B11_S1_C7_M2C")   { *hashID= 713; *bec= 0; *layer=1; *phimod=21; *etamod= -2; }
  else if (geographicalID=="L0_B11_S1_C7_M1C")   { *hashID= 714; *bec= 0; *layer=1; *phimod=21; *etamod= -1; }
  else if (geographicalID=="L0_B11_S1_C7_M0")    { *hashID= 715; *bec= 0; *layer=1; *phimod=21; *etamod=  0; }
  else if (geographicalID=="L0_B11_S1_A6_M1A")   { *hashID= 716; *bec= 0; *layer=1; *phimod=21; *etamod=  1; }
  else if (geographicalID=="L0_B11_S1_A6_M2A")   { *hashID= 717; *bec= 0; *layer=1; *phimod=21; *etamod=  2; }
  else if (geographicalID=="L0_B11_S1_A6_M3A")   { *hashID= 718; *bec= 0; *layer=1; *phimod=21; *etamod=  3; }
  else if (geographicalID=="L0_B11_S1_A6_M4A")   { *hashID= 719; *bec= 0; *layer=1; *phimod=21; *etamod=  4; }
  else if (geographicalID=="L0_B11_S1_A6_M5A")   { *hashID= 720; *bec= 0; *layer=1; *phimod=21; *etamod=  5; }
  else if (geographicalID=="L0_B11_S1_A6_M6A")   { *hashID= 721; *bec= 0; *layer=1; *phimod=21; *etamod=  6; }
  else if (geographicalID=="L1_B01_S1_C7_M6C")   { *hashID= 722; *bec= 0; *layer=2; *phimod= 0; *etamod= -6; }
  else if (geographicalID=="L1_B01_S1_C7_M5C")   { *hashID= 723; *bec= 0; *layer=2; *phimod= 0; *etamod= -5; }
  else if (geographicalID=="L1_B01_S1_C7_M4C")   { *hashID= 724; *bec= 0; *layer=2; *phimod= 0; *etamod= -4; }
  else if (geographicalID=="L1_B01_S1_C7_M3C")   { *hashID= 725; *bec= 0; *layer=2; *phimod= 0; *etamod= -3; }
  else if (geographicalID=="L1_B01_S1_C7_M2C")   { *hashID= 726; *bec= 0; *layer=2; *phimod= 0; *etamod= -2; }
  else if (geographicalID=="L1_B01_S1_C7_M1C")   { *hashID= 727; *bec= 0; *layer=2; *phimod= 0; *etamod= -1; }
  else if (geographicalID=="L1_B01_S1_C7_M0")    { *hashID= 728; *bec= 0; *layer=2; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="L1_B01_S1_A6_M1A")   { *hashID= 729; *bec= 0; *layer=2; *phimod= 0; *etamod=  1; }
  else if (geographicalID=="L1_B01_S1_A6_M2A")   { *hashID= 730; *bec= 0; *layer=2; *phimod= 0; *etamod=  2; }
  else if (geographicalID=="L1_B01_S1_A6_M3A")   { *hashID= 731; *bec= 0; *layer=2; *phimod= 0; *etamod=  3; }
  else if (geographicalID=="L1_B01_S1_A6_M4A")   { *hashID= 732; *bec= 0; *layer=2; *phimod= 0; *etamod=  4; }
  else if (geographicalID=="L1_B01_S1_A6_M5A")   { *hashID= 733; *bec= 0; *layer=2; *phimod= 0; *etamod=  5; }
  else if (geographicalID=="L1_B01_S1_A6_M6A")   { *hashID= 734; *bec= 0; *layer=2; *phimod= 0; *etamod=  6; }
  else if (geographicalID=="L1_B01_S2_C6_M6C")   { *hashID= 735; *bec= 0; *layer=2; *phimod= 1; *etamod= -6; }
  else if (geographicalID=="L1_B01_S2_C6_M5C")   { *hashID= 736; *bec= 0; *layer=2; *phimod= 1; *etamod= -5; }
  else if (geographicalID=="L1_B01_S2_C6_M4C")   { *hashID= 737; *bec= 0; *layer=2; *phimod= 1; *etamod= -4; }
  else if (geographicalID=="L1_B01_S2_C6_M3C")   { *hashID= 738; *bec= 0; *layer=2; *phimod= 1; *etamod= -3; }
  else if (geographicalID=="L1_B01_S2_C6_M2C")   { *hashID= 739; *bec= 0; *layer=2; *phimod= 1; *etamod= -2; }
  else if (geographicalID=="L1_B01_S2_C6_M1C")   { *hashID= 740; *bec= 0; *layer=2; *phimod= 1; *etamod= -1; }
  else if (geographicalID=="L1_B01_S2_A7_M0")    { *hashID= 741; *bec= 0; *layer=2; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="L1_B01_S2_A7_M1A")   { *hashID= 742; *bec= 0; *layer=2; *phimod= 1; *etamod=  1; }
  else if (geographicalID=="L1_B01_S2_A7_M2A")   { *hashID= 743; *bec= 0; *layer=2; *phimod= 1; *etamod=  2; }
  else if (geographicalID=="L1_B01_S2_A7_M3A")   { *hashID= 744; *bec= 0; *layer=2; *phimod= 1; *etamod=  3; }
  else if (geographicalID=="L1_B01_S2_A7_M4A")   { *hashID= 745; *bec= 0; *layer=2; *phimod= 1; *etamod=  4; }
  else if (geographicalID=="L1_B01_S2_A7_M5A")   { *hashID= 746; *bec= 0; *layer=2; *phimod= 1; *etamod=  5; }
  else if (geographicalID=="L1_B01_S2_A7_M6A")   { *hashID= 747; *bec= 0; *layer=2; *phimod= 1; *etamod=  6; }
  else if (geographicalID=="L1_B02_S1_C7_M6C")   { *hashID= 748; *bec= 0; *layer=2; *phimod= 2; *etamod= -6; }
  else if (geographicalID=="L1_B02_S1_C7_M5C")   { *hashID= 749; *bec= 0; *layer=2; *phimod= 2; *etamod= -5; }
  else if (geographicalID=="L1_B02_S1_C7_M4C")   { *hashID= 750; *bec= 0; *layer=2; *phimod= 2; *etamod= -4; }
  else if (geographicalID=="L1_B02_S1_C7_M3C")   { *hashID= 751; *bec= 0; *layer=2; *phimod= 2; *etamod= -3; }
  else if (geographicalID=="L1_B02_S1_C7_M2C")   { *hashID= 752; *bec= 0; *layer=2; *phimod= 2; *etamod= -2; }
  else if (geographicalID=="L1_B02_S1_C7_M1C")   { *hashID= 753; *bec= 0; *layer=2; *phimod= 2; *etamod= -1; }
  else if (geographicalID=="L1_B02_S1_C7_M0")    { *hashID= 754; *bec= 0; *layer=2; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="L1_B02_S1_A6_M1A")   { *hashID= 755; *bec= 0; *layer=2; *phimod= 2; *etamod=  1; }
  else if (geographicalID=="L1_B02_S1_A6_M2A")   { *hashID= 756; *bec= 0; *layer=2; *phimod= 2; *etamod=  2; }
  else if (geographicalID=="L1_B02_S1_A6_M3A")   { *hashID= 757; *bec= 0; *layer=2; *phimod= 2; *etamod=  3; }
  else if (geographicalID=="L1_B02_S1_A6_M4A")   { *hashID= 758; *bec= 0; *layer=2; *phimod= 2; *etamod=  4; }
  else if (geographicalID=="L1_B02_S1_A6_M5A")   { *hashID= 759; *bec= 0; *layer=2; *phimod= 2; *etamod=  5; }
  else if (geographicalID=="L1_B02_S1_A6_M6A")   { *hashID= 760; *bec= 0; *layer=2; *phimod= 2; *etamod=  6; }
  else if (geographicalID=="L1_B02_S2_C6_M6C")   { *hashID= 761; *bec= 0; *layer=2; *phimod= 3; *etamod= -6; }
  else if (geographicalID=="L1_B02_S2_C6_M5C")   { *hashID= 762; *bec= 0; *layer=2; *phimod= 3; *etamod= -5; }
  else if (geographicalID=="L1_B02_S2_C6_M4C")   { *hashID= 763; *bec= 0; *layer=2; *phimod= 3; *etamod= -4; }
  else if (geographicalID=="L1_B02_S2_C6_M3C")   { *hashID= 764; *bec= 0; *layer=2; *phimod= 3; *etamod= -3; }
  else if (geographicalID=="L1_B02_S2_C6_M2C")   { *hashID= 765; *bec= 0; *layer=2; *phimod= 3; *etamod= -2; }
  else if (geographicalID=="L1_B02_S2_C6_M1C")   { *hashID= 766; *bec= 0; *layer=2; *phimod= 3; *etamod= -1; }
  else if (geographicalID=="L1_B02_S2_A7_M0")    { *hashID= 767; *bec= 0; *layer=2; *phimod= 3; *etamod=  0; }
  else if (geographicalID=="L1_B02_S2_A7_M1A")   { *hashID= 768; *bec= 0; *layer=2; *phimod= 3; *etamod=  1; }
  else if (geographicalID=="L1_B02_S2_A7_M2A")   { *hashID= 769; *bec= 0; *layer=2; *phimod= 3; *etamod=  2; }
  else if (geographicalID=="L1_B02_S2_A7_M3A")   { *hashID= 770; *bec= 0; *layer=2; *phimod= 3; *etamod=  3; }
  else if (geographicalID=="L1_B02_S2_A7_M4A")   { *hashID= 771; *bec= 0; *layer=2; *phimod= 3; *etamod=  4; }
  else if (geographicalID=="L1_B02_S2_A7_M5A")   { *hashID= 772; *bec= 0; *layer=2; *phimod= 3; *etamod=  5; }
  else if (geographicalID=="L1_B02_S2_A7_M6A")   { *hashID= 773; *bec= 0; *layer=2; *phimod= 3; *etamod=  6; }
  else if (geographicalID=="L1_B03_S1_C7_M6C")   { *hashID= 774; *bec= 0; *layer=2; *phimod= 4; *etamod= -6; }
  else if (geographicalID=="L1_B03_S1_C7_M5C")   { *hashID= 775; *bec= 0; *layer=2; *phimod= 4; *etamod= -5; }
  else if (geographicalID=="L1_B03_S1_C7_M4C")   { *hashID= 776; *bec= 0; *layer=2; *phimod= 4; *etamod= -4; }
  else if (geographicalID=="L1_B03_S1_C7_M3C")   { *hashID= 777; *bec= 0; *layer=2; *phimod= 4; *etamod= -3; }
  else if (geographicalID=="L1_B03_S1_C7_M2C")   { *hashID= 778; *bec= 0; *layer=2; *phimod= 4; *etamod= -2; }
  else if (geographicalID=="L1_B03_S1_C7_M1C")   { *hashID= 779; *bec= 0; *layer=2; *phimod= 4; *etamod= -1; }
  else if (geographicalID=="L1_B03_S1_C7_M0")    { *hashID= 780; *bec= 0; *layer=2; *phimod= 4; *etamod=  0; }
  else if (geographicalID=="L1_B03_S1_A6_M1A")   { *hashID= 781; *bec= 0; *layer=2; *phimod= 4; *etamod=  1; }
  else if (geographicalID=="L1_B03_S1_A6_M2A")   { *hashID= 782; *bec= 0; *layer=2; *phimod= 4; *etamod=  2; }
  else if (geographicalID=="L1_B03_S1_A6_M3A")   { *hashID= 783; *bec= 0; *layer=2; *phimod= 4; *etamod=  3; }
  else if (geographicalID=="L1_B03_S1_A6_M4A")   { *hashID= 784; *bec= 0; *layer=2; *phimod= 4; *etamod=  4; }
  else if (geographicalID=="L1_B03_S1_A6_M5A")   { *hashID= 785; *bec= 0; *layer=2; *phimod= 4; *etamod=  5; }
  else if (geographicalID=="L1_B03_S1_A6_M6A")   { *hashID= 786; *bec= 0; *layer=2; *phimod= 4; *etamod=  6; }
  else if (geographicalID=="L1_B03_S2_C6_M6C")   { *hashID= 787; *bec= 0; *layer=2; *phimod= 5; *etamod= -6; }
  else if (geographicalID=="L1_B03_S2_C6_M5C")   { *hashID= 788; *bec= 0; *layer=2; *phimod= 5; *etamod= -5; }
  else if (geographicalID=="L1_B03_S2_C6_M4C")   { *hashID= 789; *bec= 0; *layer=2; *phimod= 5; *etamod= -4; }
  else if (geographicalID=="L1_B03_S2_C6_M3C")   { *hashID= 790; *bec= 0; *layer=2; *phimod= 5; *etamod= -3; }
  else if (geographicalID=="L1_B03_S2_C6_M2C")   { *hashID= 791; *bec= 0; *layer=2; *phimod= 5; *etamod= -2; }
  else if (geographicalID=="L1_B03_S2_C6_M1C")   { *hashID= 792; *bec= 0; *layer=2; *phimod= 5; *etamod= -1; }
  else if (geographicalID=="L1_B03_S2_A7_M0")    { *hashID= 793; *bec= 0; *layer=2; *phimod= 5; *etamod=  0; }
  else if (geographicalID=="L1_B03_S2_A7_M1A")   { *hashID= 794; *bec= 0; *layer=2; *phimod= 5; *etamod=  1; }
  else if (geographicalID=="L1_B03_S2_A7_M2A")   { *hashID= 795; *bec= 0; *layer=2; *phimod= 5; *etamod=  2; }
  else if (geographicalID=="L1_B03_S2_A7_M3A")   { *hashID= 796; *bec= 0; *layer=2; *phimod= 5; *etamod=  3; }
  else if (geographicalID=="L1_B03_S2_A7_M4A")   { *hashID= 797; *bec= 0; *layer=2; *phimod= 5; *etamod=  4; }
  else if (geographicalID=="L1_B03_S2_A7_M5A")   { *hashID= 798; *bec= 0; *layer=2; *phimod= 5; *etamod=  5; }
  else if (geographicalID=="L1_B03_S2_A7_M6A")   { *hashID= 799; *bec= 0; *layer=2; *phimod= 5; *etamod=  6; }
  else if (geographicalID=="L1_B04_S1_C7_M6C")   { *hashID= 800; *bec= 0; *layer=2; *phimod= 6; *etamod= -6; }
  else if (geographicalID=="L1_B04_S1_C7_M5C")   { *hashID= 801; *bec= 0; *layer=2; *phimod= 6; *etamod= -5; }
  else if (geographicalID=="L1_B04_S1_C7_M4C")   { *hashID= 802; *bec= 0; *layer=2; *phimod= 6; *etamod= -4; }
  else if (geographicalID=="L1_B04_S1_C7_M3C")   { *hashID= 803; *bec= 0; *layer=2; *phimod= 6; *etamod= -3; }
  else if (geographicalID=="L1_B04_S1_C7_M2C")   { *hashID= 804; *bec= 0; *layer=2; *phimod= 6; *etamod= -2; }
  else if (geographicalID=="L1_B04_S1_C7_M1C")   { *hashID= 805; *bec= 0; *layer=2; *phimod= 6; *etamod= -1; }
  else if (geographicalID=="L1_B04_S1_C7_M0")    { *hashID= 806; *bec= 0; *layer=2; *phimod= 6; *etamod=  0; }
  else if (geographicalID=="L1_B04_S1_A6_M1A")   { *hashID= 807; *bec= 0; *layer=2; *phimod= 6; *etamod=  1; }
  else if (geographicalID=="L1_B04_S1_A6_M2A")   { *hashID= 808; *bec= 0; *layer=2; *phimod= 6; *etamod=  2; }
  else if (geographicalID=="L1_B04_S1_A6_M3A")   { *hashID= 809; *bec= 0; *layer=2; *phimod= 6; *etamod=  3; }
  else if (geographicalID=="L1_B04_S1_A6_M4A")   { *hashID= 810; *bec= 0; *layer=2; *phimod= 6; *etamod=  4; }
  else if (geographicalID=="L1_B04_S1_A6_M5A")   { *hashID= 811; *bec= 0; *layer=2; *phimod= 6; *etamod=  5; }
  else if (geographicalID=="L1_B04_S1_A6_M6A")   { *hashID= 812; *bec= 0; *layer=2; *phimod= 6; *etamod=  6; }
  else if (geographicalID=="L1_B04_S2_C6_M6C")   { *hashID= 813; *bec= 0; *layer=2; *phimod= 7; *etamod= -6; }
  else if (geographicalID=="L1_B04_S2_C6_M5C")   { *hashID= 814; *bec= 0; *layer=2; *phimod= 7; *etamod= -5; }
  else if (geographicalID=="L1_B04_S2_C6_M4C")   { *hashID= 815; *bec= 0; *layer=2; *phimod= 7; *etamod= -4; }
  else if (geographicalID=="L1_B04_S2_C6_M3C")   { *hashID= 816; *bec= 0; *layer=2; *phimod= 7; *etamod= -3; }
  else if (geographicalID=="L1_B04_S2_C6_M2C")   { *hashID= 817; *bec= 0; *layer=2; *phimod= 7; *etamod= -2; }
  else if (geographicalID=="L1_B04_S2_C6_M1C")   { *hashID= 818; *bec= 0; *layer=2; *phimod= 7; *etamod= -1; }
  else if (geographicalID=="L1_B04_S2_A7_M0")    { *hashID= 819; *bec= 0; *layer=2; *phimod= 7; *etamod=  0; }
  else if (geographicalID=="L1_B04_S2_A7_M1A")   { *hashID= 820; *bec= 0; *layer=2; *phimod= 7; *etamod=  1; }
  else if (geographicalID=="L1_B04_S2_A7_M2A")   { *hashID= 821; *bec= 0; *layer=2; *phimod= 7; *etamod=  2; }
  else if (geographicalID=="L1_B04_S2_A7_M3A")   { *hashID= 822; *bec= 0; *layer=2; *phimod= 7; *etamod=  3; }
  else if (geographicalID=="L1_B04_S2_A7_M4A")   { *hashID= 823; *bec= 0; *layer=2; *phimod= 7; *etamod=  4; }
  else if (geographicalID=="L1_B04_S2_A7_M5A")   { *hashID= 824; *bec= 0; *layer=2; *phimod= 7; *etamod=  5; }
  else if (geographicalID=="L1_B04_S2_A7_M6A")   { *hashID= 825; *bec= 0; *layer=2; *phimod= 7; *etamod=  6; }
  else if (geographicalID=="L1_B05_S1_C7_M6C")   { *hashID= 826; *bec= 0; *layer=2; *phimod= 8; *etamod= -6; }
  else if (geographicalID=="L1_B05_S1_C7_M5C")   { *hashID= 827; *bec= 0; *layer=2; *phimod= 8; *etamod= -5; }
  else if (geographicalID=="L1_B05_S1_C7_M4C")   { *hashID= 828; *bec= 0; *layer=2; *phimod= 8; *etamod= -4; }
  else if (geographicalID=="L1_B05_S1_C7_M3C")   { *hashID= 829; *bec= 0; *layer=2; *phimod= 8; *etamod= -3; }
  else if (geographicalID=="L1_B05_S1_C7_M2C")   { *hashID= 830; *bec= 0; *layer=2; *phimod= 8; *etamod= -2; }
  else if (geographicalID=="L1_B05_S1_C7_M1C")   { *hashID= 831; *bec= 0; *layer=2; *phimod= 8; *etamod= -1; }
  else if (geographicalID=="L1_B05_S1_C7_M0")    { *hashID= 832; *bec= 0; *layer=2; *phimod= 8; *etamod=  0; }
  else if (geographicalID=="L1_B05_S1_A6_M1A")   { *hashID= 833; *bec= 0; *layer=2; *phimod= 8; *etamod=  1; }
  else if (geographicalID=="L1_B05_S1_A6_M2A")   { *hashID= 834; *bec= 0; *layer=2; *phimod= 8; *etamod=  2; }
  else if (geographicalID=="L1_B05_S1_A6_M3A")   { *hashID= 835; *bec= 0; *layer=2; *phimod= 8; *etamod=  3; }
  else if (geographicalID=="L1_B05_S1_A6_M4A")   { *hashID= 836; *bec= 0; *layer=2; *phimod= 8; *etamod=  4; }
  else if (geographicalID=="L1_B05_S1_A6_M5A")   { *hashID= 837; *bec= 0; *layer=2; *phimod= 8; *etamod=  5; }
  else if (geographicalID=="L1_B05_S1_A6_M6A")   { *hashID= 838; *bec= 0; *layer=2; *phimod= 8; *etamod=  6; }
  else if (geographicalID=="L1_B05_S2_C6_M6C")   { *hashID= 839; *bec= 0; *layer=2; *phimod= 9; *etamod= -6; }
  else if (geographicalID=="L1_B05_S2_C6_M5C")   { *hashID= 840; *bec= 0; *layer=2; *phimod= 9; *etamod= -5; }
  else if (geographicalID=="L1_B05_S2_C6_M4C")   { *hashID= 841; *bec= 0; *layer=2; *phimod= 9; *etamod= -4; }
  else if (geographicalID=="L1_B05_S2_C6_M3C")   { *hashID= 842; *bec= 0; *layer=2; *phimod= 9; *etamod= -3; }
  else if (geographicalID=="L1_B05_S2_C6_M2C")   { *hashID= 843; *bec= 0; *layer=2; *phimod= 9; *etamod= -2; }
  else if (geographicalID=="L1_B05_S2_C6_M1C")   { *hashID= 844; *bec= 0; *layer=2; *phimod= 9; *etamod= -1; }
  else if (geographicalID=="L1_B05_S2_A7_M0")    { *hashID= 845; *bec= 0; *layer=2; *phimod= 9; *etamod=  0; }
  else if (geographicalID=="L1_B05_S2_A7_M1A")   { *hashID= 846; *bec= 0; *layer=2; *phimod= 9; *etamod=  1; }
  else if (geographicalID=="L1_B05_S2_A7_M2A")   { *hashID= 847; *bec= 0; *layer=2; *phimod= 9; *etamod=  2; }
  else if (geographicalID=="L1_B05_S2_A7_M3A")   { *hashID= 848; *bec= 0; *layer=2; *phimod= 9; *etamod=  3; }
  else if (geographicalID=="L1_B05_S2_A7_M4A")   { *hashID= 849; *bec= 0; *layer=2; *phimod= 9; *etamod=  4; }
  else if (geographicalID=="L1_B05_S2_A7_M5A")   { *hashID= 850; *bec= 0; *layer=2; *phimod= 9; *etamod=  5; }
  else if (geographicalID=="L1_B05_S2_A7_M6A")   { *hashID= 851; *bec= 0; *layer=2; *phimod= 9; *etamod=  6; }
  else if (geographicalID=="L1_B06_S1_C7_M6C")   { *hashID= 852; *bec= 0; *layer=2; *phimod=10; *etamod= -6; }
  else if (geographicalID=="L1_B06_S1_C7_M5C")   { *hashID= 853; *bec= 0; *layer=2; *phimod=10; *etamod= -5; }
  else if (geographicalID=="L1_B06_S1_C7_M4C")   { *hashID= 854; *bec= 0; *layer=2; *phimod=10; *etamod= -4; }
  else if (geographicalID=="L1_B06_S1_C7_M3C")   { *hashID= 855; *bec= 0; *layer=2; *phimod=10; *etamod= -3; }
  else if (geographicalID=="L1_B06_S1_C7_M2C")   { *hashID= 856; *bec= 0; *layer=2; *phimod=10; *etamod= -2; }
  else if (geographicalID=="L1_B06_S1_C7_M1C")   { *hashID= 857; *bec= 0; *layer=2; *phimod=10; *etamod= -1; }
  else if (geographicalID=="L1_B06_S1_C7_M0")    { *hashID= 858; *bec= 0; *layer=2; *phimod=10; *etamod=  0; }
  else if (geographicalID=="L1_B06_S1_A6_M1A")   { *hashID= 859; *bec= 0; *layer=2; *phimod=10; *etamod=  1; }
  else if (geographicalID=="L1_B06_S1_A6_M2A")   { *hashID= 860; *bec= 0; *layer=2; *phimod=10; *etamod=  2; }
  else if (geographicalID=="L1_B06_S1_A6_M3A")   { *hashID= 861; *bec= 0; *layer=2; *phimod=10; *etamod=  3; }
  else if (geographicalID=="L1_B06_S1_A6_M4A")   { *hashID= 862; *bec= 0; *layer=2; *phimod=10; *etamod=  4; }
  else if (geographicalID=="L1_B06_S1_A6_M5A")   { *hashID= 863; *bec= 0; *layer=2; *phimod=10; *etamod=  5; }
  else if (geographicalID=="L1_B06_S1_A6_M6A")   { *hashID= 864; *bec= 0; *layer=2; *phimod=10; *etamod=  6; }
  else if (geographicalID=="L1_B06_S2_C6_M6C")   { *hashID= 865; *bec= 0; *layer=2; *phimod=11; *etamod= -6; }
  else if (geographicalID=="L1_B06_S2_C6_M5C")   { *hashID= 866; *bec= 0; *layer=2; *phimod=11; *etamod= -5; }
  else if (geographicalID=="L1_B06_S2_C6_M4C")   { *hashID= 867; *bec= 0; *layer=2; *phimod=11; *etamod= -4; }
  else if (geographicalID=="L1_B06_S2_C6_M3C")   { *hashID= 868; *bec= 0; *layer=2; *phimod=11; *etamod= -3; }
  else if (geographicalID=="L1_B06_S2_C6_M2C")   { *hashID= 869; *bec= 0; *layer=2; *phimod=11; *etamod= -2; }
  else if (geographicalID=="L1_B06_S2_C6_M1C")   { *hashID= 870; *bec= 0; *layer=2; *phimod=11; *etamod= -1; }
  else if (geographicalID=="L1_B06_S2_A7_M0")    { *hashID= 871; *bec= 0; *layer=2; *phimod=11; *etamod=  0; }
  else if (geographicalID=="L1_B06_S2_A7_M1A")   { *hashID= 872; *bec= 0; *layer=2; *phimod=11; *etamod=  1; }
  else if (geographicalID=="L1_B06_S2_A7_M2A")   { *hashID= 873; *bec= 0; *layer=2; *phimod=11; *etamod=  2; }
  else if (geographicalID=="L1_B06_S2_A7_M3A")   { *hashID= 874; *bec= 0; *layer=2; *phimod=11; *etamod=  3; }
  else if (geographicalID=="L1_B06_S2_A7_M4A")   { *hashID= 875; *bec= 0; *layer=2; *phimod=11; *etamod=  4; }
  else if (geographicalID=="L1_B06_S2_A7_M5A")   { *hashID= 876; *bec= 0; *layer=2; *phimod=11; *etamod=  5; }
  else if (geographicalID=="L1_B06_S2_A7_M6A")   { *hashID= 877; *bec= 0; *layer=2; *phimod=11; *etamod=  6; }
  else if (geographicalID=="L1_B07_S1_C7_M6C")   { *hashID= 878; *bec= 0; *layer=2; *phimod=12; *etamod= -6; }
  else if (geographicalID=="L1_B07_S1_C7_M5C")   { *hashID= 879; *bec= 0; *layer=2; *phimod=12; *etamod= -5; }
  else if (geographicalID=="L1_B07_S1_C7_M4C")   { *hashID= 880; *bec= 0; *layer=2; *phimod=12; *etamod= -4; }
  else if (geographicalID=="L1_B07_S1_C7_M3C")   { *hashID= 881; *bec= 0; *layer=2; *phimod=12; *etamod= -3; }
  else if (geographicalID=="L1_B07_S1_C7_M2C")   { *hashID= 882; *bec= 0; *layer=2; *phimod=12; *etamod= -2; }
  else if (geographicalID=="L1_B07_S1_C7_M1C")   { *hashID= 883; *bec= 0; *layer=2; *phimod=12; *etamod= -1; }
  else if (geographicalID=="L1_B07_S1_C7_M0")    { *hashID= 884; *bec= 0; *layer=2; *phimod=12; *etamod=  0; }
  else if (geographicalID=="L1_B07_S1_A6_M1A")   { *hashID= 885; *bec= 0; *layer=2; *phimod=12; *etamod=  1; }
  else if (geographicalID=="L1_B07_S1_A6_M2A")   { *hashID= 886; *bec= 0; *layer=2; *phimod=12; *etamod=  2; }
  else if (geographicalID=="L1_B07_S1_A6_M3A")   { *hashID= 887; *bec= 0; *layer=2; *phimod=12; *etamod=  3; }
  else if (geographicalID=="L1_B07_S1_A6_M4A")   { *hashID= 888; *bec= 0; *layer=2; *phimod=12; *etamod=  4; }
  else if (geographicalID=="L1_B07_S1_A6_M5A")   { *hashID= 889; *bec= 0; *layer=2; *phimod=12; *etamod=  5; }
  else if (geographicalID=="L1_B07_S1_A6_M6A")   { *hashID= 890; *bec= 0; *layer=2; *phimod=12; *etamod=  6; }
  else if (geographicalID=="L1_B07_S2_C6_M6C")   { *hashID= 891; *bec= 0; *layer=2; *phimod=13; *etamod= -6; }
  else if (geographicalID=="L1_B07_S2_C6_M5C")   { *hashID= 892; *bec= 0; *layer=2; *phimod=13; *etamod= -5; }
  else if (geographicalID=="L1_B07_S2_C6_M4C")   { *hashID= 893; *bec= 0; *layer=2; *phimod=13; *etamod= -4; }
  else if (geographicalID=="L1_B07_S2_C6_M3C")   { *hashID= 894; *bec= 0; *layer=2; *phimod=13; *etamod= -3; }
  else if (geographicalID=="L1_B07_S2_C6_M2C")   { *hashID= 895; *bec= 0; *layer=2; *phimod=13; *etamod= -2; }
  else if (geographicalID=="L1_B07_S2_C6_M1C")   { *hashID= 896; *bec= 0; *layer=2; *phimod=13; *etamod= -1; }
  else if (geographicalID=="L1_B07_S2_A7_M0")    { *hashID= 897; *bec= 0; *layer=2; *phimod=13; *etamod=  0; }
  else if (geographicalID=="L1_B07_S2_A7_M1A")   { *hashID= 898; *bec= 0; *layer=2; *phimod=13; *etamod=  1; }
  else if (geographicalID=="L1_B07_S2_A7_M2A")   { *hashID= 899; *bec= 0; *layer=2; *phimod=13; *etamod=  2; }
  else if (geographicalID=="L1_B07_S2_A7_M3A")   { *hashID= 900; *bec= 0; *layer=2; *phimod=13; *etamod=  3; }
  else if (geographicalID=="L1_B07_S2_A7_M4A")   { *hashID= 901; *bec= 0; *layer=2; *phimod=13; *etamod=  4; }
  else if (geographicalID=="L1_B07_S2_A7_M5A")   { *hashID= 902; *bec= 0; *layer=2; *phimod=13; *etamod=  5; }
  else if (geographicalID=="L1_B07_S2_A7_M6A")   { *hashID= 903; *bec= 0; *layer=2; *phimod=13; *etamod=  6; }
  else if (geographicalID=="L1_B08_S1_C7_M6C")   { *hashID= 904; *bec= 0; *layer=2; *phimod=14; *etamod= -6; }
  else if (geographicalID=="L1_B08_S1_C7_M5C")   { *hashID= 905; *bec= 0; *layer=2; *phimod=14; *etamod= -5; }
  else if (geographicalID=="L1_B08_S1_C7_M4C")   { *hashID= 906; *bec= 0; *layer=2; *phimod=14; *etamod= -4; }
  else if (geographicalID=="L1_B08_S1_C7_M3C")   { *hashID= 907; *bec= 0; *layer=2; *phimod=14; *etamod= -3; }
  else if (geographicalID=="L1_B08_S1_C7_M2C")   { *hashID= 908; *bec= 0; *layer=2; *phimod=14; *etamod= -2; }
  else if (geographicalID=="L1_B08_S1_C7_M1C")   { *hashID= 909; *bec= 0; *layer=2; *phimod=14; *etamod= -1; }
  else if (geographicalID=="L1_B08_S1_C7_M0")    { *hashID= 910; *bec= 0; *layer=2; *phimod=14; *etamod=  0; }
  else if (geographicalID=="L1_B08_S1_A6_M1A")   { *hashID= 911; *bec= 0; *layer=2; *phimod=14; *etamod=  1; }
  else if (geographicalID=="L1_B08_S1_A6_M2A")   { *hashID= 912; *bec= 0; *layer=2; *phimod=14; *etamod=  2; }
  else if (geographicalID=="L1_B08_S1_A6_M3A")   { *hashID= 913; *bec= 0; *layer=2; *phimod=14; *etamod=  3; }
  else if (geographicalID=="L1_B08_S1_A6_M4A")   { *hashID= 914; *bec= 0; *layer=2; *phimod=14; *etamod=  4; }
  else if (geographicalID=="L1_B08_S1_A6_M5A")   { *hashID= 915; *bec= 0; *layer=2; *phimod=14; *etamod=  5; }
  else if (geographicalID=="L1_B08_S1_A6_M6A")   { *hashID= 916; *bec= 0; *layer=2; *phimod=14; *etamod=  6; }
  else if (geographicalID=="L1_B08_S2_C6_M6C")   { *hashID= 917; *bec= 0; *layer=2; *phimod=15; *etamod= -6; }
  else if (geographicalID=="L1_B08_S2_C6_M5C")   { *hashID= 918; *bec= 0; *layer=2; *phimod=15; *etamod= -5; }
  else if (geographicalID=="L1_B08_S2_C6_M4C")   { *hashID= 919; *bec= 0; *layer=2; *phimod=15; *etamod= -4; }
  else if (geographicalID=="L1_B08_S2_C6_M3C")   { *hashID= 920; *bec= 0; *layer=2; *phimod=15; *etamod= -3; }
  else if (geographicalID=="L1_B08_S2_C6_M2C")   { *hashID= 921; *bec= 0; *layer=2; *phimod=15; *etamod= -2; }
  else if (geographicalID=="L1_B08_S2_C6_M1C")   { *hashID= 922; *bec= 0; *layer=2; *phimod=15; *etamod= -1; }
  else if (geographicalID=="L1_B08_S2_A7_M0")    { *hashID= 923; *bec= 0; *layer=2; *phimod=15; *etamod=  0; }
  else if (geographicalID=="L1_B08_S2_A7_M1A")   { *hashID= 924; *bec= 0; *layer=2; *phimod=15; *etamod=  1; }
  else if (geographicalID=="L1_B08_S2_A7_M2A")   { *hashID= 925; *bec= 0; *layer=2; *phimod=15; *etamod=  2; }
  else if (geographicalID=="L1_B08_S2_A7_M3A")   { *hashID= 926; *bec= 0; *layer=2; *phimod=15; *etamod=  3; }
  else if (geographicalID=="L1_B08_S2_A7_M4A")   { *hashID= 927; *bec= 0; *layer=2; *phimod=15; *etamod=  4; }
  else if (geographicalID=="L1_B08_S2_A7_M5A")   { *hashID= 928; *bec= 0; *layer=2; *phimod=15; *etamod=  5; }
  else if (geographicalID=="L1_B08_S2_A7_M6A")   { *hashID= 929; *bec= 0; *layer=2; *phimod=15; *etamod=  6; }
  else if (geographicalID=="L1_B09_S1_C7_M6C")   { *hashID= 930; *bec= 0; *layer=2; *phimod=16; *etamod= -6; }
  else if (geographicalID=="L1_B09_S1_C7_M5C")   { *hashID= 931; *bec= 0; *layer=2; *phimod=16; *etamod= -5; }
  else if (geographicalID=="L1_B09_S1_C7_M4C")   { *hashID= 932; *bec= 0; *layer=2; *phimod=16; *etamod= -4; }
  else if (geographicalID=="L1_B09_S1_C7_M3C")   { *hashID= 933; *bec= 0; *layer=2; *phimod=16; *etamod= -3; }
  else if (geographicalID=="L1_B09_S1_C7_M2C")   { *hashID= 934; *bec= 0; *layer=2; *phimod=16; *etamod= -2; }
  else if (geographicalID=="L1_B09_S1_C7_M1C")   { *hashID= 935; *bec= 0; *layer=2; *phimod=16; *etamod= -1; }
  else if (geographicalID=="L1_B09_S1_C7_M0")    { *hashID= 936; *bec= 0; *layer=2; *phimod=16; *etamod=  0; }
  else if (geographicalID=="L1_B09_S1_A6_M1A")   { *hashID= 937; *bec= 0; *layer=2; *phimod=16; *etamod=  1; }
  else if (geographicalID=="L1_B09_S1_A6_M2A")   { *hashID= 938; *bec= 0; *layer=2; *phimod=16; *etamod=  2; }
  else if (geographicalID=="L1_B09_S1_A6_M3A")   { *hashID= 939; *bec= 0; *layer=2; *phimod=16; *etamod=  3; }
  else if (geographicalID=="L1_B09_S1_A6_M4A")   { *hashID= 940; *bec= 0; *layer=2; *phimod=16; *etamod=  4; }
  else if (geographicalID=="L1_B09_S1_A6_M5A")   { *hashID= 941; *bec= 0; *layer=2; *phimod=16; *etamod=  5; }
  else if (geographicalID=="L1_B09_S1_A6_M6A")   { *hashID= 942; *bec= 0; *layer=2; *phimod=16; *etamod=  6; }
  else if (geographicalID=="L1_B09_S2_C6_M6C")   { *hashID= 943; *bec= 0; *layer=2; *phimod=17; *etamod= -6; }
  else if (geographicalID=="L1_B09_S2_C6_M5C")   { *hashID= 944; *bec= 0; *layer=2; *phimod=17; *etamod= -5; }
  else if (geographicalID=="L1_B09_S2_C6_M4C")   { *hashID= 945; *bec= 0; *layer=2; *phimod=17; *etamod= -4; }
  else if (geographicalID=="L1_B09_S2_C6_M3C")   { *hashID= 946; *bec= 0; *layer=2; *phimod=17; *etamod= -3; }
  else if (geographicalID=="L1_B09_S2_C6_M2C")   { *hashID= 947; *bec= 0; *layer=2; *phimod=17; *etamod= -2; }
  else if (geographicalID=="L1_B09_S2_C6_M1C")   { *hashID= 948; *bec= 0; *layer=2; *phimod=17; *etamod= -1; }
  else if (geographicalID=="L1_B09_S2_A7_M0")    { *hashID= 949; *bec= 0; *layer=2; *phimod=17; *etamod=  0; }
  else if (geographicalID=="L1_B09_S2_A7_M1A")   { *hashID= 950; *bec= 0; *layer=2; *phimod=17; *etamod=  1; }
  else if (geographicalID=="L1_B09_S2_A7_M2A")   { *hashID= 951; *bec= 0; *layer=2; *phimod=17; *etamod=  2; }
  else if (geographicalID=="L1_B09_S2_A7_M3A")   { *hashID= 952; *bec= 0; *layer=2; *phimod=17; *etamod=  3; }
  else if (geographicalID=="L1_B09_S2_A7_M4A")   { *hashID= 953; *bec= 0; *layer=2; *phimod=17; *etamod=  4; }
  else if (geographicalID=="L1_B09_S2_A7_M5A")   { *hashID= 954; *bec= 0; *layer=2; *phimod=17; *etamod=  5; }
  else if (geographicalID=="L1_B09_S2_A7_M6A")   { *hashID= 955; *bec= 0; *layer=2; *phimod=17; *etamod=  6; }
  else if (geographicalID=="L1_B10_S1_C7_M6C")   { *hashID= 956; *bec= 0; *layer=2; *phimod=18; *etamod= -6; }
  else if (geographicalID=="L1_B10_S1_C7_M5C")   { *hashID= 957; *bec= 0; *layer=2; *phimod=18; *etamod= -5; }
  else if (geographicalID=="L1_B10_S1_C7_M4C")   { *hashID= 958; *bec= 0; *layer=2; *phimod=18; *etamod= -4; }
  else if (geographicalID=="L1_B10_S1_C7_M3C")   { *hashID= 959; *bec= 0; *layer=2; *phimod=18; *etamod= -3; }
  else if (geographicalID=="L1_B10_S1_C7_M2C")   { *hashID= 960; *bec= 0; *layer=2; *phimod=18; *etamod= -2; }
  else if (geographicalID=="L1_B10_S1_C7_M1C")   { *hashID= 961; *bec= 0; *layer=2; *phimod=18; *etamod= -1; }
  else if (geographicalID=="L1_B10_S1_C7_M0")    { *hashID= 962; *bec= 0; *layer=2; *phimod=18; *etamod=  0; }
  else if (geographicalID=="L1_B10_S1_A6_M1A")   { *hashID= 963; *bec= 0; *layer=2; *phimod=18; *etamod=  1; }
  else if (geographicalID=="L1_B10_S1_A6_M2A")   { *hashID= 964; *bec= 0; *layer=2; *phimod=18; *etamod=  2; }
  else if (geographicalID=="L1_B10_S1_A6_M3A")   { *hashID= 965; *bec= 0; *layer=2; *phimod=18; *etamod=  3; }
  else if (geographicalID=="L1_B10_S1_A6_M4A")   { *hashID= 966; *bec= 0; *layer=2; *phimod=18; *etamod=  4; }
  else if (geographicalID=="L1_B10_S1_A6_M5A")   { *hashID= 967; *bec= 0; *layer=2; *phimod=18; *etamod=  5; }
  else if (geographicalID=="L1_B10_S1_A6_M6A")   { *hashID= 968; *bec= 0; *layer=2; *phimod=18; *etamod=  6; }
  else if (geographicalID=="L1_B10_S2_C6_M6C")   { *hashID= 969; *bec= 0; *layer=2; *phimod=19; *etamod= -6; }
  else if (geographicalID=="L1_B10_S2_C6_M5C")   { *hashID= 970; *bec= 0; *layer=2; *phimod=19; *etamod= -5; }
  else if (geographicalID=="L1_B10_S2_C6_M4C")   { *hashID= 971; *bec= 0; *layer=2; *phimod=19; *etamod= -4; }
  else if (geographicalID=="L1_B10_S2_C6_M3C")   { *hashID= 972; *bec= 0; *layer=2; *phimod=19; *etamod= -3; }
  else if (geographicalID=="L1_B10_S2_C6_M2C")   { *hashID= 973; *bec= 0; *layer=2; *phimod=19; *etamod= -2; }
  else if (geographicalID=="L1_B10_S2_C6_M1C")   { *hashID= 974; *bec= 0; *layer=2; *phimod=19; *etamod= -1; }
  else if (geographicalID=="L1_B10_S2_A7_M0")    { *hashID= 975; *bec= 0; *layer=2; *phimod=19; *etamod=  0; }
  else if (geographicalID=="L1_B10_S2_A7_M1A")   { *hashID= 976; *bec= 0; *layer=2; *phimod=19; *etamod=  1; }
  else if (geographicalID=="L1_B10_S2_A7_M2A")   { *hashID= 977; *bec= 0; *layer=2; *phimod=19; *etamod=  2; }
  else if (geographicalID=="L1_B10_S2_A7_M3A")   { *hashID= 978; *bec= 0; *layer=2; *phimod=19; *etamod=  3; }
  else if (geographicalID=="L1_B10_S2_A7_M4A")   { *hashID= 979; *bec= 0; *layer=2; *phimod=19; *etamod=  4; }
  else if (geographicalID=="L1_B10_S2_A7_M5A")   { *hashID= 980; *bec= 0; *layer=2; *phimod=19; *etamod=  5; }
  else if (geographicalID=="L1_B10_S2_A7_M6A")   { *hashID= 981; *bec= 0; *layer=2; *phimod=19; *etamod=  6; }
  else if (geographicalID=="L1_B11_S1_C7_M6C")   { *hashID= 982; *bec= 0; *layer=2; *phimod=20; *etamod= -6; }
  else if (geographicalID=="L1_B11_S1_C7_M5C")   { *hashID= 983; *bec= 0; *layer=2; *phimod=20; *etamod= -5; }
  else if (geographicalID=="L1_B11_S1_C7_M4C")   { *hashID= 984; *bec= 0; *layer=2; *phimod=20; *etamod= -4; }
  else if (geographicalID=="L1_B11_S1_C7_M3C")   { *hashID= 985; *bec= 0; *layer=2; *phimod=20; *etamod= -3; }
  else if (geographicalID=="L1_B11_S1_C7_M2C")   { *hashID= 986; *bec= 0; *layer=2; *phimod=20; *etamod= -2; }
  else if (geographicalID=="L1_B11_S1_C7_M1C")   { *hashID= 987; *bec= 0; *layer=2; *phimod=20; *etamod= -1; }
  else if (geographicalID=="L1_B11_S1_C7_M0")    { *hashID= 988; *bec= 0; *layer=2; *phimod=20; *etamod=  0; }
  else if (geographicalID=="L1_B11_S1_A6_M1A")   { *hashID= 989; *bec= 0; *layer=2; *phimod=20; *etamod=  1; }
  else if (geographicalID=="L1_B11_S1_A6_M2A")   { *hashID= 990; *bec= 0; *layer=2; *phimod=20; *etamod=  2; }
  else if (geographicalID=="L1_B11_S1_A6_M3A")   { *hashID= 991; *bec= 0; *layer=2; *phimod=20; *etamod=  3; }
  else if (geographicalID=="L1_B11_S1_A6_M4A")   { *hashID= 992; *bec= 0; *layer=2; *phimod=20; *etamod=  4; }
  else if (geographicalID=="L1_B11_S1_A6_M5A")   { *hashID= 993; *bec= 0; *layer=2; *phimod=20; *etamod=  5; }
  else if (geographicalID=="L1_B11_S1_A6_M6A")   { *hashID= 994; *bec= 0; *layer=2; *phimod=20; *etamod=  6; }
  else if (geographicalID=="L1_B11_S2_C6_M6C")   { *hashID= 995; *bec= 0; *layer=2; *phimod=21; *etamod= -6; }
  else if (geographicalID=="L1_B11_S2_C6_M5C")   { *hashID= 996; *bec= 0; *layer=2; *phimod=21; *etamod= -5; }
  else if (geographicalID=="L1_B11_S2_C6_M4C")   { *hashID= 997; *bec= 0; *layer=2; *phimod=21; *etamod= -4; }
  else if (geographicalID=="L1_B11_S2_C6_M3C")   { *hashID= 998; *bec= 0; *layer=2; *phimod=21; *etamod= -3; }
  else if (geographicalID=="L1_B11_S2_C6_M2C")   { *hashID= 999; *bec= 0; *layer=2; *phimod=21; *etamod= -2; }
  else if (geographicalID=="L1_B11_S2_C6_M1C")   { *hashID=1000; *bec= 0; *layer=2; *phimod=21; *etamod= -1; }
  else if (geographicalID=="L1_B11_S2_A7_M0")    { *hashID=1001; *bec= 0; *layer=2; *phimod=21; *etamod=  0; }
  else if (geographicalID=="L1_B11_S2_A7_M1A")   { *hashID=1002; *bec= 0; *layer=2; *phimod=21; *etamod=  1; }
  else if (geographicalID=="L1_B11_S2_A7_M2A")   { *hashID=1003; *bec= 0; *layer=2; *phimod=21; *etamod=  2; }
  else if (geographicalID=="L1_B11_S2_A7_M3A")   { *hashID=1004; *bec= 0; *layer=2; *phimod=21; *etamod=  3; }
  else if (geographicalID=="L1_B11_S2_A7_M4A")   { *hashID=1005; *bec= 0; *layer=2; *phimod=21; *etamod=  4; }
  else if (geographicalID=="L1_B11_S2_A7_M5A")   { *hashID=1006; *bec= 0; *layer=2; *phimod=21; *etamod=  5; }
  else if (geographicalID=="L1_B11_S2_A7_M6A")   { *hashID=1007; *bec= 0; *layer=2; *phimod=21; *etamod=  6; }
  else if (geographicalID=="L1_B12_S1_C7_M6C")   { *hashID=1008; *bec= 0; *layer=2; *phimod=22; *etamod= -6; }
  else if (geographicalID=="L1_B12_S1_C7_M5C")   { *hashID=1009; *bec= 0; *layer=2; *phimod=22; *etamod= -5; }
  else if (geographicalID=="L1_B12_S1_C7_M4C")   { *hashID=1010; *bec= 0; *layer=2; *phimod=22; *etamod= -4; }
  else if (geographicalID=="L1_B12_S1_C7_M3C")   { *hashID=1011; *bec= 0; *layer=2; *phimod=22; *etamod= -3; }
  else if (geographicalID=="L1_B12_S1_C7_M2C")   { *hashID=1012; *bec= 0; *layer=2; *phimod=22; *etamod= -2; }
  else if (geographicalID=="L1_B12_S1_C7_M1C")   { *hashID=1013; *bec= 0; *layer=2; *phimod=22; *etamod= -1; }
  else if (geographicalID=="L1_B12_S1_C7_M0")    { *hashID=1014; *bec= 0; *layer=2; *phimod=22; *etamod=  0; }
  else if (geographicalID=="L1_B12_S1_A6_M1A")   { *hashID=1015; *bec= 0; *layer=2; *phimod=22; *etamod=  1; }
  else if (geographicalID=="L1_B12_S1_A6_M2A")   { *hashID=1016; *bec= 0; *layer=2; *phimod=22; *etamod=  2; }
  else if (geographicalID=="L1_B12_S1_A6_M3A")   { *hashID=1017; *bec= 0; *layer=2; *phimod=22; *etamod=  3; }
  else if (geographicalID=="L1_B12_S1_A6_M4A")   { *hashID=1018; *bec= 0; *layer=2; *phimod=22; *etamod=  4; }
  else if (geographicalID=="L1_B12_S1_A6_M5A")   { *hashID=1019; *bec= 0; *layer=2; *phimod=22; *etamod=  5; }
  else if (geographicalID=="L1_B12_S1_A6_M6A")   { *hashID=1020; *bec= 0; *layer=2; *phimod=22; *etamod=  6; }
  else if (geographicalID=="L1_B12_S2_C6_M6C")   { *hashID=1021; *bec= 0; *layer=2; *phimod=23; *etamod= -6; }
  else if (geographicalID=="L1_B12_S2_C6_M5C")   { *hashID=1022; *bec= 0; *layer=2; *phimod=23; *etamod= -5; }
  else if (geographicalID=="L1_B12_S2_C6_M4C")   { *hashID=1023; *bec= 0; *layer=2; *phimod=23; *etamod= -4; }
  else if (geographicalID=="L1_B12_S2_C6_M3C")   { *hashID=1024; *bec= 0; *layer=2; *phimod=23; *etamod= -3; }
  else if (geographicalID=="L1_B12_S2_C6_M2C")   { *hashID=1025; *bec= 0; *layer=2; *phimod=23; *etamod= -2; }
  else if (geographicalID=="L1_B12_S2_C6_M1C")   { *hashID=1026; *bec= 0; *layer=2; *phimod=23; *etamod= -1; }
  else if (geographicalID=="L1_B12_S2_A7_M0")    { *hashID=1027; *bec= 0; *layer=2; *phimod=23; *etamod=  0; }
  else if (geographicalID=="L1_B12_S2_A7_M1A")   { *hashID=1028; *bec= 0; *layer=2; *phimod=23; *etamod=  1; }
  else if (geographicalID=="L1_B12_S2_A7_M2A")   { *hashID=1029; *bec= 0; *layer=2; *phimod=23; *etamod=  2; }
  else if (geographicalID=="L1_B12_S2_A7_M3A")   { *hashID=1030; *bec= 0; *layer=2; *phimod=23; *etamod=  3; }
  else if (geographicalID=="L1_B12_S2_A7_M4A")   { *hashID=1031; *bec= 0; *layer=2; *phimod=23; *etamod=  4; }
  else if (geographicalID=="L1_B12_S2_A7_M5A")   { *hashID=1032; *bec= 0; *layer=2; *phimod=23; *etamod=  5; }
  else if (geographicalID=="L1_B12_S2_A7_M6A")   { *hashID=1033; *bec= 0; *layer=2; *phimod=23; *etamod=  6; }
  else if (geographicalID=="L1_B13_S1_C7_M6C")   { *hashID=1034; *bec= 0; *layer=2; *phimod=24; *etamod= -6; }
  else if (geographicalID=="L1_B13_S1_C7_M5C")   { *hashID=1035; *bec= 0; *layer=2; *phimod=24; *etamod= -5; }
  else if (geographicalID=="L1_B13_S1_C7_M4C")   { *hashID=1036; *bec= 0; *layer=2; *phimod=24; *etamod= -4; }
  else if (geographicalID=="L1_B13_S1_C7_M3C")   { *hashID=1037; *bec= 0; *layer=2; *phimod=24; *etamod= -3; }
  else if (geographicalID=="L1_B13_S1_C7_M2C")   { *hashID=1038; *bec= 0; *layer=2; *phimod=24; *etamod= -2; }
  else if (geographicalID=="L1_B13_S1_C7_M1C")   { *hashID=1039; *bec= 0; *layer=2; *phimod=24; *etamod= -1; }
  else if (geographicalID=="L1_B13_S1_C7_M0")    { *hashID=1040; *bec= 0; *layer=2; *phimod=24; *etamod=  0; }
  else if (geographicalID=="L1_B13_S1_A6_M1A")   { *hashID=1041; *bec= 0; *layer=2; *phimod=24; *etamod=  1; }
  else if (geographicalID=="L1_B13_S1_A6_M2A")   { *hashID=1042; *bec= 0; *layer=2; *phimod=24; *etamod=  2; }
  else if (geographicalID=="L1_B13_S1_A6_M3A")   { *hashID=1043; *bec= 0; *layer=2; *phimod=24; *etamod=  3; }
  else if (geographicalID=="L1_B13_S1_A6_M4A")   { *hashID=1044; *bec= 0; *layer=2; *phimod=24; *etamod=  4; }
  else if (geographicalID=="L1_B13_S1_A6_M5A")   { *hashID=1045; *bec= 0; *layer=2; *phimod=24; *etamod=  5; }
  else if (geographicalID=="L1_B13_S1_A6_M6A")   { *hashID=1046; *bec= 0; *layer=2; *phimod=24; *etamod=  6; }
  else if (geographicalID=="L1_B13_S2_C6_M6C")   { *hashID=1047; *bec= 0; *layer=2; *phimod=25; *etamod= -6; }
  else if (geographicalID=="L1_B13_S2_C6_M5C")   { *hashID=1048; *bec= 0; *layer=2; *phimod=25; *etamod= -5; }
  else if (geographicalID=="L1_B13_S2_C6_M4C")   { *hashID=1049; *bec= 0; *layer=2; *phimod=25; *etamod= -4; }
  else if (geographicalID=="L1_B13_S2_C6_M3C")   { *hashID=1050; *bec= 0; *layer=2; *phimod=25; *etamod= -3; }
  else if (geographicalID=="L1_B13_S2_C6_M2C")   { *hashID=1051; *bec= 0; *layer=2; *phimod=25; *etamod= -2; }
  else if (geographicalID=="L1_B13_S2_C6_M1C")   { *hashID=1052; *bec= 0; *layer=2; *phimod=25; *etamod= -1; }
  else if (geographicalID=="L1_B13_S2_A7_M0")    { *hashID=1053; *bec= 0; *layer=2; *phimod=25; *etamod=  0; }
  else if (geographicalID=="L1_B13_S2_A7_M1A")   { *hashID=1054; *bec= 0; *layer=2; *phimod=25; *etamod=  1; }
  else if (geographicalID=="L1_B13_S2_A7_M2A")   { *hashID=1055; *bec= 0; *layer=2; *phimod=25; *etamod=  2; }
  else if (geographicalID=="L1_B13_S2_A7_M3A")   { *hashID=1056; *bec= 0; *layer=2; *phimod=25; *etamod=  3; }
  else if (geographicalID=="L1_B13_S2_A7_M4A")   { *hashID=1057; *bec= 0; *layer=2; *phimod=25; *etamod=  4; }
  else if (geographicalID=="L1_B13_S2_A7_M5A")   { *hashID=1058; *bec= 0; *layer=2; *phimod=25; *etamod=  5; }
  else if (geographicalID=="L1_B13_S2_A7_M6A")   { *hashID=1059; *bec= 0; *layer=2; *phimod=25; *etamod=  6; }
  else if (geographicalID=="L1_B14_S1_C7_M6C")   { *hashID=1060; *bec= 0; *layer=2; *phimod=26; *etamod= -6; }
  else if (geographicalID=="L1_B14_S1_C7_M5C")   { *hashID=1061; *bec= 0; *layer=2; *phimod=26; *etamod= -5; }
  else if (geographicalID=="L1_B14_S1_C7_M4C")   { *hashID=1062; *bec= 0; *layer=2; *phimod=26; *etamod= -4; }
  else if (geographicalID=="L1_B14_S1_C7_M3C")   { *hashID=1063; *bec= 0; *layer=2; *phimod=26; *etamod= -3; }
  else if (geographicalID=="L1_B14_S1_C7_M2C")   { *hashID=1064; *bec= 0; *layer=2; *phimod=26; *etamod= -2; }
  else if (geographicalID=="L1_B14_S1_C7_M1C")   { *hashID=1065; *bec= 0; *layer=2; *phimod=26; *etamod= -1; }
  else if (geographicalID=="L1_B14_S1_C7_M0")    { *hashID=1066; *bec= 0; *layer=2; *phimod=26; *etamod=  0; }
  else if (geographicalID=="L1_B14_S1_A6_M1A")   { *hashID=1067; *bec= 0; *layer=2; *phimod=26; *etamod=  1; }
  else if (geographicalID=="L1_B14_S1_A6_M2A")   { *hashID=1068; *bec= 0; *layer=2; *phimod=26; *etamod=  2; }
  else if (geographicalID=="L1_B14_S1_A6_M3A")   { *hashID=1069; *bec= 0; *layer=2; *phimod=26; *etamod=  3; }
  else if (geographicalID=="L1_B14_S1_A6_M4A")   { *hashID=1070; *bec= 0; *layer=2; *phimod=26; *etamod=  4; }
  else if (geographicalID=="L1_B14_S1_A6_M5A")   { *hashID=1071; *bec= 0; *layer=2; *phimod=26; *etamod=  5; }
  else if (geographicalID=="L1_B14_S1_A6_M6A")   { *hashID=1072; *bec= 0; *layer=2; *phimod=26; *etamod=  6; }
  else if (geographicalID=="L1_B14_S2_C6_M6C")   { *hashID=1073; *bec= 0; *layer=2; *phimod=27; *etamod= -6; }
  else if (geographicalID=="L1_B14_S2_C6_M5C")   { *hashID=1074; *bec= 0; *layer=2; *phimod=27; *etamod= -5; }
  else if (geographicalID=="L1_B14_S2_C6_M4C")   { *hashID=1075; *bec= 0; *layer=2; *phimod=27; *etamod= -4; }
  else if (geographicalID=="L1_B14_S2_C6_M3C")   { *hashID=1076; *bec= 0; *layer=2; *phimod=27; *etamod= -3; }
  else if (geographicalID=="L1_B14_S2_C6_M2C")   { *hashID=1077; *bec= 0; *layer=2; *phimod=27; *etamod= -2; }
  else if (geographicalID=="L1_B14_S2_C6_M1C")   { *hashID=1078; *bec= 0; *layer=2; *phimod=27; *etamod= -1; }
  else if (geographicalID=="L1_B14_S2_A7_M0")    { *hashID=1079; *bec= 0; *layer=2; *phimod=27; *etamod=  0; }
  else if (geographicalID=="L1_B14_S2_A7_M1A")   { *hashID=1080; *bec= 0; *layer=2; *phimod=27; *etamod=  1; }
  else if (geographicalID=="L1_B14_S2_A7_M2A")   { *hashID=1081; *bec= 0; *layer=2; *phimod=27; *etamod=  2; }
  else if (geographicalID=="L1_B14_S2_A7_M3A")   { *hashID=1082; *bec= 0; *layer=2; *phimod=27; *etamod=  3; }
  else if (geographicalID=="L1_B14_S2_A7_M4A")   { *hashID=1083; *bec= 0; *layer=2; *phimod=27; *etamod=  4; }
  else if (geographicalID=="L1_B14_S2_A7_M5A")   { *hashID=1084; *bec= 0; *layer=2; *phimod=27; *etamod=  5; }
  else if (geographicalID=="L1_B14_S2_A7_M6A")   { *hashID=1085; *bec= 0; *layer=2; *phimod=27; *etamod=  6; }
  else if (geographicalID=="L1_B15_S1_C7_M6C")   { *hashID=1086; *bec= 0; *layer=2; *phimod=28; *etamod= -6; }
  else if (geographicalID=="L1_B15_S1_C7_M5C")   { *hashID=1087; *bec= 0; *layer=2; *phimod=28; *etamod= -5; }
  else if (geographicalID=="L1_B15_S1_C7_M4C")   { *hashID=1088; *bec= 0; *layer=2; *phimod=28; *etamod= -4; }
  else if (geographicalID=="L1_B15_S1_C7_M3C")   { *hashID=1089; *bec= 0; *layer=2; *phimod=28; *etamod= -3; }
  else if (geographicalID=="L1_B15_S1_C7_M2C")   { *hashID=1090; *bec= 0; *layer=2; *phimod=28; *etamod= -2; }
  else if (geographicalID=="L1_B15_S1_C7_M1C")   { *hashID=1091; *bec= 0; *layer=2; *phimod=28; *etamod= -1; }
  else if (geographicalID=="L1_B15_S1_C7_M0")    { *hashID=1092; *bec= 0; *layer=2; *phimod=28; *etamod=  0; }
  else if (geographicalID=="L1_B15_S1_A6_M1A")   { *hashID=1093; *bec= 0; *layer=2; *phimod=28; *etamod=  1; }
  else if (geographicalID=="L1_B15_S1_A6_M2A")   { *hashID=1094; *bec= 0; *layer=2; *phimod=28; *etamod=  2; }
  else if (geographicalID=="L1_B15_S1_A6_M3A")   { *hashID=1095; *bec= 0; *layer=2; *phimod=28; *etamod=  3; }
  else if (geographicalID=="L1_B15_S1_A6_M4A")   { *hashID=1096; *bec= 0; *layer=2; *phimod=28; *etamod=  4; }
  else if (geographicalID=="L1_B15_S1_A6_M5A")   { *hashID=1097; *bec= 0; *layer=2; *phimod=28; *etamod=  5; }
  else if (geographicalID=="L1_B15_S1_A6_M6A")   { *hashID=1098; *bec= 0; *layer=2; *phimod=28; *etamod=  6; }
  else if (geographicalID=="L1_B15_S2_C6_M6C")   { *hashID=1099; *bec= 0; *layer=2; *phimod=29; *etamod= -6; }
  else if (geographicalID=="L1_B15_S2_C6_M5C")   { *hashID=1100; *bec= 0; *layer=2; *phimod=29; *etamod= -5; }
  else if (geographicalID=="L1_B15_S2_C6_M4C")   { *hashID=1101; *bec= 0; *layer=2; *phimod=29; *etamod= -4; }
  else if (geographicalID=="L1_B15_S2_C6_M3C")   { *hashID=1102; *bec= 0; *layer=2; *phimod=29; *etamod= -3; }
  else if (geographicalID=="L1_B15_S2_C6_M2C")   { *hashID=1103; *bec= 0; *layer=2; *phimod=29; *etamod= -2; }
  else if (geographicalID=="L1_B15_S2_C6_M1C")   { *hashID=1104; *bec= 0; *layer=2; *phimod=29; *etamod= -1; }
  else if (geographicalID=="L1_B15_S2_A7_M0")    { *hashID=1105; *bec= 0; *layer=2; *phimod=29; *etamod=  0; }
  else if (geographicalID=="L1_B15_S2_A7_M1A")   { *hashID=1106; *bec= 0; *layer=2; *phimod=29; *etamod=  1; }
  else if (geographicalID=="L1_B15_S2_A7_M2A")   { *hashID=1107; *bec= 0; *layer=2; *phimod=29; *etamod=  2; }
  else if (geographicalID=="L1_B15_S2_A7_M3A")   { *hashID=1108; *bec= 0; *layer=2; *phimod=29; *etamod=  3; }
  else if (geographicalID=="L1_B15_S2_A7_M4A")   { *hashID=1109; *bec= 0; *layer=2; *phimod=29; *etamod=  4; }
  else if (geographicalID=="L1_B15_S2_A7_M5A")   { *hashID=1110; *bec= 0; *layer=2; *phimod=29; *etamod=  5; }
  else if (geographicalID=="L1_B15_S2_A7_M6A")   { *hashID=1111; *bec= 0; *layer=2; *phimod=29; *etamod=  6; }
  else if (geographicalID=="L1_B16_S1_C7_M6C")   { *hashID=1112; *bec= 0; *layer=2; *phimod=30; *etamod= -6; }
  else if (geographicalID=="L1_B16_S1_C7_M5C")   { *hashID=1113; *bec= 0; *layer=2; *phimod=30; *etamod= -5; }
  else if (geographicalID=="L1_B16_S1_C7_M4C")   { *hashID=1114; *bec= 0; *layer=2; *phimod=30; *etamod= -4; }
  else if (geographicalID=="L1_B16_S1_C7_M3C")   { *hashID=1115; *bec= 0; *layer=2; *phimod=30; *etamod= -3; }
  else if (geographicalID=="L1_B16_S1_C7_M2C")   { *hashID=1116; *bec= 0; *layer=2; *phimod=30; *etamod= -2; }
  else if (geographicalID=="L1_B16_S1_C7_M1C")   { *hashID=1117; *bec= 0; *layer=2; *phimod=30; *etamod= -1; }
  else if (geographicalID=="L1_B16_S1_C7_M0")    { *hashID=1118; *bec= 0; *layer=2; *phimod=30; *etamod=  0; }
  else if (geographicalID=="L1_B16_S1_A6_M1A")   { *hashID=1119; *bec= 0; *layer=2; *phimod=30; *etamod=  1; }
  else if (geographicalID=="L1_B16_S1_A6_M2A")   { *hashID=1120; *bec= 0; *layer=2; *phimod=30; *etamod=  2; }
  else if (geographicalID=="L1_B16_S1_A6_M3A")   { *hashID=1121; *bec= 0; *layer=2; *phimod=30; *etamod=  3; }
  else if (geographicalID=="L1_B16_S1_A6_M4A")   { *hashID=1122; *bec= 0; *layer=2; *phimod=30; *etamod=  4; }
  else if (geographicalID=="L1_B16_S1_A6_M5A")   { *hashID=1123; *bec= 0; *layer=2; *phimod=30; *etamod=  5; }
  else if (geographicalID=="L1_B16_S1_A6_M6A")   { *hashID=1124; *bec= 0; *layer=2; *phimod=30; *etamod=  6; }
  else if (geographicalID=="L1_B16_S2_C6_M6C")   { *hashID=1125; *bec= 0; *layer=2; *phimod=31; *etamod= -6; }
  else if (geographicalID=="L1_B16_S2_C6_M5C")   { *hashID=1126; *bec= 0; *layer=2; *phimod=31; *etamod= -5; }
  else if (geographicalID=="L1_B16_S2_C6_M4C")   { *hashID=1127; *bec= 0; *layer=2; *phimod=31; *etamod= -4; }
  else if (geographicalID=="L1_B16_S2_C6_M3C")   { *hashID=1128; *bec= 0; *layer=2; *phimod=31; *etamod= -3; }
  else if (geographicalID=="L1_B16_S2_C6_M2C")   { *hashID=1129; *bec= 0; *layer=2; *phimod=31; *etamod= -2; }
  else if (geographicalID=="L1_B16_S2_C6_M1C")   { *hashID=1130; *bec= 0; *layer=2; *phimod=31; *etamod= -1; }
  else if (geographicalID=="L1_B16_S2_A7_M0")    { *hashID=1131; *bec= 0; *layer=2; *phimod=31; *etamod=  0; }
  else if (geographicalID=="L1_B16_S2_A7_M1A")   { *hashID=1132; *bec= 0; *layer=2; *phimod=31; *etamod=  1; }
  else if (geographicalID=="L1_B16_S2_A7_M2A")   { *hashID=1133; *bec= 0; *layer=2; *phimod=31; *etamod=  2; }
  else if (geographicalID=="L1_B16_S2_A7_M3A")   { *hashID=1134; *bec= 0; *layer=2; *phimod=31; *etamod=  3; }
  else if (geographicalID=="L1_B16_S2_A7_M4A")   { *hashID=1135; *bec= 0; *layer=2; *phimod=31; *etamod=  4; }
  else if (geographicalID=="L1_B16_S2_A7_M5A")   { *hashID=1136; *bec= 0; *layer=2; *phimod=31; *etamod=  5; }
  else if (geographicalID=="L1_B16_S2_A7_M6A")   { *hashID=1137; *bec= 0; *layer=2; *phimod=31; *etamod=  6; }
  else if (geographicalID=="L1_B17_S1_C7_M6C")   { *hashID=1138; *bec= 0; *layer=2; *phimod=32; *etamod= -6; }
  else if (geographicalID=="L1_B17_S1_C7_M5C")   { *hashID=1139; *bec= 0; *layer=2; *phimod=32; *etamod= -5; }
  else if (geographicalID=="L1_B17_S1_C7_M4C")   { *hashID=1140; *bec= 0; *layer=2; *phimod=32; *etamod= -4; }
  else if (geographicalID=="L1_B17_S1_C7_M3C")   { *hashID=1141; *bec= 0; *layer=2; *phimod=32; *etamod= -3; }
  else if (geographicalID=="L1_B17_S1_C7_M2C")   { *hashID=1142; *bec= 0; *layer=2; *phimod=32; *etamod= -2; }
  else if (geographicalID=="L1_B17_S1_C7_M1C")   { *hashID=1143; *bec= 0; *layer=2; *phimod=32; *etamod= -1; }
  else if (geographicalID=="L1_B17_S1_C7_M0")    { *hashID=1144; *bec= 0; *layer=2; *phimod=32; *etamod=  0; }
  else if (geographicalID=="L1_B17_S1_A6_M1A")   { *hashID=1145; *bec= 0; *layer=2; *phimod=32; *etamod=  1; }
  else if (geographicalID=="L1_B17_S1_A6_M2A")   { *hashID=1146; *bec= 0; *layer=2; *phimod=32; *etamod=  2; }
  else if (geographicalID=="L1_B17_S1_A6_M3A")   { *hashID=1147; *bec= 0; *layer=2; *phimod=32; *etamod=  3; }
  else if (geographicalID=="L1_B17_S1_A6_M4A")   { *hashID=1148; *bec= 0; *layer=2; *phimod=32; *etamod=  4; }
  else if (geographicalID=="L1_B17_S1_A6_M5A")   { *hashID=1149; *bec= 0; *layer=2; *phimod=32; *etamod=  5; }
  else if (geographicalID=="L1_B17_S1_A6_M6A")   { *hashID=1150; *bec= 0; *layer=2; *phimod=32; *etamod=  6; }
  else if (geographicalID=="L1_B17_S2_C6_M6C")   { *hashID=1151; *bec= 0; *layer=2; *phimod=33; *etamod= -6; }
  else if (geographicalID=="L1_B17_S2_C6_M5C")   { *hashID=1152; *bec= 0; *layer=2; *phimod=33; *etamod= -5; }
  else if (geographicalID=="L1_B17_S2_C6_M4C")   { *hashID=1153; *bec= 0; *layer=2; *phimod=33; *etamod= -4; }
  else if (geographicalID=="L1_B17_S2_C6_M3C")   { *hashID=1154; *bec= 0; *layer=2; *phimod=33; *etamod= -3; }
  else if (geographicalID=="L1_B17_S2_C6_M2C")   { *hashID=1155; *bec= 0; *layer=2; *phimod=33; *etamod= -2; }
  else if (geographicalID=="L1_B17_S2_C6_M1C")   { *hashID=1156; *bec= 0; *layer=2; *phimod=33; *etamod= -1; }
  else if (geographicalID=="L1_B17_S2_A7_M0")    { *hashID=1157; *bec= 0; *layer=2; *phimod=33; *etamod=  0; }
  else if (geographicalID=="L1_B17_S2_A7_M1A")   { *hashID=1158; *bec= 0; *layer=2; *phimod=33; *etamod=  1; }
  else if (geographicalID=="L1_B17_S2_A7_M2A")   { *hashID=1159; *bec= 0; *layer=2; *phimod=33; *etamod=  2; }
  else if (geographicalID=="L1_B17_S2_A7_M3A")   { *hashID=1160; *bec= 0; *layer=2; *phimod=33; *etamod=  3; }
  else if (geographicalID=="L1_B17_S2_A7_M4A")   { *hashID=1161; *bec= 0; *layer=2; *phimod=33; *etamod=  4; }
  else if (geographicalID=="L1_B17_S2_A7_M5A")   { *hashID=1162; *bec= 0; *layer=2; *phimod=33; *etamod=  5; }
  else if (geographicalID=="L1_B17_S2_A7_M6A")   { *hashID=1163; *bec= 0; *layer=2; *phimod=33; *etamod=  6; }
  else if (geographicalID=="L1_B18_S1_C7_M6C")   { *hashID=1164; *bec= 0; *layer=2; *phimod=34; *etamod= -6; }
  else if (geographicalID=="L1_B18_S1_C7_M5C")   { *hashID=1165; *bec= 0; *layer=2; *phimod=34; *etamod= -5; }
  else if (geographicalID=="L1_B18_S1_C7_M4C")   { *hashID=1166; *bec= 0; *layer=2; *phimod=34; *etamod= -4; }
  else if (geographicalID=="L1_B18_S1_C7_M3C")   { *hashID=1167; *bec= 0; *layer=2; *phimod=34; *etamod= -3; }
  else if (geographicalID=="L1_B18_S1_C7_M2C")   { *hashID=1168; *bec= 0; *layer=2; *phimod=34; *etamod= -2; }
  else if (geographicalID=="L1_B18_S1_C7_M1C")   { *hashID=1169; *bec= 0; *layer=2; *phimod=34; *etamod= -1; }
  else if (geographicalID=="L1_B18_S1_C7_M0")    { *hashID=1170; *bec= 0; *layer=2; *phimod=34; *etamod=  0; }
  else if (geographicalID=="L1_B18_S1_A6_M1A")   { *hashID=1171; *bec= 0; *layer=2; *phimod=34; *etamod=  1; }
  else if (geographicalID=="L1_B18_S1_A6_M2A")   { *hashID=1172; *bec= 0; *layer=2; *phimod=34; *etamod=  2; }
  else if (geographicalID=="L1_B18_S1_A6_M3A")   { *hashID=1173; *bec= 0; *layer=2; *phimod=34; *etamod=  3; }
  else if (geographicalID=="L1_B18_S1_A6_M4A")   { *hashID=1174; *bec= 0; *layer=2; *phimod=34; *etamod=  4; }
  else if (geographicalID=="L1_B18_S1_A6_M5A")   { *hashID=1175; *bec= 0; *layer=2; *phimod=34; *etamod=  5; }
  else if (geographicalID=="L1_B18_S1_A6_M6A")   { *hashID=1176; *bec= 0; *layer=2; *phimod=34; *etamod=  6; }
  else if (geographicalID=="L1_B18_S2_C6_M6C")   { *hashID=1177; *bec= 0; *layer=2; *phimod=35; *etamod= -6; }
  else if (geographicalID=="L1_B18_S2_C6_M5C")   { *hashID=1178; *bec= 0; *layer=2; *phimod=35; *etamod= -5; }
  else if (geographicalID=="L1_B18_S2_C6_M4C")   { *hashID=1179; *bec= 0; *layer=2; *phimod=35; *etamod= -4; }
  else if (geographicalID=="L1_B18_S2_C6_M3C")   { *hashID=1180; *bec= 0; *layer=2; *phimod=35; *etamod= -3; }
  else if (geographicalID=="L1_B18_S2_C6_M2C")   { *hashID=1181; *bec= 0; *layer=2; *phimod=35; *etamod= -2; }
  else if (geographicalID=="L1_B18_S2_C6_M1C")   { *hashID=1182; *bec= 0; *layer=2; *phimod=35; *etamod= -1; }
  else if (geographicalID=="L1_B18_S2_A7_M0")    { *hashID=1183; *bec= 0; *layer=2; *phimod=35; *etamod=  0; }
  else if (geographicalID=="L1_B18_S2_A7_M1A")   { *hashID=1184; *bec= 0; *layer=2; *phimod=35; *etamod=  1; }
  else if (geographicalID=="L1_B18_S2_A7_M2A")   { *hashID=1185; *bec= 0; *layer=2; *phimod=35; *etamod=  2; }
  else if (geographicalID=="L1_B18_S2_A7_M3A")   { *hashID=1186; *bec= 0; *layer=2; *phimod=35; *etamod=  3; }
  else if (geographicalID=="L1_B18_S2_A7_M4A")   { *hashID=1187; *bec= 0; *layer=2; *phimod=35; *etamod=  4; }
  else if (geographicalID=="L1_B18_S2_A7_M5A")   { *hashID=1188; *bec= 0; *layer=2; *phimod=35; *etamod=  5; }
  else if (geographicalID=="L1_B18_S2_A7_M6A")   { *hashID=1189; *bec= 0; *layer=2; *phimod=35; *etamod=  6; }
  else if (geographicalID=="L1_B19_S1_C7_M6C")   { *hashID=1190; *bec= 0; *layer=2; *phimod=36; *etamod= -6; }
  else if (geographicalID=="L1_B19_S1_C7_M5C")   { *hashID=1191; *bec= 0; *layer=2; *phimod=36; *etamod= -5; }
  else if (geographicalID=="L1_B19_S1_C7_M4C")   { *hashID=1192; *bec= 0; *layer=2; *phimod=36; *etamod= -4; }
  else if (geographicalID=="L1_B19_S1_C7_M3C")   { *hashID=1193; *bec= 0; *layer=2; *phimod=36; *etamod= -3; }
  else if (geographicalID=="L1_B19_S1_C7_M2C")   { *hashID=1194; *bec= 0; *layer=2; *phimod=36; *etamod= -2; }
  else if (geographicalID=="L1_B19_S1_C7_M1C")   { *hashID=1195; *bec= 0; *layer=2; *phimod=36; *etamod= -1; }
  else if (geographicalID=="L1_B19_S1_C7_M0")    { *hashID=1196; *bec= 0; *layer=2; *phimod=36; *etamod=  0; }
  else if (geographicalID=="L1_B19_S1_A6_M1A")   { *hashID=1197; *bec= 0; *layer=2; *phimod=36; *etamod=  1; }
  else if (geographicalID=="L1_B19_S1_A6_M2A")   { *hashID=1198; *bec= 0; *layer=2; *phimod=36; *etamod=  2; }
  else if (geographicalID=="L1_B19_S1_A6_M3A")   { *hashID=1199; *bec= 0; *layer=2; *phimod=36; *etamod=  3; }
  else if (geographicalID=="L1_B19_S1_A6_M4A")   { *hashID=1200; *bec= 0; *layer=2; *phimod=36; *etamod=  4; }
  else if (geographicalID=="L1_B19_S1_A6_M5A")   { *hashID=1201; *bec= 0; *layer=2; *phimod=36; *etamod=  5; }
  else if (geographicalID=="L1_B19_S1_A6_M6A")   { *hashID=1202; *bec= 0; *layer=2; *phimod=36; *etamod=  6; }
  else if (geographicalID=="L1_B19_S2_C6_M6C")   { *hashID=1203; *bec= 0; *layer=2; *phimod=37; *etamod= -6; }
  else if (geographicalID=="L1_B19_S2_C6_M5C")   { *hashID=1204; *bec= 0; *layer=2; *phimod=37; *etamod= -5; }
  else if (geographicalID=="L1_B19_S2_C6_M4C")   { *hashID=1205; *bec= 0; *layer=2; *phimod=37; *etamod= -4; }
  else if (geographicalID=="L1_B19_S2_C6_M3C")   { *hashID=1206; *bec= 0; *layer=2; *phimod=37; *etamod= -3; }
  else if (geographicalID=="L1_B19_S2_C6_M2C")   { *hashID=1207; *bec= 0; *layer=2; *phimod=37; *etamod= -2; }
  else if (geographicalID=="L1_B19_S2_C6_M1C")   { *hashID=1208; *bec= 0; *layer=2; *phimod=37; *etamod= -1; }
  else if (geographicalID=="L1_B19_S2_A7_M0")    { *hashID=1209; *bec= 0; *layer=2; *phimod=37; *etamod=  0; }
  else if (geographicalID=="L1_B19_S2_A7_M1A")   { *hashID=1210; *bec= 0; *layer=2; *phimod=37; *etamod=  1; }
  else if (geographicalID=="L1_B19_S2_A7_M2A")   { *hashID=1211; *bec= 0; *layer=2; *phimod=37; *etamod=  2; }
  else if (geographicalID=="L1_B19_S2_A7_M3A")   { *hashID=1212; *bec= 0; *layer=2; *phimod=37; *etamod=  3; }
  else if (geographicalID=="L1_B19_S2_A7_M4A")   { *hashID=1213; *bec= 0; *layer=2; *phimod=37; *etamod=  4; }
  else if (geographicalID=="L1_B19_S2_A7_M5A")   { *hashID=1214; *bec= 0; *layer=2; *phimod=37; *etamod=  5; }
  else if (geographicalID=="L1_B19_S2_A7_M6A")   { *hashID=1215; *bec= 0; *layer=2; *phimod=37; *etamod=  6; }
  else if (geographicalID=="L2_B01_S2_C6_M6C")   { *hashID=1216; *bec= 0; *layer=3; *phimod= 0; *etamod= -6; }
  else if (geographicalID=="L2_B01_S2_C6_M5C")   { *hashID=1217; *bec= 0; *layer=3; *phimod= 0; *etamod= -5; }
  else if (geographicalID=="L2_B01_S2_C6_M4C")   { *hashID=1218; *bec= 0; *layer=3; *phimod= 0; *etamod= -4; }
  else if (geographicalID=="L2_B01_S2_C6_M3C")   { *hashID=1219; *bec= 0; *layer=3; *phimod= 0; *etamod= -3; }
  else if (geographicalID=="L2_B01_S2_C6_M2C")   { *hashID=1220; *bec= 0; *layer=3; *phimod= 0; *etamod= -2; }
  else if (geographicalID=="L2_B01_S2_C6_M1C")   { *hashID=1221; *bec= 0; *layer=3; *phimod= 0; *etamod= -1; }
  else if (geographicalID=="L2_B01_S2_A7_M0")    { *hashID=1222; *bec= 0; *layer=3; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="L2_B01_S2_A7_M1A")   { *hashID=1223; *bec= 0; *layer=3; *phimod= 0; *etamod=  1; }
  else if (geographicalID=="L2_B01_S2_A7_M2A")   { *hashID=1224; *bec= 0; *layer=3; *phimod= 0; *etamod=  2; }
  else if (geographicalID=="L2_B01_S2_A7_M3A")   { *hashID=1225; *bec= 0; *layer=3; *phimod= 0; *etamod=  3; }
  else if (geographicalID=="L2_B01_S2_A7_M4A")   { *hashID=1226; *bec= 0; *layer=3; *phimod= 0; *etamod=  4; }
  else if (geographicalID=="L2_B01_S2_A7_M5A")   { *hashID=1227; *bec= 0; *layer=3; *phimod= 0; *etamod=  5; }
  else if (geographicalID=="L2_B01_S2_A7_M6A")   { *hashID=1228; *bec= 0; *layer=3; *phimod= 0; *etamod=  6; }
  else if (geographicalID=="L2_B02_S1_C7_M6C")   { *hashID=1229; *bec= 0; *layer=3; *phimod= 1; *etamod= -6; }
  else if (geographicalID=="L2_B02_S1_C7_M5C")   { *hashID=1230; *bec= 0; *layer=3; *phimod= 1; *etamod= -5; }
  else if (geographicalID=="L2_B02_S1_C7_M4C")   { *hashID=1231; *bec= 0; *layer=3; *phimod= 1; *etamod= -4; }
  else if (geographicalID=="L2_B02_S1_C7_M3C")   { *hashID=1232; *bec= 0; *layer=3; *phimod= 1; *etamod= -3; }
  else if (geographicalID=="L2_B02_S1_C7_M2C")   { *hashID=1233; *bec= 0; *layer=3; *phimod= 1; *etamod= -2; }
  else if (geographicalID=="L2_B02_S1_C7_M1C")   { *hashID=1234; *bec= 0; *layer=3; *phimod= 1; *etamod= -1; }
  else if (geographicalID=="L2_B02_S1_C7_M0")    { *hashID=1235; *bec= 0; *layer=3; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="L2_B02_S1_A6_M1A")   { *hashID=1236; *bec= 0; *layer=3; *phimod= 1; *etamod=  1; }
  else if (geographicalID=="L2_B02_S1_A6_M2A")   { *hashID=1237; *bec= 0; *layer=3; *phimod= 1; *etamod=  2; }
  else if (geographicalID=="L2_B02_S1_A6_M3A")   { *hashID=1238; *bec= 0; *layer=3; *phimod= 1; *etamod=  3; }
  else if (geographicalID=="L2_B02_S1_A6_M4A")   { *hashID=1239; *bec= 0; *layer=3; *phimod= 1; *etamod=  4; }
  else if (geographicalID=="L2_B02_S1_A6_M5A")   { *hashID=1240; *bec= 0; *layer=3; *phimod= 1; *etamod=  5; }
  else if (geographicalID=="L2_B02_S1_A6_M6A")   { *hashID=1241; *bec= 0; *layer=3; *phimod= 1; *etamod=  6; }
  else if (geographicalID=="L2_B02_S2_C6_M6C")   { *hashID=1242; *bec= 0; *layer=3; *phimod= 2; *etamod= -6; }
  else if (geographicalID=="L2_B02_S2_C6_M5C")   { *hashID=1243; *bec= 0; *layer=3; *phimod= 2; *etamod= -5; }
  else if (geographicalID=="L2_B02_S2_C6_M4C")   { *hashID=1244; *bec= 0; *layer=3; *phimod= 2; *etamod= -4; }
  else if (geographicalID=="L2_B02_S2_C6_M3C")   { *hashID=1245; *bec= 0; *layer=3; *phimod= 2; *etamod= -3; }
  else if (geographicalID=="L2_B02_S2_C6_M2C")   { *hashID=1246; *bec= 0; *layer=3; *phimod= 2; *etamod= -2; }
  else if (geographicalID=="L2_B02_S2_C6_M1C")   { *hashID=1247; *bec= 0; *layer=3; *phimod= 2; *etamod= -1; }
  else if (geographicalID=="L2_B02_S2_A7_M0")    { *hashID=1248; *bec= 0; *layer=3; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="L2_B02_S2_A7_M1A")   { *hashID=1249; *bec= 0; *layer=3; *phimod= 2; *etamod=  1; }
  else if (geographicalID=="L2_B02_S2_A7_M2A")   { *hashID=1250; *bec= 0; *layer=3; *phimod= 2; *etamod=  2; }
  else if (geographicalID=="L2_B02_S2_A7_M3A")   { *hashID=1251; *bec= 0; *layer=3; *phimod= 2; *etamod=  3; }
  else if (geographicalID=="L2_B02_S2_A7_M4A")   { *hashID=1252; *bec= 0; *layer=3; *phimod= 2; *etamod=  4; }
  else if (geographicalID=="L2_B02_S2_A7_M5A")   { *hashID=1253; *bec= 0; *layer=3; *phimod= 2; *etamod=  5; }
  else if (geographicalID=="L2_B02_S2_A7_M6A")   { *hashID=1254; *bec= 0; *layer=3; *phimod= 2; *etamod=  6; }
  else if (geographicalID=="L2_B03_S1_C7_M6C")   { *hashID=1255; *bec= 0; *layer=3; *phimod= 3; *etamod= -6; }
  else if (geographicalID=="L2_B03_S1_C7_M5C")   { *hashID=1256; *bec= 0; *layer=3; *phimod= 3; *etamod= -5; }
  else if (geographicalID=="L2_B03_S1_C7_M4C")   { *hashID=1257; *bec= 0; *layer=3; *phimod= 3; *etamod= -4; }
  else if (geographicalID=="L2_B03_S1_C7_M3C")   { *hashID=1258; *bec= 0; *layer=3; *phimod= 3; *etamod= -3; }
  else if (geographicalID=="L2_B03_S1_C7_M2C")   { *hashID=1259; *bec= 0; *layer=3; *phimod= 3; *etamod= -2; }
  else if (geographicalID=="L2_B03_S1_C7_M1C")   { *hashID=1260; *bec= 0; *layer=3; *phimod= 3; *etamod= -1; }
  else if (geographicalID=="L2_B03_S1_C7_M0")    { *hashID=1261; *bec= 0; *layer=3; *phimod= 3; *etamod=  0; }
  else if (geographicalID=="L2_B03_S1_A6_M1A")   { *hashID=1262; *bec= 0; *layer=3; *phimod= 3; *etamod=  1; }
  else if (geographicalID=="L2_B03_S1_A6_M2A")   { *hashID=1263; *bec= 0; *layer=3; *phimod= 3; *etamod=  2; }
  else if (geographicalID=="L2_B03_S1_A6_M3A")   { *hashID=1264; *bec= 0; *layer=3; *phimod= 3; *etamod=  3; }
  else if (geographicalID=="L2_B03_S1_A6_M4A")   { *hashID=1265; *bec= 0; *layer=3; *phimod= 3; *etamod=  4; }
  else if (geographicalID=="L2_B03_S1_A6_M5A")   { *hashID=1266; *bec= 0; *layer=3; *phimod= 3; *etamod=  5; }
  else if (geographicalID=="L2_B03_S1_A6_M6A")   { *hashID=1267; *bec= 0; *layer=3; *phimod= 3; *etamod=  6; }
  else if (geographicalID=="L2_B03_S2_C6_M6C")   { *hashID=1268; *bec= 0; *layer=3; *phimod= 4; *etamod= -6; }
  else if (geographicalID=="L2_B03_S2_C6_M5C")   { *hashID=1269; *bec= 0; *layer=3; *phimod= 4; *etamod= -5; }
  else if (geographicalID=="L2_B03_S2_C6_M4C")   { *hashID=1270; *bec= 0; *layer=3; *phimod= 4; *etamod= -4; }
  else if (geographicalID=="L2_B03_S2_C6_M3C")   { *hashID=1271; *bec= 0; *layer=3; *phimod= 4; *etamod= -3; }
  else if (geographicalID=="L2_B03_S2_C6_M2C")   { *hashID=1272; *bec= 0; *layer=3; *phimod= 4; *etamod= -2; }
  else if (geographicalID=="L2_B03_S2_C6_M1C")   { *hashID=1273; *bec= 0; *layer=3; *phimod= 4; *etamod= -1; }
  else if (geographicalID=="L2_B03_S2_A7_M0")    { *hashID=1274; *bec= 0; *layer=3; *phimod= 4; *etamod=  0; }
  else if (geographicalID=="L2_B03_S2_A7_M1A")   { *hashID=1275; *bec= 0; *layer=3; *phimod= 4; *etamod=  1; }
  else if (geographicalID=="L2_B03_S2_A7_M2A")   { *hashID=1276; *bec= 0; *layer=3; *phimod= 4; *etamod=  2; }
  else if (geographicalID=="L2_B03_S2_A7_M3A")   { *hashID=1277; *bec= 0; *layer=3; *phimod= 4; *etamod=  3; }
  else if (geographicalID=="L2_B03_S2_A7_M4A")   { *hashID=1278; *bec= 0; *layer=3; *phimod= 4; *etamod=  4; }
  else if (geographicalID=="L2_B03_S2_A7_M5A")   { *hashID=1279; *bec= 0; *layer=3; *phimod= 4; *etamod=  5; }
  else if (geographicalID=="L2_B03_S2_A7_M6A")   { *hashID=1280; *bec= 0; *layer=3; *phimod= 4; *etamod=  6; }
  else if (geographicalID=="L2_B04_S1_C7_M6C")   { *hashID=1281; *bec= 0; *layer=3; *phimod= 5; *etamod= -6; }
  else if (geographicalID=="L2_B04_S1_C7_M5C")   { *hashID=1282; *bec= 0; *layer=3; *phimod= 5; *etamod= -5; }
  else if (geographicalID=="L2_B04_S1_C7_M4C")   { *hashID=1283; *bec= 0; *layer=3; *phimod= 5; *etamod= -4; }
  else if (geographicalID=="L2_B04_S1_C7_M3C")   { *hashID=1284; *bec= 0; *layer=3; *phimod= 5; *etamod= -3; }
  else if (geographicalID=="L2_B04_S1_C7_M2C")   { *hashID=1285; *bec= 0; *layer=3; *phimod= 5; *etamod= -2; }
  else if (geographicalID=="L2_B04_S1_C7_M1C")   { *hashID=1286; *bec= 0; *layer=3; *phimod= 5; *etamod= -1; }
  else if (geographicalID=="L2_B04_S1_C7_M0")    { *hashID=1287; *bec= 0; *layer=3; *phimod= 5; *etamod=  0; }
  else if (geographicalID=="L2_B04_S1_A6_M1A")   { *hashID=1288; *bec= 0; *layer=3; *phimod= 5; *etamod=  1; }
  else if (geographicalID=="L2_B04_S1_A6_M2A")   { *hashID=1289; *bec= 0; *layer=3; *phimod= 5; *etamod=  2; }
  else if (geographicalID=="L2_B04_S1_A6_M3A")   { *hashID=1290; *bec= 0; *layer=3; *phimod= 5; *etamod=  3; }
  else if (geographicalID=="L2_B04_S1_A6_M4A")   { *hashID=1291; *bec= 0; *layer=3; *phimod= 5; *etamod=  4; }
  else if (geographicalID=="L2_B04_S1_A6_M5A")   { *hashID=1292; *bec= 0; *layer=3; *phimod= 5; *etamod=  5; }
  else if (geographicalID=="L2_B04_S1_A6_M6A")   { *hashID=1293; *bec= 0; *layer=3; *phimod= 5; *etamod=  6; }
  else if (geographicalID=="L2_B04_S2_C6_M6C")   { *hashID=1294; *bec= 0; *layer=3; *phimod= 6; *etamod= -6; }
  else if (geographicalID=="L2_B04_S2_C6_M5C")   { *hashID=1295; *bec= 0; *layer=3; *phimod= 6; *etamod= -5; }
  else if (geographicalID=="L2_B04_S2_C6_M4C")   { *hashID=1296; *bec= 0; *layer=3; *phimod= 6; *etamod= -4; }
  else if (geographicalID=="L2_B04_S2_C6_M3C")   { *hashID=1297; *bec= 0; *layer=3; *phimod= 6; *etamod= -3; }
  else if (geographicalID=="L2_B04_S2_C6_M2C")   { *hashID=1298; *bec= 0; *layer=3; *phimod= 6; *etamod= -2; }
  else if (geographicalID=="L2_B04_S2_C6_M1C")   { *hashID=1299; *bec= 0; *layer=3; *phimod= 6; *etamod= -1; }
  else if (geographicalID=="L2_B04_S2_A7_M0")    { *hashID=1300; *bec= 0; *layer=3; *phimod= 6; *etamod=  0; }
  else if (geographicalID=="L2_B04_S2_A7_M1A")   { *hashID=1301; *bec= 0; *layer=3; *phimod= 6; *etamod=  1; }
  else if (geographicalID=="L2_B04_S2_A7_M2A")   { *hashID=1302; *bec= 0; *layer=3; *phimod= 6; *etamod=  2; }
  else if (geographicalID=="L2_B04_S2_A7_M3A")   { *hashID=1303; *bec= 0; *layer=3; *phimod= 6; *etamod=  3; }
  else if (geographicalID=="L2_B04_S2_A7_M4A")   { *hashID=1304; *bec= 0; *layer=3; *phimod= 6; *etamod=  4; }
  else if (geographicalID=="L2_B04_S2_A7_M5A")   { *hashID=1305; *bec= 0; *layer=3; *phimod= 6; *etamod=  5; }
  else if (geographicalID=="L2_B04_S2_A7_M6A")   { *hashID=1306; *bec= 0; *layer=3; *phimod= 6; *etamod=  6; }
  else if (geographicalID=="L2_B05_S1_C7_M6C")   { *hashID=1307; *bec= 0; *layer=3; *phimod= 7; *etamod= -6; }
  else if (geographicalID=="L2_B05_S1_C7_M5C")   { *hashID=1308; *bec= 0; *layer=3; *phimod= 7; *etamod= -5; }
  else if (geographicalID=="L2_B05_S1_C7_M4C")   { *hashID=1309; *bec= 0; *layer=3; *phimod= 7; *etamod= -4; }
  else if (geographicalID=="L2_B05_S1_C7_M3C")   { *hashID=1310; *bec= 0; *layer=3; *phimod= 7; *etamod= -3; }
  else if (geographicalID=="L2_B05_S1_C7_M2C")   { *hashID=1311; *bec= 0; *layer=3; *phimod= 7; *etamod= -2; }
  else if (geographicalID=="L2_B05_S1_C7_M1C")   { *hashID=1312; *bec= 0; *layer=3; *phimod= 7; *etamod= -1; }
  else if (geographicalID=="L2_B05_S1_C7_M0")    { *hashID=1313; *bec= 0; *layer=3; *phimod= 7; *etamod=  0; }
  else if (geographicalID=="L2_B05_S1_A6_M1A")   { *hashID=1314; *bec= 0; *layer=3; *phimod= 7; *etamod=  1; }
  else if (geographicalID=="L2_B05_S1_A6_M2A")   { *hashID=1315; *bec= 0; *layer=3; *phimod= 7; *etamod=  2; }
  else if (geographicalID=="L2_B05_S1_A6_M3A")   { *hashID=1316; *bec= 0; *layer=3; *phimod= 7; *etamod=  3; }
  else if (geographicalID=="L2_B05_S1_A6_M4A")   { *hashID=1317; *bec= 0; *layer=3; *phimod= 7; *etamod=  4; }
  else if (geographicalID=="L2_B05_S1_A6_M5A")   { *hashID=1318; *bec= 0; *layer=3; *phimod= 7; *etamod=  5; }
  else if (geographicalID=="L2_B05_S1_A6_M6A")   { *hashID=1319; *bec= 0; *layer=3; *phimod= 7; *etamod=  6; }
  else if (geographicalID=="L2_B05_S2_C6_M6C")   { *hashID=1320; *bec= 0; *layer=3; *phimod= 8; *etamod= -6; }
  else if (geographicalID=="L2_B05_S2_C6_M5C")   { *hashID=1321; *bec= 0; *layer=3; *phimod= 8; *etamod= -5; }
  else if (geographicalID=="L2_B05_S2_C6_M4C")   { *hashID=1322; *bec= 0; *layer=3; *phimod= 8; *etamod= -4; }
  else if (geographicalID=="L2_B05_S2_C6_M3C")   { *hashID=1323; *bec= 0; *layer=3; *phimod= 8; *etamod= -3; }
  else if (geographicalID=="L2_B05_S2_C6_M2C")   { *hashID=1324; *bec= 0; *layer=3; *phimod= 8; *etamod= -2; }
  else if (geographicalID=="L2_B05_S2_C6_M1C")   { *hashID=1325; *bec= 0; *layer=3; *phimod= 8; *etamod= -1; }
  else if (geographicalID=="L2_B05_S2_A7_M0")    { *hashID=1326; *bec= 0; *layer=3; *phimod= 8; *etamod=  0; }
  else if (geographicalID=="L2_B05_S2_A7_M1A")   { *hashID=1327; *bec= 0; *layer=3; *phimod= 8; *etamod=  1; }
  else if (geographicalID=="L2_B05_S2_A7_M2A")   { *hashID=1328; *bec= 0; *layer=3; *phimod= 8; *etamod=  2; }
  else if (geographicalID=="L2_B05_S2_A7_M3A")   { *hashID=1329; *bec= 0; *layer=3; *phimod= 8; *etamod=  3; }
  else if (geographicalID=="L2_B05_S2_A7_M4A")   { *hashID=1330; *bec= 0; *layer=3; *phimod= 8; *etamod=  4; }
  else if (geographicalID=="L2_B05_S2_A7_M5A")   { *hashID=1331; *bec= 0; *layer=3; *phimod= 8; *etamod=  5; }
  else if (geographicalID=="L2_B05_S2_A7_M6A")   { *hashID=1332; *bec= 0; *layer=3; *phimod= 8; *etamod=  6; }
  else if (geographicalID=="L2_B06_S1_C7_M6C")   { *hashID=1333; *bec= 0; *layer=3; *phimod= 9; *etamod= -6; }
  else if (geographicalID=="L2_B06_S1_C7_M5C")   { *hashID=1334; *bec= 0; *layer=3; *phimod= 9; *etamod= -5; }
  else if (geographicalID=="L2_B06_S1_C7_M4C")   { *hashID=1335; *bec= 0; *layer=3; *phimod= 9; *etamod= -4; }
  else if (geographicalID=="L2_B06_S1_C7_M3C")   { *hashID=1336; *bec= 0; *layer=3; *phimod= 9; *etamod= -3; }
  else if (geographicalID=="L2_B06_S1_C7_M2C")   { *hashID=1337; *bec= 0; *layer=3; *phimod= 9; *etamod= -2; }
  else if (geographicalID=="L2_B06_S1_C7_M1C")   { *hashID=1338; *bec= 0; *layer=3; *phimod= 9; *etamod= -1; }
  else if (geographicalID=="L2_B06_S1_C7_M0")    { *hashID=1339; *bec= 0; *layer=3; *phimod= 9; *etamod=  0; }
  else if (geographicalID=="L2_B06_S1_A6_M1A")   { *hashID=1340; *bec= 0; *layer=3; *phimod= 9; *etamod=  1; }
  else if (geographicalID=="L2_B06_S1_A6_M2A")   { *hashID=1341; *bec= 0; *layer=3; *phimod= 9; *etamod=  2; }
  else if (geographicalID=="L2_B06_S1_A6_M3A")   { *hashID=1342; *bec= 0; *layer=3; *phimod= 9; *etamod=  3; }
  else if (geographicalID=="L2_B06_S1_A6_M4A")   { *hashID=1343; *bec= 0; *layer=3; *phimod= 9; *etamod=  4; }
  else if (geographicalID=="L2_B06_S1_A6_M5A")   { *hashID=1344; *bec= 0; *layer=3; *phimod= 9; *etamod=  5; }
  else if (geographicalID=="L2_B06_S1_A6_M6A")   { *hashID=1345; *bec= 0; *layer=3; *phimod= 9; *etamod=  6; }
  else if (geographicalID=="L2_B06_S2_C6_M6C")   { *hashID=1346; *bec= 0; *layer=3; *phimod=10; *etamod= -6; }
  else if (geographicalID=="L2_B06_S2_C6_M5C")   { *hashID=1347; *bec= 0; *layer=3; *phimod=10; *etamod= -5; }
  else if (geographicalID=="L2_B06_S2_C6_M4C")   { *hashID=1348; *bec= 0; *layer=3; *phimod=10; *etamod= -4; }
  else if (geographicalID=="L2_B06_S2_C6_M3C")   { *hashID=1349; *bec= 0; *layer=3; *phimod=10; *etamod= -3; }
  else if (geographicalID=="L2_B06_S2_C6_M2C")   { *hashID=1350; *bec= 0; *layer=3; *phimod=10; *etamod= -2; }
  else if (geographicalID=="L2_B06_S2_C6_M1C")   { *hashID=1351; *bec= 0; *layer=3; *phimod=10; *etamod= -1; }
  else if (geographicalID=="L2_B06_S2_A7_M0")    { *hashID=1352; *bec= 0; *layer=3; *phimod=10; *etamod=  0; }
  else if (geographicalID=="L2_B06_S2_A7_M1A")   { *hashID=1353; *bec= 0; *layer=3; *phimod=10; *etamod=  1; }
  else if (geographicalID=="L2_B06_S2_A7_M2A")   { *hashID=1354; *bec= 0; *layer=3; *phimod=10; *etamod=  2; }
  else if (geographicalID=="L2_B06_S2_A7_M3A")   { *hashID=1355; *bec= 0; *layer=3; *phimod=10; *etamod=  3; }
  else if (geographicalID=="L2_B06_S2_A7_M4A")   { *hashID=1356; *bec= 0; *layer=3; *phimod=10; *etamod=  4; }
  else if (geographicalID=="L2_B06_S2_A7_M5A")   { *hashID=1357; *bec= 0; *layer=3; *phimod=10; *etamod=  5; }
  else if (geographicalID=="L2_B06_S2_A7_M6A")   { *hashID=1358; *bec= 0; *layer=3; *phimod=10; *etamod=  6; }
  else if (geographicalID=="L2_B07_S1_C7_M6C")   { *hashID=1359; *bec= 0; *layer=3; *phimod=11; *etamod= -6; }
  else if (geographicalID=="L2_B07_S1_C7_M5C")   { *hashID=1360; *bec= 0; *layer=3; *phimod=11; *etamod= -5; }
  else if (geographicalID=="L2_B07_S1_C7_M4C")   { *hashID=1361; *bec= 0; *layer=3; *phimod=11; *etamod= -4; }
  else if (geographicalID=="L2_B07_S1_C7_M3C")   { *hashID=1362; *bec= 0; *layer=3; *phimod=11; *etamod= -3; }
  else if (geographicalID=="L2_B07_S1_C7_M2C")   { *hashID=1363; *bec= 0; *layer=3; *phimod=11; *etamod= -2; }
  else if (geographicalID=="L2_B07_S1_C7_M1C")   { *hashID=1364; *bec= 0; *layer=3; *phimod=11; *etamod= -1; }
  else if (geographicalID=="L2_B07_S1_C7_M0")    { *hashID=1365; *bec= 0; *layer=3; *phimod=11; *etamod=  0; }
  else if (geographicalID=="L2_B07_S1_A6_M1A")   { *hashID=1366; *bec= 0; *layer=3; *phimod=11; *etamod=  1; }
  else if (geographicalID=="L2_B07_S1_A6_M2A")   { *hashID=1367; *bec= 0; *layer=3; *phimod=11; *etamod=  2; }
  else if (geographicalID=="L2_B07_S1_A6_M3A")   { *hashID=1368; *bec= 0; *layer=3; *phimod=11; *etamod=  3; }
  else if (geographicalID=="L2_B07_S1_A6_M4A")   { *hashID=1369; *bec= 0; *layer=3; *phimod=11; *etamod=  4; }
  else if (geographicalID=="L2_B07_S1_A6_M5A")   { *hashID=1370; *bec= 0; *layer=3; *phimod=11; *etamod=  5; }
  else if (geographicalID=="L2_B07_S1_A6_M6A")   { *hashID=1371; *bec= 0; *layer=3; *phimod=11; *etamod=  6; }
  else if (geographicalID=="L2_B07_S2_C6_M6C")   { *hashID=1372; *bec= 0; *layer=3; *phimod=12; *etamod= -6; }
  else if (geographicalID=="L2_B07_S2_C6_M5C")   { *hashID=1373; *bec= 0; *layer=3; *phimod=12; *etamod= -5; }
  else if (geographicalID=="L2_B07_S2_C6_M4C")   { *hashID=1374; *bec= 0; *layer=3; *phimod=12; *etamod= -4; }
  else if (geographicalID=="L2_B07_S2_C6_M3C")   { *hashID=1375; *bec= 0; *layer=3; *phimod=12; *etamod= -3; }
  else if (geographicalID=="L2_B07_S2_C6_M2C")   { *hashID=1376; *bec= 0; *layer=3; *phimod=12; *etamod= -2; }
  else if (geographicalID=="L2_B07_S2_C6_M1C")   { *hashID=1377; *bec= 0; *layer=3; *phimod=12; *etamod= -1; }
  else if (geographicalID=="L2_B07_S2_A7_M0")    { *hashID=1378; *bec= 0; *layer=3; *phimod=12; *etamod=  0; }
  else if (geographicalID=="L2_B07_S2_A7_M1A")   { *hashID=1379; *bec= 0; *layer=3; *phimod=12; *etamod=  1; }
  else if (geographicalID=="L2_B07_S2_A7_M2A")   { *hashID=1380; *bec= 0; *layer=3; *phimod=12; *etamod=  2; }
  else if (geographicalID=="L2_B07_S2_A7_M3A")   { *hashID=1381; *bec= 0; *layer=3; *phimod=12; *etamod=  3; }
  else if (geographicalID=="L2_B07_S2_A7_M4A")   { *hashID=1382; *bec= 0; *layer=3; *phimod=12; *etamod=  4; }
  else if (geographicalID=="L2_B07_S2_A7_M5A")   { *hashID=1383; *bec= 0; *layer=3; *phimod=12; *etamod=  5; }
  else if (geographicalID=="L2_B07_S2_A7_M6A")   { *hashID=1384; *bec= 0; *layer=3; *phimod=12; *etamod=  6; }
  else if (geographicalID=="L2_B08_S1_C7_M6C")   { *hashID=1385; *bec= 0; *layer=3; *phimod=13; *etamod= -6; }
  else if (geographicalID=="L2_B08_S1_C7_M5C")   { *hashID=1386; *bec= 0; *layer=3; *phimod=13; *etamod= -5; }
  else if (geographicalID=="L2_B08_S1_C7_M4C")   { *hashID=1387; *bec= 0; *layer=3; *phimod=13; *etamod= -4; }
  else if (geographicalID=="L2_B08_S1_C7_M3C")   { *hashID=1388; *bec= 0; *layer=3; *phimod=13; *etamod= -3; }
  else if (geographicalID=="L2_B08_S1_C7_M2C")   { *hashID=1389; *bec= 0; *layer=3; *phimod=13; *etamod= -2; }
  else if (geographicalID=="L2_B08_S1_C7_M1C")   { *hashID=1390; *bec= 0; *layer=3; *phimod=13; *etamod= -1; }
  else if (geographicalID=="L2_B08_S1_C7_M0")    { *hashID=1391; *bec= 0; *layer=3; *phimod=13; *etamod=  0; }
  else if (geographicalID=="L2_B08_S1_A6_M1A")   { *hashID=1392; *bec= 0; *layer=3; *phimod=13; *etamod=  1; }
  else if (geographicalID=="L2_B08_S1_A6_M2A")   { *hashID=1393; *bec= 0; *layer=3; *phimod=13; *etamod=  2; }
  else if (geographicalID=="L2_B08_S1_A6_M3A")   { *hashID=1394; *bec= 0; *layer=3; *phimod=13; *etamod=  3; }
  else if (geographicalID=="L2_B08_S1_A6_M4A")   { *hashID=1395; *bec= 0; *layer=3; *phimod=13; *etamod=  4; }
  else if (geographicalID=="L2_B08_S1_A6_M5A")   { *hashID=1396; *bec= 0; *layer=3; *phimod=13; *etamod=  5; }
  else if (geographicalID=="L2_B08_S1_A6_M6A")   { *hashID=1397; *bec= 0; *layer=3; *phimod=13; *etamod=  6; }
  else if (geographicalID=="L2_B08_S2_C6_M6C")   { *hashID=1398; *bec= 0; *layer=3; *phimod=14; *etamod= -6; }
  else if (geographicalID=="L2_B08_S2_C6_M5C")   { *hashID=1399; *bec= 0; *layer=3; *phimod=14; *etamod= -5; }
  else if (geographicalID=="L2_B08_S2_C6_M4C")   { *hashID=1400; *bec= 0; *layer=3; *phimod=14; *etamod= -4; }
  else if (geographicalID=="L2_B08_S2_C6_M3C")   { *hashID=1401; *bec= 0; *layer=3; *phimod=14; *etamod= -3; }
  else if (geographicalID=="L2_B08_S2_C6_M2C")   { *hashID=1402; *bec= 0; *layer=3; *phimod=14; *etamod= -2; }
  else if (geographicalID=="L2_B08_S2_C6_M1C")   { *hashID=1403; *bec= 0; *layer=3; *phimod=14; *etamod= -1; }
  else if (geographicalID=="L2_B08_S2_A7_M0")    { *hashID=1404; *bec= 0; *layer=3; *phimod=14; *etamod=  0; }
  else if (geographicalID=="L2_B08_S2_A7_M1A")   { *hashID=1405; *bec= 0; *layer=3; *phimod=14; *etamod=  1; }
  else if (geographicalID=="L2_B08_S2_A7_M2A")   { *hashID=1406; *bec= 0; *layer=3; *phimod=14; *etamod=  2; }
  else if (geographicalID=="L2_B08_S2_A7_M3A")   { *hashID=1407; *bec= 0; *layer=3; *phimod=14; *etamod=  3; }
  else if (geographicalID=="L2_B08_S2_A7_M4A")   { *hashID=1408; *bec= 0; *layer=3; *phimod=14; *etamod=  4; }
  else if (geographicalID=="L2_B08_S2_A7_M5A")   { *hashID=1409; *bec= 0; *layer=3; *phimod=14; *etamod=  5; }
  else if (geographicalID=="L2_B08_S2_A7_M6A")   { *hashID=1410; *bec= 0; *layer=3; *phimod=14; *etamod=  6; }
  else if (geographicalID=="L2_B09_S1_C7_M6C")   { *hashID=1411; *bec= 0; *layer=3; *phimod=15; *etamod= -6; }
  else if (geographicalID=="L2_B09_S1_C7_M5C")   { *hashID=1412; *bec= 0; *layer=3; *phimod=15; *etamod= -5; }
  else if (geographicalID=="L2_B09_S1_C7_M4C")   { *hashID=1413; *bec= 0; *layer=3; *phimod=15; *etamod= -4; }
  else if (geographicalID=="L2_B09_S1_C7_M3C")   { *hashID=1414; *bec= 0; *layer=3; *phimod=15; *etamod= -3; }
  else if (geographicalID=="L2_B09_S1_C7_M2C")   { *hashID=1415; *bec= 0; *layer=3; *phimod=15; *etamod= -2; }
  else if (geographicalID=="L2_B09_S1_C7_M1C")   { *hashID=1416; *bec= 0; *layer=3; *phimod=15; *etamod= -1; }
  else if (geographicalID=="L2_B09_S1_C7_M0")    { *hashID=1417; *bec= 0; *layer=3; *phimod=15; *etamod=  0; }
  else if (geographicalID=="L2_B09_S1_A6_M1A")   { *hashID=1418; *bec= 0; *layer=3; *phimod=15; *etamod=  1; }
  else if (geographicalID=="L2_B09_S1_A6_M2A")   { *hashID=1419; *bec= 0; *layer=3; *phimod=15; *etamod=  2; }
  else if (geographicalID=="L2_B09_S1_A6_M3A")   { *hashID=1420; *bec= 0; *layer=3; *phimod=15; *etamod=  3; }
  else if (geographicalID=="L2_B09_S1_A6_M4A")   { *hashID=1421; *bec= 0; *layer=3; *phimod=15; *etamod=  4; }
  else if (geographicalID=="L2_B09_S1_A6_M5A")   { *hashID=1422; *bec= 0; *layer=3; *phimod=15; *etamod=  5; }
  else if (geographicalID=="L2_B09_S1_A6_M6A")   { *hashID=1423; *bec= 0; *layer=3; *phimod=15; *etamod=  6; }
  else if (geographicalID=="L2_B09_S2_C6_M6C")   { *hashID=1424; *bec= 0; *layer=3; *phimod=16; *etamod= -6; }
  else if (geographicalID=="L2_B09_S2_C6_M5C")   { *hashID=1425; *bec= 0; *layer=3; *phimod=16; *etamod= -5; }
  else if (geographicalID=="L2_B09_S2_C6_M4C")   { *hashID=1426; *bec= 0; *layer=3; *phimod=16; *etamod= -4; }
  else if (geographicalID=="L2_B09_S2_C6_M3C")   { *hashID=1427; *bec= 0; *layer=3; *phimod=16; *etamod= -3; }
  else if (geographicalID=="L2_B09_S2_C6_M2C")   { *hashID=1428; *bec= 0; *layer=3; *phimod=16; *etamod= -2; }
  else if (geographicalID=="L2_B09_S2_C6_M1C")   { *hashID=1429; *bec= 0; *layer=3; *phimod=16; *etamod= -1; }
  else if (geographicalID=="L2_B09_S2_A7_M0")    { *hashID=1430; *bec= 0; *layer=3; *phimod=16; *etamod=  0; }
  else if (geographicalID=="L2_B09_S2_A7_M1A")   { *hashID=1431; *bec= 0; *layer=3; *phimod=16; *etamod=  1; }
  else if (geographicalID=="L2_B09_S2_A7_M2A")   { *hashID=1432; *bec= 0; *layer=3; *phimod=16; *etamod=  2; }
  else if (geographicalID=="L2_B09_S2_A7_M3A")   { *hashID=1433; *bec= 0; *layer=3; *phimod=16; *etamod=  3; }
  else if (geographicalID=="L2_B09_S2_A7_M4A")   { *hashID=1434; *bec= 0; *layer=3; *phimod=16; *etamod=  4; }
  else if (geographicalID=="L2_B09_S2_A7_M5A")   { *hashID=1435; *bec= 0; *layer=3; *phimod=16; *etamod=  5; }
  else if (geographicalID=="L2_B09_S2_A7_M6A")   { *hashID=1436; *bec= 0; *layer=3; *phimod=16; *etamod=  6; }
  else if (geographicalID=="L2_B10_S1_C7_M6C")   { *hashID=1437; *bec= 0; *layer=3; *phimod=17; *etamod= -6; }
  else if (geographicalID=="L2_B10_S1_C7_M5C")   { *hashID=1438; *bec= 0; *layer=3; *phimod=17; *etamod= -5; }
  else if (geographicalID=="L2_B10_S1_C7_M4C")   { *hashID=1439; *bec= 0; *layer=3; *phimod=17; *etamod= -4; }
  else if (geographicalID=="L2_B10_S1_C7_M3C")   { *hashID=1440; *bec= 0; *layer=3; *phimod=17; *etamod= -3; }
  else if (geographicalID=="L2_B10_S1_C7_M2C")   { *hashID=1441; *bec= 0; *layer=3; *phimod=17; *etamod= -2; }
  else if (geographicalID=="L2_B10_S1_C7_M1C")   { *hashID=1442; *bec= 0; *layer=3; *phimod=17; *etamod= -1; }
  else if (geographicalID=="L2_B10_S1_C7_M0")    { *hashID=1443; *bec= 0; *layer=3; *phimod=17; *etamod=  0; }
  else if (geographicalID=="L2_B10_S1_A6_M1A")   { *hashID=1444; *bec= 0; *layer=3; *phimod=17; *etamod=  1; }
  else if (geographicalID=="L2_B10_S1_A6_M2A")   { *hashID=1445; *bec= 0; *layer=3; *phimod=17; *etamod=  2; }
  else if (geographicalID=="L2_B10_S1_A6_M3A")   { *hashID=1446; *bec= 0; *layer=3; *phimod=17; *etamod=  3; }
  else if (geographicalID=="L2_B10_S1_A6_M4A")   { *hashID=1447; *bec= 0; *layer=3; *phimod=17; *etamod=  4; }
  else if (geographicalID=="L2_B10_S1_A6_M5A")   { *hashID=1448; *bec= 0; *layer=3; *phimod=17; *etamod=  5; }
  else if (geographicalID=="L2_B10_S1_A6_M6A")   { *hashID=1449; *bec= 0; *layer=3; *phimod=17; *etamod=  6; }
  else if (geographicalID=="L2_B10_S2_C6_M6C")   { *hashID=1450; *bec= 0; *layer=3; *phimod=18; *etamod= -6; }
  else if (geographicalID=="L2_B10_S2_C6_M5C")   { *hashID=1451; *bec= 0; *layer=3; *phimod=18; *etamod= -5; }
  else if (geographicalID=="L2_B10_S2_C6_M4C")   { *hashID=1452; *bec= 0; *layer=3; *phimod=18; *etamod= -4; }
  else if (geographicalID=="L2_B10_S2_C6_M3C")   { *hashID=1453; *bec= 0; *layer=3; *phimod=18; *etamod= -3; }
  else if (geographicalID=="L2_B10_S2_C6_M2C")   { *hashID=1454; *bec= 0; *layer=3; *phimod=18; *etamod= -2; }
  else if (geographicalID=="L2_B10_S2_C6_M1C")   { *hashID=1455; *bec= 0; *layer=3; *phimod=18; *etamod= -1; }
  else if (geographicalID=="L2_B10_S2_A7_M0")    { *hashID=1456; *bec= 0; *layer=3; *phimod=18; *etamod=  0; }
  else if (geographicalID=="L2_B10_S2_A7_M1A")   { *hashID=1457; *bec= 0; *layer=3; *phimod=18; *etamod=  1; }
  else if (geographicalID=="L2_B10_S2_A7_M2A")   { *hashID=1458; *bec= 0; *layer=3; *phimod=18; *etamod=  2; }
  else if (geographicalID=="L2_B10_S2_A7_M3A")   { *hashID=1459; *bec= 0; *layer=3; *phimod=18; *etamod=  3; }
  else if (geographicalID=="L2_B10_S2_A7_M4A")   { *hashID=1460; *bec= 0; *layer=3; *phimod=18; *etamod=  4; }
  else if (geographicalID=="L2_B10_S2_A7_M5A")   { *hashID=1461; *bec= 0; *layer=3; *phimod=18; *etamod=  5; }
  else if (geographicalID=="L2_B10_S2_A7_M6A")   { *hashID=1462; *bec= 0; *layer=3; *phimod=18; *etamod=  6; }
  else if (geographicalID=="L2_B11_S1_C7_M6C")   { *hashID=1463; *bec= 0; *layer=3; *phimod=19; *etamod= -6; }
  else if (geographicalID=="L2_B11_S1_C7_M5C")   { *hashID=1464; *bec= 0; *layer=3; *phimod=19; *etamod= -5; }
  else if (geographicalID=="L2_B11_S1_C7_M4C")   { *hashID=1465; *bec= 0; *layer=3; *phimod=19; *etamod= -4; }
  else if (geographicalID=="L2_B11_S1_C7_M3C")   { *hashID=1466; *bec= 0; *layer=3; *phimod=19; *etamod= -3; }
  else if (geographicalID=="L2_B11_S1_C7_M2C")   { *hashID=1467; *bec= 0; *layer=3; *phimod=19; *etamod= -2; }
  else if (geographicalID=="L2_B11_S1_C7_M1C")   { *hashID=1468; *bec= 0; *layer=3; *phimod=19; *etamod= -1; }
  else if (geographicalID=="L2_B11_S1_C7_M0")    { *hashID=1469; *bec= 0; *layer=3; *phimod=19; *etamod=  0; }
  else if (geographicalID=="L2_B11_S1_A6_M1A")   { *hashID=1470; *bec= 0; *layer=3; *phimod=19; *etamod=  1; }
  else if (geographicalID=="L2_B11_S1_A6_M2A")   { *hashID=1471; *bec= 0; *layer=3; *phimod=19; *etamod=  2; }
  else if (geographicalID=="L2_B11_S1_A6_M3A")   { *hashID=1472; *bec= 0; *layer=3; *phimod=19; *etamod=  3; }
  else if (geographicalID=="L2_B11_S1_A6_M4A")   { *hashID=1473; *bec= 0; *layer=3; *phimod=19; *etamod=  4; }
  else if (geographicalID=="L2_B11_S1_A6_M5A")   { *hashID=1474; *bec= 0; *layer=3; *phimod=19; *etamod=  5; }
  else if (geographicalID=="L2_B11_S1_A6_M6A")   { *hashID=1475; *bec= 0; *layer=3; *phimod=19; *etamod=  6; }
  else if (geographicalID=="L2_B11_S2_C6_M6C")   { *hashID=1476; *bec= 0; *layer=3; *phimod=20; *etamod= -6; }
  else if (geographicalID=="L2_B11_S2_C6_M5C")   { *hashID=1477; *bec= 0; *layer=3; *phimod=20; *etamod= -5; }
  else if (geographicalID=="L2_B11_S2_C6_M4C")   { *hashID=1478; *bec= 0; *layer=3; *phimod=20; *etamod= -4; }
  else if (geographicalID=="L2_B11_S2_C6_M3C")   { *hashID=1479; *bec= 0; *layer=3; *phimod=20; *etamod= -3; }
  else if (geographicalID=="L2_B11_S2_C6_M2C")   { *hashID=1480; *bec= 0; *layer=3; *phimod=20; *etamod= -2; }
  else if (geographicalID=="L2_B11_S2_C6_M1C")   { *hashID=1481; *bec= 0; *layer=3; *phimod=20; *etamod= -1; }
  else if (geographicalID=="L2_B11_S2_A7_M0")    { *hashID=1482; *bec= 0; *layer=3; *phimod=20; *etamod=  0; }
  else if (geographicalID=="L2_B11_S2_A7_M1A")   { *hashID=1483; *bec= 0; *layer=3; *phimod=20; *etamod=  1; }
  else if (geographicalID=="L2_B11_S2_A7_M2A")   { *hashID=1484; *bec= 0; *layer=3; *phimod=20; *etamod=  2; }
  else if (geographicalID=="L2_B11_S2_A7_M3A")   { *hashID=1485; *bec= 0; *layer=3; *phimod=20; *etamod=  3; }
  else if (geographicalID=="L2_B11_S2_A7_M4A")   { *hashID=1486; *bec= 0; *layer=3; *phimod=20; *etamod=  4; }
  else if (geographicalID=="L2_B11_S2_A7_M5A")   { *hashID=1487; *bec= 0; *layer=3; *phimod=20; *etamod=  5; }
  else if (geographicalID=="L2_B11_S2_A7_M6A")   { *hashID=1488; *bec= 0; *layer=3; *phimod=20; *etamod=  6; }
  else if (geographicalID=="L2_B12_S1_C7_M6C")   { *hashID=1489; *bec= 0; *layer=3; *phimod=21; *etamod= -6; }
  else if (geographicalID=="L2_B12_S1_C7_M5C")   { *hashID=1490; *bec= 0; *layer=3; *phimod=21; *etamod= -5; }
  else if (geographicalID=="L2_B12_S1_C7_M4C")   { *hashID=1491; *bec= 0; *layer=3; *phimod=21; *etamod= -4; }
  else if (geographicalID=="L2_B12_S1_C7_M3C")   { *hashID=1492; *bec= 0; *layer=3; *phimod=21; *etamod= -3; }
  else if (geographicalID=="L2_B12_S1_C7_M2C")   { *hashID=1493; *bec= 0; *layer=3; *phimod=21; *etamod= -2; }
  else if (geographicalID=="L2_B12_S1_C7_M1C")   { *hashID=1494; *bec= 0; *layer=3; *phimod=21; *etamod= -1; }
  else if (geographicalID=="L2_B12_S1_C7_M0")    { *hashID=1495; *bec= 0; *layer=3; *phimod=21; *etamod=  0; }
  else if (geographicalID=="L2_B12_S1_A6_M1A")   { *hashID=1496; *bec= 0; *layer=3; *phimod=21; *etamod=  1; }
  else if (geographicalID=="L2_B12_S1_A6_M2A")   { *hashID=1497; *bec= 0; *layer=3; *phimod=21; *etamod=  2; }
  else if (geographicalID=="L2_B12_S1_A6_M3A")   { *hashID=1498; *bec= 0; *layer=3; *phimod=21; *etamod=  3; }
  else if (geographicalID=="L2_B12_S1_A6_M4A")   { *hashID=1499; *bec= 0; *layer=3; *phimod=21; *etamod=  4; }
  else if (geographicalID=="L2_B12_S1_A6_M5A")   { *hashID=1500; *bec= 0; *layer=3; *phimod=21; *etamod=  5; }
  else if (geographicalID=="L2_B12_S1_A6_M6A")   { *hashID=1501; *bec= 0; *layer=3; *phimod=21; *etamod=  6; }
  else if (geographicalID=="L2_B12_S2_C6_M6C")   { *hashID=1502; *bec= 0; *layer=3; *phimod=22; *etamod= -6; }
  else if (geographicalID=="L2_B12_S2_C6_M5C")   { *hashID=1503; *bec= 0; *layer=3; *phimod=22; *etamod= -5; }
  else if (geographicalID=="L2_B12_S2_C6_M4C")   { *hashID=1504; *bec= 0; *layer=3; *phimod=22; *etamod= -4; }
  else if (geographicalID=="L2_B12_S2_C6_M3C")   { *hashID=1505; *bec= 0; *layer=3; *phimod=22; *etamod= -3; }
  else if (geographicalID=="L2_B12_S2_C6_M2C")   { *hashID=1506; *bec= 0; *layer=3; *phimod=22; *etamod= -2; }
  else if (geographicalID=="L2_B12_S2_C6_M1C")   { *hashID=1507; *bec= 0; *layer=3; *phimod=22; *etamod= -1; }
  else if (geographicalID=="L2_B12_S2_A7_M0")    { *hashID=1508; *bec= 0; *layer=3; *phimod=22; *etamod=  0; }
  else if (geographicalID=="L2_B12_S2_A7_M1A")   { *hashID=1509; *bec= 0; *layer=3; *phimod=22; *etamod=  1; }
  else if (geographicalID=="L2_B12_S2_A7_M2A")   { *hashID=1510; *bec= 0; *layer=3; *phimod=22; *etamod=  2; }
  else if (geographicalID=="L2_B12_S2_A7_M3A")   { *hashID=1511; *bec= 0; *layer=3; *phimod=22; *etamod=  3; }
  else if (geographicalID=="L2_B12_S2_A7_M4A")   { *hashID=1512; *bec= 0; *layer=3; *phimod=22; *etamod=  4; }
  else if (geographicalID=="L2_B12_S2_A7_M5A")   { *hashID=1513; *bec= 0; *layer=3; *phimod=22; *etamod=  5; }
  else if (geographicalID=="L2_B12_S2_A7_M6A")   { *hashID=1514; *bec= 0; *layer=3; *phimod=22; *etamod=  6; }
  else if (geographicalID=="L2_B13_S1_C7_M6C")   { *hashID=1515; *bec= 0; *layer=3; *phimod=23; *etamod= -6; }
  else if (geographicalID=="L2_B13_S1_C7_M5C")   { *hashID=1516; *bec= 0; *layer=3; *phimod=23; *etamod= -5; }
  else if (geographicalID=="L2_B13_S1_C7_M4C")   { *hashID=1517; *bec= 0; *layer=3; *phimod=23; *etamod= -4; }
  else if (geographicalID=="L2_B13_S1_C7_M3C")   { *hashID=1518; *bec= 0; *layer=3; *phimod=23; *etamod= -3; }
  else if (geographicalID=="L2_B13_S1_C7_M2C")   { *hashID=1519; *bec= 0; *layer=3; *phimod=23; *etamod= -2; }
  else if (geographicalID=="L2_B13_S1_C7_M1C")   { *hashID=1520; *bec= 0; *layer=3; *phimod=23; *etamod= -1; }
  else if (geographicalID=="L2_B13_S1_C7_M0")    { *hashID=1521; *bec= 0; *layer=3; *phimod=23; *etamod=  0; }
  else if (geographicalID=="L2_B13_S1_A6_M1A")   { *hashID=1522; *bec= 0; *layer=3; *phimod=23; *etamod=  1; }
  else if (geographicalID=="L2_B13_S1_A6_M2A")   { *hashID=1523; *bec= 0; *layer=3; *phimod=23; *etamod=  2; }
  else if (geographicalID=="L2_B13_S1_A6_M3A")   { *hashID=1524; *bec= 0; *layer=3; *phimod=23; *etamod=  3; }
  else if (geographicalID=="L2_B13_S1_A6_M4A")   { *hashID=1525; *bec= 0; *layer=3; *phimod=23; *etamod=  4; }
  else if (geographicalID=="L2_B13_S1_A6_M5A")   { *hashID=1526; *bec= 0; *layer=3; *phimod=23; *etamod=  5; }
  else if (geographicalID=="L2_B13_S1_A6_M6A")   { *hashID=1527; *bec= 0; *layer=3; *phimod=23; *etamod=  6; }
  else if (geographicalID=="L2_B13_S2_C6_M6C")   { *hashID=1528; *bec= 0; *layer=3; *phimod=24; *etamod= -6; }
  else if (geographicalID=="L2_B13_S2_C6_M5C")   { *hashID=1529; *bec= 0; *layer=3; *phimod=24; *etamod= -5; }
  else if (geographicalID=="L2_B13_S2_C6_M4C")   { *hashID=1530; *bec= 0; *layer=3; *phimod=24; *etamod= -4; }
  else if (geographicalID=="L2_B13_S2_C6_M3C")   { *hashID=1531; *bec= 0; *layer=3; *phimod=24; *etamod= -3; }
  else if (geographicalID=="L2_B13_S2_C6_M2C")   { *hashID=1532; *bec= 0; *layer=3; *phimod=24; *etamod= -2; }
  else if (geographicalID=="L2_B13_S2_C6_M1C")   { *hashID=1533; *bec= 0; *layer=3; *phimod=24; *etamod= -1; }
  else if (geographicalID=="L2_B13_S2_A7_M0")    { *hashID=1534; *bec= 0; *layer=3; *phimod=24; *etamod=  0; }
  else if (geographicalID=="L2_B13_S2_A7_M1A")   { *hashID=1535; *bec= 0; *layer=3; *phimod=24; *etamod=  1; }
  else if (geographicalID=="L2_B13_S2_A7_M2A")   { *hashID=1536; *bec= 0; *layer=3; *phimod=24; *etamod=  2; }
  else if (geographicalID=="L2_B13_S2_A7_M3A")   { *hashID=1537; *bec= 0; *layer=3; *phimod=24; *etamod=  3; }
  else if (geographicalID=="L2_B13_S2_A7_M4A")   { *hashID=1538; *bec= 0; *layer=3; *phimod=24; *etamod=  4; }
  else if (geographicalID=="L2_B13_S2_A7_M5A")   { *hashID=1539; *bec= 0; *layer=3; *phimod=24; *etamod=  5; }
  else if (geographicalID=="L2_B13_S2_A7_M6A")   { *hashID=1540; *bec= 0; *layer=3; *phimod=24; *etamod=  6; }
  else if (geographicalID=="L2_B14_S1_C7_M6C")   { *hashID=1541; *bec= 0; *layer=3; *phimod=25; *etamod= -6; }
  else if (geographicalID=="L2_B14_S1_C7_M5C")   { *hashID=1542; *bec= 0; *layer=3; *phimod=25; *etamod= -5; }
  else if (geographicalID=="L2_B14_S1_C7_M4C")   { *hashID=1543; *bec= 0; *layer=3; *phimod=25; *etamod= -4; }
  else if (geographicalID=="L2_B14_S1_C7_M3C")   { *hashID=1544; *bec= 0; *layer=3; *phimod=25; *etamod= -3; }
  else if (geographicalID=="L2_B14_S1_C7_M2C")   { *hashID=1545; *bec= 0; *layer=3; *phimod=25; *etamod= -2; }
  else if (geographicalID=="L2_B14_S1_C7_M1C")   { *hashID=1546; *bec= 0; *layer=3; *phimod=25; *etamod= -1; }
  else if (geographicalID=="L2_B14_S1_C7_M0")    { *hashID=1547; *bec= 0; *layer=3; *phimod=25; *etamod=  0; }
  else if (geographicalID=="L2_B14_S1_A6_M1A")   { *hashID=1548; *bec= 0; *layer=3; *phimod=25; *etamod=  1; }
  else if (geographicalID=="L2_B14_S1_A6_M2A")   { *hashID=1549; *bec= 0; *layer=3; *phimod=25; *etamod=  2; }
  else if (geographicalID=="L2_B14_S1_A6_M3A")   { *hashID=1550; *bec= 0; *layer=3; *phimod=25; *etamod=  3; }
  else if (geographicalID=="L2_B14_S1_A6_M4A")   { *hashID=1551; *bec= 0; *layer=3; *phimod=25; *etamod=  4; }
  else if (geographicalID=="L2_B14_S1_A6_M5A")   { *hashID=1552; *bec= 0; *layer=3; *phimod=25; *etamod=  5; }
  else if (geographicalID=="L2_B14_S1_A6_M6A")   { *hashID=1553; *bec= 0; *layer=3; *phimod=25; *etamod=  6; }
  else if (geographicalID=="L2_B14_S2_C6_M6C")   { *hashID=1554; *bec= 0; *layer=3; *phimod=26; *etamod= -6; }
  else if (geographicalID=="L2_B14_S2_C6_M5C")   { *hashID=1555; *bec= 0; *layer=3; *phimod=26; *etamod= -5; }
  else if (geographicalID=="L2_B14_S2_C6_M4C")   { *hashID=1556; *bec= 0; *layer=3; *phimod=26; *etamod= -4; }
  else if (geographicalID=="L2_B14_S2_C6_M3C")   { *hashID=1557; *bec= 0; *layer=3; *phimod=26; *etamod= -3; }
  else if (geographicalID=="L2_B14_S2_C6_M2C")   { *hashID=1558; *bec= 0; *layer=3; *phimod=26; *etamod= -2; }
  else if (geographicalID=="L2_B14_S2_C6_M1C")   { *hashID=1559; *bec= 0; *layer=3; *phimod=26; *etamod= -1; }
  else if (geographicalID=="L2_B14_S2_A7_M0")    { *hashID=1560; *bec= 0; *layer=3; *phimod=26; *etamod=  0; }
  else if (geographicalID=="L2_B14_S2_A7_M1A")   { *hashID=1561; *bec= 0; *layer=3; *phimod=26; *etamod=  1; }
  else if (geographicalID=="L2_B14_S2_A7_M2A")   { *hashID=1562; *bec= 0; *layer=3; *phimod=26; *etamod=  2; }
  else if (geographicalID=="L2_B14_S2_A7_M3A")   { *hashID=1563; *bec= 0; *layer=3; *phimod=26; *etamod=  3; }
  else if (geographicalID=="L2_B14_S2_A7_M4A")   { *hashID=1564; *bec= 0; *layer=3; *phimod=26; *etamod=  4; }
  else if (geographicalID=="L2_B14_S2_A7_M5A")   { *hashID=1565; *bec= 0; *layer=3; *phimod=26; *etamod=  5; }
  else if (geographicalID=="L2_B14_S2_A7_M6A")   { *hashID=1566; *bec= 0; *layer=3; *phimod=26; *etamod=  6; }
  else if (geographicalID=="L2_B15_S1_C7_M6C")   { *hashID=1567; *bec= 0; *layer=3; *phimod=27; *etamod= -6; }
  else if (geographicalID=="L2_B15_S1_C7_M5C")   { *hashID=1568; *bec= 0; *layer=3; *phimod=27; *etamod= -5; }
  else if (geographicalID=="L2_B15_S1_C7_M4C")   { *hashID=1569; *bec= 0; *layer=3; *phimod=27; *etamod= -4; }
  else if (geographicalID=="L2_B15_S1_C7_M3C")   { *hashID=1570; *bec= 0; *layer=3; *phimod=27; *etamod= -3; }
  else if (geographicalID=="L2_B15_S1_C7_M2C")   { *hashID=1571; *bec= 0; *layer=3; *phimod=27; *etamod= -2; }
  else if (geographicalID=="L2_B15_S1_C7_M1C")   { *hashID=1572; *bec= 0; *layer=3; *phimod=27; *etamod= -1; }
  else if (geographicalID=="L2_B15_S1_C7_M0")    { *hashID=1573; *bec= 0; *layer=3; *phimod=27; *etamod=  0; }
  else if (geographicalID=="L2_B15_S1_A6_M1A")   { *hashID=1574; *bec= 0; *layer=3; *phimod=27; *etamod=  1; }
  else if (geographicalID=="L2_B15_S1_A6_M2A")   { *hashID=1575; *bec= 0; *layer=3; *phimod=27; *etamod=  2; }
  else if (geographicalID=="L2_B15_S1_A6_M3A")   { *hashID=1576; *bec= 0; *layer=3; *phimod=27; *etamod=  3; }
  else if (geographicalID=="L2_B15_S1_A6_M4A")   { *hashID=1577; *bec= 0; *layer=3; *phimod=27; *etamod=  4; }
  else if (geographicalID=="L2_B15_S1_A6_M5A")   { *hashID=1578; *bec= 0; *layer=3; *phimod=27; *etamod=  5; }
  else if (geographicalID=="L2_B15_S1_A6_M6A")   { *hashID=1579; *bec= 0; *layer=3; *phimod=27; *etamod=  6; }
  else if (geographicalID=="L2_B15_S2_C6_M6C")   { *hashID=1580; *bec= 0; *layer=3; *phimod=28; *etamod= -6; }
  else if (geographicalID=="L2_B15_S2_C6_M5C")   { *hashID=1581; *bec= 0; *layer=3; *phimod=28; *etamod= -5; }
  else if (geographicalID=="L2_B15_S2_C6_M4C")   { *hashID=1582; *bec= 0; *layer=3; *phimod=28; *etamod= -4; }
  else if (geographicalID=="L2_B15_S2_C6_M3C")   { *hashID=1583; *bec= 0; *layer=3; *phimod=28; *etamod= -3; }
  else if (geographicalID=="L2_B15_S2_C6_M2C")   { *hashID=1584; *bec= 0; *layer=3; *phimod=28; *etamod= -2; }
  else if (geographicalID=="L2_B15_S2_C6_M1C")   { *hashID=1585; *bec= 0; *layer=3; *phimod=28; *etamod= -1; }
  else if (geographicalID=="L2_B15_S2_A7_M0")    { *hashID=1586; *bec= 0; *layer=3; *phimod=28; *etamod=  0; }
  else if (geographicalID=="L2_B15_S2_A7_M1A")   { *hashID=1587; *bec= 0; *layer=3; *phimod=28; *etamod=  1; }
  else if (geographicalID=="L2_B15_S2_A7_M2A")   { *hashID=1588; *bec= 0; *layer=3; *phimod=28; *etamod=  2; }
  else if (geographicalID=="L2_B15_S2_A7_M3A")   { *hashID=1589; *bec= 0; *layer=3; *phimod=28; *etamod=  3; }
  else if (geographicalID=="L2_B15_S2_A7_M4A")   { *hashID=1590; *bec= 0; *layer=3; *phimod=28; *etamod=  4; }
  else if (geographicalID=="L2_B15_S2_A7_M5A")   { *hashID=1591; *bec= 0; *layer=3; *phimod=28; *etamod=  5; }
  else if (geographicalID=="L2_B15_S2_A7_M6A")   { *hashID=1592; *bec= 0; *layer=3; *phimod=28; *etamod=  6; }
  else if (geographicalID=="L2_B16_S1_C7_M6C")   { *hashID=1593; *bec= 0; *layer=3; *phimod=29; *etamod= -6; }
  else if (geographicalID=="L2_B16_S1_C7_M5C")   { *hashID=1594; *bec= 0; *layer=3; *phimod=29; *etamod= -5; }
  else if (geographicalID=="L2_B16_S1_C7_M4C")   { *hashID=1595; *bec= 0; *layer=3; *phimod=29; *etamod= -4; }
  else if (geographicalID=="L2_B16_S1_C7_M3C")   { *hashID=1596; *bec= 0; *layer=3; *phimod=29; *etamod= -3; }
  else if (geographicalID=="L2_B16_S1_C7_M2C")   { *hashID=1597; *bec= 0; *layer=3; *phimod=29; *etamod= -2; }
  else if (geographicalID=="L2_B16_S1_C7_M1C")   { *hashID=1598; *bec= 0; *layer=3; *phimod=29; *etamod= -1; }
  else if (geographicalID=="L2_B16_S1_C7_M0")    { *hashID=1599; *bec= 0; *layer=3; *phimod=29; *etamod=  0; }
  else if (geographicalID=="L2_B16_S1_A6_M1A")   { *hashID=1600; *bec= 0; *layer=3; *phimod=29; *etamod=  1; }
  else if (geographicalID=="L2_B16_S1_A6_M2A")   { *hashID=1601; *bec= 0; *layer=3; *phimod=29; *etamod=  2; }
  else if (geographicalID=="L2_B16_S1_A6_M3A")   { *hashID=1602; *bec= 0; *layer=3; *phimod=29; *etamod=  3; }
  else if (geographicalID=="L2_B16_S1_A6_M4A")   { *hashID=1603; *bec= 0; *layer=3; *phimod=29; *etamod=  4; }
  else if (geographicalID=="L2_B16_S1_A6_M5A")   { *hashID=1604; *bec= 0; *layer=3; *phimod=29; *etamod=  5; }
  else if (geographicalID=="L2_B16_S1_A6_M6A")   { *hashID=1605; *bec= 0; *layer=3; *phimod=29; *etamod=  6; }
  else if (geographicalID=="L2_B16_S2_C6_M6C")   { *hashID=1606; *bec= 0; *layer=3; *phimod=30; *etamod= -6; }
  else if (geographicalID=="L2_B16_S2_C6_M5C")   { *hashID=1607; *bec= 0; *layer=3; *phimod=30; *etamod= -5; }
  else if (geographicalID=="L2_B16_S2_C6_M4C")   { *hashID=1608; *bec= 0; *layer=3; *phimod=30; *etamod= -4; }
  else if (geographicalID=="L2_B16_S2_C6_M3C")   { *hashID=1609; *bec= 0; *layer=3; *phimod=30; *etamod= -3; }
  else if (geographicalID=="L2_B16_S2_C6_M2C")   { *hashID=1610; *bec= 0; *layer=3; *phimod=30; *etamod= -2; }
  else if (geographicalID=="L2_B16_S2_C6_M1C")   { *hashID=1611; *bec= 0; *layer=3; *phimod=30; *etamod= -1; }
  else if (geographicalID=="L2_B16_S2_A7_M0")    { *hashID=1612; *bec= 0; *layer=3; *phimod=30; *etamod=  0; }
  else if (geographicalID=="L2_B16_S2_A7_M1A")   { *hashID=1613; *bec= 0; *layer=3; *phimod=30; *etamod=  1; }
  else if (geographicalID=="L2_B16_S2_A7_M2A")   { *hashID=1614; *bec= 0; *layer=3; *phimod=30; *etamod=  2; }
  else if (geographicalID=="L2_B16_S2_A7_M3A")   { *hashID=1615; *bec= 0; *layer=3; *phimod=30; *etamod=  3; }
  else if (geographicalID=="L2_B16_S2_A7_M4A")   { *hashID=1616; *bec= 0; *layer=3; *phimod=30; *etamod=  4; }
  else if (geographicalID=="L2_B16_S2_A7_M5A")   { *hashID=1617; *bec= 0; *layer=3; *phimod=30; *etamod=  5; }
  else if (geographicalID=="L2_B16_S2_A7_M6A")   { *hashID=1618; *bec= 0; *layer=3; *phimod=30; *etamod=  6; }
  else if (geographicalID=="L2_B17_S1_C7_M6C")   { *hashID=1619; *bec= 0; *layer=3; *phimod=31; *etamod= -6; }
  else if (geographicalID=="L2_B17_S1_C7_M5C")   { *hashID=1620; *bec= 0; *layer=3; *phimod=31; *etamod= -5; }
  else if (geographicalID=="L2_B17_S1_C7_M4C")   { *hashID=1621; *bec= 0; *layer=3; *phimod=31; *etamod= -4; }
  else if (geographicalID=="L2_B17_S1_C7_M3C")   { *hashID=1622; *bec= 0; *layer=3; *phimod=31; *etamod= -3; }
  else if (geographicalID=="L2_B17_S1_C7_M2C")   { *hashID=1623; *bec= 0; *layer=3; *phimod=31; *etamod= -2; }
  else if (geographicalID=="L2_B17_S1_C7_M1C")   { *hashID=1624; *bec= 0; *layer=3; *phimod=31; *etamod= -1; }
  else if (geographicalID=="L2_B17_S1_C7_M0")    { *hashID=1625; *bec= 0; *layer=3; *phimod=31; *etamod=  0; }
  else if (geographicalID=="L2_B17_S1_A6_M1A")   { *hashID=1626; *bec= 0; *layer=3; *phimod=31; *etamod=  1; }
  else if (geographicalID=="L2_B17_S1_A6_M2A")   { *hashID=1627; *bec= 0; *layer=3; *phimod=31; *etamod=  2; }
  else if (geographicalID=="L2_B17_S1_A6_M3A")   { *hashID=1628; *bec= 0; *layer=3; *phimod=31; *etamod=  3; }
  else if (geographicalID=="L2_B17_S1_A6_M4A")   { *hashID=1629; *bec= 0; *layer=3; *phimod=31; *etamod=  4; }
  else if (geographicalID=="L2_B17_S1_A6_M5A")   { *hashID=1630; *bec= 0; *layer=3; *phimod=31; *etamod=  5; }
  else if (geographicalID=="L2_B17_S1_A6_M6A")   { *hashID=1631; *bec= 0; *layer=3; *phimod=31; *etamod=  6; }
  else if (geographicalID=="L2_B17_S2_C6_M6C")   { *hashID=1632; *bec= 0; *layer=3; *phimod=32; *etamod= -6; }
  else if (geographicalID=="L2_B17_S2_C6_M5C")   { *hashID=1633; *bec= 0; *layer=3; *phimod=32; *etamod= -5; }
  else if (geographicalID=="L2_B17_S2_C6_M4C")   { *hashID=1634; *bec= 0; *layer=3; *phimod=32; *etamod= -4; }
  else if (geographicalID=="L2_B17_S2_C6_M3C")   { *hashID=1635; *bec= 0; *layer=3; *phimod=32; *etamod= -3; }
  else if (geographicalID=="L2_B17_S2_C6_M2C")   { *hashID=1636; *bec= 0; *layer=3; *phimod=32; *etamod= -2; }
  else if (geographicalID=="L2_B17_S2_C6_M1C")   { *hashID=1637; *bec= 0; *layer=3; *phimod=32; *etamod= -1; }
  else if (geographicalID=="L2_B17_S2_A7_M0")    { *hashID=1638; *bec= 0; *layer=3; *phimod=32; *etamod=  0; }
  else if (geographicalID=="L2_B17_S2_A7_M1A")   { *hashID=1639; *bec= 0; *layer=3; *phimod=32; *etamod=  1; }
  else if (geographicalID=="L2_B17_S2_A7_M2A")   { *hashID=1640; *bec= 0; *layer=3; *phimod=32; *etamod=  2; }
  else if (geographicalID=="L2_B17_S2_A7_M3A")   { *hashID=1641; *bec= 0; *layer=3; *phimod=32; *etamod=  3; }
  else if (geographicalID=="L2_B17_S2_A7_M4A")   { *hashID=1642; *bec= 0; *layer=3; *phimod=32; *etamod=  4; }
  else if (geographicalID=="L2_B17_S2_A7_M5A")   { *hashID=1643; *bec= 0; *layer=3; *phimod=32; *etamod=  5; }
  else if (geographicalID=="L2_B17_S2_A7_M6A")   { *hashID=1644; *bec= 0; *layer=3; *phimod=32; *etamod=  6; }
  else if (geographicalID=="L2_B18_S1_C7_M6C")   { *hashID=1645; *bec= 0; *layer=3; *phimod=33; *etamod= -6; }
  else if (geographicalID=="L2_B18_S1_C7_M5C")   { *hashID=1646; *bec= 0; *layer=3; *phimod=33; *etamod= -5; }
  else if (geographicalID=="L2_B18_S1_C7_M4C")   { *hashID=1647; *bec= 0; *layer=3; *phimod=33; *etamod= -4; }
  else if (geographicalID=="L2_B18_S1_C7_M3C")   { *hashID=1648; *bec= 0; *layer=3; *phimod=33; *etamod= -3; }
  else if (geographicalID=="L2_B18_S1_C7_M2C")   { *hashID=1649; *bec= 0; *layer=3; *phimod=33; *etamod= -2; }
  else if (geographicalID=="L2_B18_S1_C7_M1C")   { *hashID=1650; *bec= 0; *layer=3; *phimod=33; *etamod= -1; }
  else if (geographicalID=="L2_B18_S1_C7_M0")    { *hashID=1651; *bec= 0; *layer=3; *phimod=33; *etamod=  0; }
  else if (geographicalID=="L2_B18_S1_A6_M1A")   { *hashID=1652; *bec= 0; *layer=3; *phimod=33; *etamod=  1; }
  else if (geographicalID=="L2_B18_S1_A6_M2A")   { *hashID=1653; *bec= 0; *layer=3; *phimod=33; *etamod=  2; }
  else if (geographicalID=="L2_B18_S1_A6_M3A")   { *hashID=1654; *bec= 0; *layer=3; *phimod=33; *etamod=  3; }
  else if (geographicalID=="L2_B18_S1_A6_M4A")   { *hashID=1655; *bec= 0; *layer=3; *phimod=33; *etamod=  4; }
  else if (geographicalID=="L2_B18_S1_A6_M5A")   { *hashID=1656; *bec= 0; *layer=3; *phimod=33; *etamod=  5; }
  else if (geographicalID=="L2_B18_S1_A6_M6A")   { *hashID=1657; *bec= 0; *layer=3; *phimod=33; *etamod=  6; }
  else if (geographicalID=="L2_B18_S2_C6_M6C")   { *hashID=1658; *bec= 0; *layer=3; *phimod=34; *etamod= -6; }
  else if (geographicalID=="L2_B18_S2_C6_M5C")   { *hashID=1659; *bec= 0; *layer=3; *phimod=34; *etamod= -5; }
  else if (geographicalID=="L2_B18_S2_C6_M4C")   { *hashID=1660; *bec= 0; *layer=3; *phimod=34; *etamod= -4; }
  else if (geographicalID=="L2_B18_S2_C6_M3C")   { *hashID=1661; *bec= 0; *layer=3; *phimod=34; *etamod= -3; }
  else if (geographicalID=="L2_B18_S2_C6_M2C")   { *hashID=1662; *bec= 0; *layer=3; *phimod=34; *etamod= -2; }
  else if (geographicalID=="L2_B18_S2_C6_M1C")   { *hashID=1663; *bec= 0; *layer=3; *phimod=34; *etamod= -1; }
  else if (geographicalID=="L2_B18_S2_A7_M0")    { *hashID=1664; *bec= 0; *layer=3; *phimod=34; *etamod=  0; }
  else if (geographicalID=="L2_B18_S2_A7_M1A")   { *hashID=1665; *bec= 0; *layer=3; *phimod=34; *etamod=  1; }
  else if (geographicalID=="L2_B18_S2_A7_M2A")   { *hashID=1666; *bec= 0; *layer=3; *phimod=34; *etamod=  2; }
  else if (geographicalID=="L2_B18_S2_A7_M3A")   { *hashID=1667; *bec= 0; *layer=3; *phimod=34; *etamod=  3; }
  else if (geographicalID=="L2_B18_S2_A7_M4A")   { *hashID=1668; *bec= 0; *layer=3; *phimod=34; *etamod=  4; }
  else if (geographicalID=="L2_B18_S2_A7_M5A")   { *hashID=1669; *bec= 0; *layer=3; *phimod=34; *etamod=  5; }
  else if (geographicalID=="L2_B18_S2_A7_M6A")   { *hashID=1670; *bec= 0; *layer=3; *phimod=34; *etamod=  6; }
  else if (geographicalID=="L2_B19_S1_C7_M6C")   { *hashID=1671; *bec= 0; *layer=3; *phimod=35; *etamod= -6; }
  else if (geographicalID=="L2_B19_S1_C7_M5C")   { *hashID=1672; *bec= 0; *layer=3; *phimod=35; *etamod= -5; }
  else if (geographicalID=="L2_B19_S1_C7_M4C")   { *hashID=1673; *bec= 0; *layer=3; *phimod=35; *etamod= -4; }
  else if (geographicalID=="L2_B19_S1_C7_M3C")   { *hashID=1674; *bec= 0; *layer=3; *phimod=35; *etamod= -3; }
  else if (geographicalID=="L2_B19_S1_C7_M2C")   { *hashID=1675; *bec= 0; *layer=3; *phimod=35; *etamod= -2; }
  else if (geographicalID=="L2_B19_S1_C7_M1C")   { *hashID=1676; *bec= 0; *layer=3; *phimod=35; *etamod= -1; }
  else if (geographicalID=="L2_B19_S1_C7_M0")    { *hashID=1677; *bec= 0; *layer=3; *phimod=35; *etamod=  0; }
  else if (geographicalID=="L2_B19_S1_A6_M1A")   { *hashID=1678; *bec= 0; *layer=3; *phimod=35; *etamod=  1; }
  else if (geographicalID=="L2_B19_S1_A6_M2A")   { *hashID=1679; *bec= 0; *layer=3; *phimod=35; *etamod=  2; }
  else if (geographicalID=="L2_B19_S1_A6_M3A")   { *hashID=1680; *bec= 0; *layer=3; *phimod=35; *etamod=  3; }
  else if (geographicalID=="L2_B19_S1_A6_M4A")   { *hashID=1681; *bec= 0; *layer=3; *phimod=35; *etamod=  4; }
  else if (geographicalID=="L2_B19_S1_A6_M5A")   { *hashID=1682; *bec= 0; *layer=3; *phimod=35; *etamod=  5; }
  else if (geographicalID=="L2_B19_S1_A6_M6A")   { *hashID=1683; *bec= 0; *layer=3; *phimod=35; *etamod=  6; }
  else if (geographicalID=="L2_B19_S2_C6_M6C")   { *hashID=1684; *bec= 0; *layer=3; *phimod=36; *etamod= -6; }
  else if (geographicalID=="L2_B19_S2_C6_M5C")   { *hashID=1685; *bec= 0; *layer=3; *phimod=36; *etamod= -5; }
  else if (geographicalID=="L2_B19_S2_C6_M4C")   { *hashID=1686; *bec= 0; *layer=3; *phimod=36; *etamod= -4; }
  else if (geographicalID=="L2_B19_S2_C6_M3C")   { *hashID=1687; *bec= 0; *layer=3; *phimod=36; *etamod= -3; }
  else if (geographicalID=="L2_B19_S2_C6_M2C")   { *hashID=1688; *bec= 0; *layer=3; *phimod=36; *etamod= -2; }
  else if (geographicalID=="L2_B19_S2_C6_M1C")   { *hashID=1689; *bec= 0; *layer=3; *phimod=36; *etamod= -1; }
  else if (geographicalID=="L2_B19_S2_A7_M0")    { *hashID=1690; *bec= 0; *layer=3; *phimod=36; *etamod=  0; }
  else if (geographicalID=="L2_B19_S2_A7_M1A")   { *hashID=1691; *bec= 0; *layer=3; *phimod=36; *etamod=  1; }
  else if (geographicalID=="L2_B19_S2_A7_M2A")   { *hashID=1692; *bec= 0; *layer=3; *phimod=36; *etamod=  2; }
  else if (geographicalID=="L2_B19_S2_A7_M3A")   { *hashID=1693; *bec= 0; *layer=3; *phimod=36; *etamod=  3; }
  else if (geographicalID=="L2_B19_S2_A7_M4A")   { *hashID=1694; *bec= 0; *layer=3; *phimod=36; *etamod=  4; }
  else if (geographicalID=="L2_B19_S2_A7_M5A")   { *hashID=1695; *bec= 0; *layer=3; *phimod=36; *etamod=  5; }
  else if (geographicalID=="L2_B19_S2_A7_M6A")   { *hashID=1696; *bec= 0; *layer=3; *phimod=36; *etamod=  6; }
  else if (geographicalID=="L2_B20_S1_C7_M6C")   { *hashID=1697; *bec= 0; *layer=3; *phimod=37; *etamod= -6; }
  else if (geographicalID=="L2_B20_S1_C7_M5C")   { *hashID=1698; *bec= 0; *layer=3; *phimod=37; *etamod= -5; }
  else if (geographicalID=="L2_B20_S1_C7_M4C")   { *hashID=1699; *bec= 0; *layer=3; *phimod=37; *etamod= -4; }
  else if (geographicalID=="L2_B20_S1_C7_M3C")   { *hashID=1700; *bec= 0; *layer=3; *phimod=37; *etamod= -3; }
  else if (geographicalID=="L2_B20_S1_C7_M2C")   { *hashID=1701; *bec= 0; *layer=3; *phimod=37; *etamod= -2; }
  else if (geographicalID=="L2_B20_S1_C7_M1C")   { *hashID=1702; *bec= 0; *layer=3; *phimod=37; *etamod= -1; }
  else if (geographicalID=="L2_B20_S1_C7_M0")    { *hashID=1703; *bec= 0; *layer=3; *phimod=37; *etamod=  0; }
  else if (geographicalID=="L2_B20_S1_A6_M1A")   { *hashID=1704; *bec= 0; *layer=3; *phimod=37; *etamod=  1; }
  else if (geographicalID=="L2_B20_S1_A6_M2A")   { *hashID=1705; *bec= 0; *layer=3; *phimod=37; *etamod=  2; }
  else if (geographicalID=="L2_B20_S1_A6_M3A")   { *hashID=1706; *bec= 0; *layer=3; *phimod=37; *etamod=  3; }
  else if (geographicalID=="L2_B20_S1_A6_M4A")   { *hashID=1707; *bec= 0; *layer=3; *phimod=37; *etamod=  4; }
  else if (geographicalID=="L2_B20_S1_A6_M5A")   { *hashID=1708; *bec= 0; *layer=3; *phimod=37; *etamod=  5; }
  else if (geographicalID=="L2_B20_S1_A6_M6A")   { *hashID=1709; *bec= 0; *layer=3; *phimod=37; *etamod=  6; }
  else if (geographicalID=="L2_B20_S2_C6_M6C")   { *hashID=1710; *bec= 0; *layer=3; *phimod=38; *etamod= -6; }
  else if (geographicalID=="L2_B20_S2_C6_M5C")   { *hashID=1711; *bec= 0; *layer=3; *phimod=38; *etamod= -5; }
  else if (geographicalID=="L2_B20_S2_C6_M4C")   { *hashID=1712; *bec= 0; *layer=3; *phimod=38; *etamod= -4; }
  else if (geographicalID=="L2_B20_S2_C6_M3C")   { *hashID=1713; *bec= 0; *layer=3; *phimod=38; *etamod= -3; }
  else if (geographicalID=="L2_B20_S2_C6_M2C")   { *hashID=1714; *bec= 0; *layer=3; *phimod=38; *etamod= -2; }
  else if (geographicalID=="L2_B20_S2_C6_M1C")   { *hashID=1715; *bec= 0; *layer=3; *phimod=38; *etamod= -1; }
  else if (geographicalID=="L2_B20_S2_A7_M0")    { *hashID=1716; *bec= 0; *layer=3; *phimod=38; *etamod=  0; }
  else if (geographicalID=="L2_B20_S2_A7_M1A")   { *hashID=1717; *bec= 0; *layer=3; *phimod=38; *etamod=  1; }
  else if (geographicalID=="L2_B20_S2_A7_M2A")   { *hashID=1718; *bec= 0; *layer=3; *phimod=38; *etamod=  2; }
  else if (geographicalID=="L2_B20_S2_A7_M3A")   { *hashID=1719; *bec= 0; *layer=3; *phimod=38; *etamod=  3; }
  else if (geographicalID=="L2_B20_S2_A7_M4A")   { *hashID=1720; *bec= 0; *layer=3; *phimod=38; *etamod=  4; }
  else if (geographicalID=="L2_B20_S2_A7_M5A")   { *hashID=1721; *bec= 0; *layer=3; *phimod=38; *etamod=  5; }
  else if (geographicalID=="L2_B20_S2_A7_M6A")   { *hashID=1722; *bec= 0; *layer=3; *phimod=38; *etamod=  6; }
  else if (geographicalID=="L2_B21_S1_C7_M6C")   { *hashID=1723; *bec= 0; *layer=3; *phimod=39; *etamod= -6; }
  else if (geographicalID=="L2_B21_S1_C7_M5C")   { *hashID=1724; *bec= 0; *layer=3; *phimod=39; *etamod= -5; }
  else if (geographicalID=="L2_B21_S1_C7_M4C")   { *hashID=1725; *bec= 0; *layer=3; *phimod=39; *etamod= -4; }
  else if (geographicalID=="L2_B21_S1_C7_M3C")   { *hashID=1726; *bec= 0; *layer=3; *phimod=39; *etamod= -3; }
  else if (geographicalID=="L2_B21_S1_C7_M2C")   { *hashID=1727; *bec= 0; *layer=3; *phimod=39; *etamod= -2; }
  else if (geographicalID=="L2_B21_S1_C7_M1C")   { *hashID=1728; *bec= 0; *layer=3; *phimod=39; *etamod= -1; }
  else if (geographicalID=="L2_B21_S1_C7_M0")    { *hashID=1729; *bec= 0; *layer=3; *phimod=39; *etamod=  0; }
  else if (geographicalID=="L2_B21_S1_A6_M1A")   { *hashID=1730; *bec= 0; *layer=3; *phimod=39; *etamod=  1; }
  else if (geographicalID=="L2_B21_S1_A6_M2A")   { *hashID=1731; *bec= 0; *layer=3; *phimod=39; *etamod=  2; }
  else if (geographicalID=="L2_B21_S1_A6_M3A")   { *hashID=1732; *bec= 0; *layer=3; *phimod=39; *etamod=  3; }
  else if (geographicalID=="L2_B21_S1_A6_M4A")   { *hashID=1733; *bec= 0; *layer=3; *phimod=39; *etamod=  4; }
  else if (geographicalID=="L2_B21_S1_A6_M5A")   { *hashID=1734; *bec= 0; *layer=3; *phimod=39; *etamod=  5; }
  else if (geographicalID=="L2_B21_S1_A6_M6A")   { *hashID=1735; *bec= 0; *layer=3; *phimod=39; *etamod=  6; }
  else if (geographicalID=="L2_B21_S2_C6_M6C")   { *hashID=1736; *bec= 0; *layer=3; *phimod=40; *etamod= -6; }
  else if (geographicalID=="L2_B21_S2_C6_M5C")   { *hashID=1737; *bec= 0; *layer=3; *phimod=40; *etamod= -5; }
  else if (geographicalID=="L2_B21_S2_C6_M4C")   { *hashID=1738; *bec= 0; *layer=3; *phimod=40; *etamod= -4; }
  else if (geographicalID=="L2_B21_S2_C6_M3C")   { *hashID=1739; *bec= 0; *layer=3; *phimod=40; *etamod= -3; }
  else if (geographicalID=="L2_B21_S2_C6_M2C")   { *hashID=1740; *bec= 0; *layer=3; *phimod=40; *etamod= -2; }
  else if (geographicalID=="L2_B21_S2_C6_M1C")   { *hashID=1741; *bec= 0; *layer=3; *phimod=40; *etamod= -1; }
  else if (geographicalID=="L2_B21_S2_A7_M0")    { *hashID=1742; *bec= 0; *layer=3; *phimod=40; *etamod=  0; }
  else if (geographicalID=="L2_B21_S2_A7_M1A")   { *hashID=1743; *bec= 0; *layer=3; *phimod=40; *etamod=  1; }
  else if (geographicalID=="L2_B21_S2_A7_M2A")   { *hashID=1744; *bec= 0; *layer=3; *phimod=40; *etamod=  2; }
  else if (geographicalID=="L2_B21_S2_A7_M3A")   { *hashID=1745; *bec= 0; *layer=3; *phimod=40; *etamod=  3; }
  else if (geographicalID=="L2_B21_S2_A7_M4A")   { *hashID=1746; *bec= 0; *layer=3; *phimod=40; *etamod=  4; }
  else if (geographicalID=="L2_B21_S2_A7_M5A")   { *hashID=1747; *bec= 0; *layer=3; *phimod=40; *etamod=  5; }
  else if (geographicalID=="L2_B21_S2_A7_M6A")   { *hashID=1748; *bec= 0; *layer=3; *phimod=40; *etamod=  6; }
  else if (geographicalID=="L2_B22_S1_C7_M6C")   { *hashID=1749; *bec= 0; *layer=3; *phimod=41; *etamod= -6; }
  else if (geographicalID=="L2_B22_S1_C7_M5C")   { *hashID=1750; *bec= 0; *layer=3; *phimod=41; *etamod= -5; }
  else if (geographicalID=="L2_B22_S1_C7_M4C")   { *hashID=1751; *bec= 0; *layer=3; *phimod=41; *etamod= -4; }
  else if (geographicalID=="L2_B22_S1_C7_M3C")   { *hashID=1752; *bec= 0; *layer=3; *phimod=41; *etamod= -3; }
  else if (geographicalID=="L2_B22_S1_C7_M2C")   { *hashID=1753; *bec= 0; *layer=3; *phimod=41; *etamod= -2; }
  else if (geographicalID=="L2_B22_S1_C7_M1C")   { *hashID=1754; *bec= 0; *layer=3; *phimod=41; *etamod= -1; }
  else if (geographicalID=="L2_B22_S1_C7_M0")    { *hashID=1755; *bec= 0; *layer=3; *phimod=41; *etamod=  0; }
  else if (geographicalID=="L2_B22_S1_A6_M1A")   { *hashID=1756; *bec= 0; *layer=3; *phimod=41; *etamod=  1; }
  else if (geographicalID=="L2_B22_S1_A6_M2A")   { *hashID=1757; *bec= 0; *layer=3; *phimod=41; *etamod=  2; }
  else if (geographicalID=="L2_B22_S1_A6_M3A")   { *hashID=1758; *bec= 0; *layer=3; *phimod=41; *etamod=  3; }
  else if (geographicalID=="L2_B22_S1_A6_M4A")   { *hashID=1759; *bec= 0; *layer=3; *phimod=41; *etamod=  4; }
  else if (geographicalID=="L2_B22_S1_A6_M5A")   { *hashID=1760; *bec= 0; *layer=3; *phimod=41; *etamod=  5; }
  else if (geographicalID=="L2_B22_S1_A6_M6A")   { *hashID=1761; *bec= 0; *layer=3; *phimod=41; *etamod=  6; }
  else if (geographicalID=="L2_B22_S2_C6_M6C")   { *hashID=1762; *bec= 0; *layer=3; *phimod=42; *etamod= -6; }
  else if (geographicalID=="L2_B22_S2_C6_M5C")   { *hashID=1763; *bec= 0; *layer=3; *phimod=42; *etamod= -5; }
  else if (geographicalID=="L2_B22_S2_C6_M4C")   { *hashID=1764; *bec= 0; *layer=3; *phimod=42; *etamod= -4; }
  else if (geographicalID=="L2_B22_S2_C6_M3C")   { *hashID=1765; *bec= 0; *layer=3; *phimod=42; *etamod= -3; }
  else if (geographicalID=="L2_B22_S2_C6_M2C")   { *hashID=1766; *bec= 0; *layer=3; *phimod=42; *etamod= -2; }
  else if (geographicalID=="L2_B22_S2_C6_M1C")   { *hashID=1767; *bec= 0; *layer=3; *phimod=42; *etamod= -1; }
  else if (geographicalID=="L2_B22_S2_A7_M0")    { *hashID=1768; *bec= 0; *layer=3; *phimod=42; *etamod=  0; }
  else if (geographicalID=="L2_B22_S2_A7_M1A")   { *hashID=1769; *bec= 0; *layer=3; *phimod=42; *etamod=  1; }
  else if (geographicalID=="L2_B22_S2_A7_M2A")   { *hashID=1770; *bec= 0; *layer=3; *phimod=42; *etamod=  2; }
  else if (geographicalID=="L2_B22_S2_A7_M3A")   { *hashID=1771; *bec= 0; *layer=3; *phimod=42; *etamod=  3; }
  else if (geographicalID=="L2_B22_S2_A7_M4A")   { *hashID=1772; *bec= 0; *layer=3; *phimod=42; *etamod=  4; }
  else if (geographicalID=="L2_B22_S2_A7_M5A")   { *hashID=1773; *bec= 0; *layer=3; *phimod=42; *etamod=  5; }
  else if (geographicalID=="L2_B22_S2_A7_M6A")   { *hashID=1774; *bec= 0; *layer=3; *phimod=42; *etamod=  6; }
  else if (geographicalID=="L2_B23_S1_C7_M6C")   { *hashID=1775; *bec= 0; *layer=3; *phimod=43; *etamod= -6; }
  else if (geographicalID=="L2_B23_S1_C7_M5C")   { *hashID=1776; *bec= 0; *layer=3; *phimod=43; *etamod= -5; }
  else if (geographicalID=="L2_B23_S1_C7_M4C")   { *hashID=1777; *bec= 0; *layer=3; *phimod=43; *etamod= -4; }
  else if (geographicalID=="L2_B23_S1_C7_M3C")   { *hashID=1778; *bec= 0; *layer=3; *phimod=43; *etamod= -3; }
  else if (geographicalID=="L2_B23_S1_C7_M2C")   { *hashID=1779; *bec= 0; *layer=3; *phimod=43; *etamod= -2; }
  else if (geographicalID=="L2_B23_S1_C7_M1C")   { *hashID=1780; *bec= 0; *layer=3; *phimod=43; *etamod= -1; }
  else if (geographicalID=="L2_B23_S1_C7_M0")    { *hashID=1781; *bec= 0; *layer=3; *phimod=43; *etamod=  0; }
  else if (geographicalID=="L2_B23_S1_A6_M1A")   { *hashID=1782; *bec= 0; *layer=3; *phimod=43; *etamod=  1; }
  else if (geographicalID=="L2_B23_S1_A6_M2A")   { *hashID=1783; *bec= 0; *layer=3; *phimod=43; *etamod=  2; }
  else if (geographicalID=="L2_B23_S1_A6_M3A")   { *hashID=1784; *bec= 0; *layer=3; *phimod=43; *etamod=  3; }
  else if (geographicalID=="L2_B23_S1_A6_M4A")   { *hashID=1785; *bec= 0; *layer=3; *phimod=43; *etamod=  4; }
  else if (geographicalID=="L2_B23_S1_A6_M5A")   { *hashID=1786; *bec= 0; *layer=3; *phimod=43; *etamod=  5; }
  else if (geographicalID=="L2_B23_S1_A6_M6A")   { *hashID=1787; *bec= 0; *layer=3; *phimod=43; *etamod=  6; }
  else if (geographicalID=="L2_B23_S2_C6_M6C")   { *hashID=1788; *bec= 0; *layer=3; *phimod=44; *etamod= -6; }
  else if (geographicalID=="L2_B23_S2_C6_M5C")   { *hashID=1789; *bec= 0; *layer=3; *phimod=44; *etamod= -5; }
  else if (geographicalID=="L2_B23_S2_C6_M4C")   { *hashID=1790; *bec= 0; *layer=3; *phimod=44; *etamod= -4; }
  else if (geographicalID=="L2_B23_S2_C6_M3C")   { *hashID=1791; *bec= 0; *layer=3; *phimod=44; *etamod= -3; }
  else if (geographicalID=="L2_B23_S2_C6_M2C")   { *hashID=1792; *bec= 0; *layer=3; *phimod=44; *etamod= -2; }
  else if (geographicalID=="L2_B23_S2_C6_M1C")   { *hashID=1793; *bec= 0; *layer=3; *phimod=44; *etamod= -1; }
  else if (geographicalID=="L2_B23_S2_A7_M0")    { *hashID=1794; *bec= 0; *layer=3; *phimod=44; *etamod=  0; }
  else if (geographicalID=="L2_B23_S2_A7_M1A")   { *hashID=1795; *bec= 0; *layer=3; *phimod=44; *etamod=  1; }
  else if (geographicalID=="L2_B23_S2_A7_M2A")   { *hashID=1796; *bec= 0; *layer=3; *phimod=44; *etamod=  2; }
  else if (geographicalID=="L2_B23_S2_A7_M3A")   { *hashID=1797; *bec= 0; *layer=3; *phimod=44; *etamod=  3; }
  else if (geographicalID=="L2_B23_S2_A7_M4A")   { *hashID=1798; *bec= 0; *layer=3; *phimod=44; *etamod=  4; }
  else if (geographicalID=="L2_B23_S2_A7_M5A")   { *hashID=1799; *bec= 0; *layer=3; *phimod=44; *etamod=  5; }
  else if (geographicalID=="L2_B23_S2_A7_M6A")   { *hashID=1800; *bec= 0; *layer=3; *phimod=44; *etamod=  6; }
  else if (geographicalID=="L2_B24_S1_C7_M6C")   { *hashID=1801; *bec= 0; *layer=3; *phimod=45; *etamod= -6; }
  else if (geographicalID=="L2_B24_S1_C7_M5C")   { *hashID=1802; *bec= 0; *layer=3; *phimod=45; *etamod= -5; }
  else if (geographicalID=="L2_B24_S1_C7_M4C")   { *hashID=1803; *bec= 0; *layer=3; *phimod=45; *etamod= -4; }
  else if (geographicalID=="L2_B24_S1_C7_M3C")   { *hashID=1804; *bec= 0; *layer=3; *phimod=45; *etamod= -3; }
  else if (geographicalID=="L2_B24_S1_C7_M2C")   { *hashID=1805; *bec= 0; *layer=3; *phimod=45; *etamod= -2; }
  else if (geographicalID=="L2_B24_S1_C7_M1C")   { *hashID=1806; *bec= 0; *layer=3; *phimod=45; *etamod= -1; }
  else if (geographicalID=="L2_B24_S1_C7_M0")    { *hashID=1807; *bec= 0; *layer=3; *phimod=45; *etamod=  0; }
  else if (geographicalID=="L2_B24_S1_A6_M1A")   { *hashID=1808; *bec= 0; *layer=3; *phimod=45; *etamod=  1; }
  else if (geographicalID=="L2_B24_S1_A6_M2A")   { *hashID=1809; *bec= 0; *layer=3; *phimod=45; *etamod=  2; }
  else if (geographicalID=="L2_B24_S1_A6_M3A")   { *hashID=1810; *bec= 0; *layer=3; *phimod=45; *etamod=  3; }
  else if (geographicalID=="L2_B24_S1_A6_M4A")   { *hashID=1811; *bec= 0; *layer=3; *phimod=45; *etamod=  4; }
  else if (geographicalID=="L2_B24_S1_A6_M5A")   { *hashID=1812; *bec= 0; *layer=3; *phimod=45; *etamod=  5; }
  else if (geographicalID=="L2_B24_S1_A6_M6A")   { *hashID=1813; *bec= 0; *layer=3; *phimod=45; *etamod=  6; }
  else if (geographicalID=="L2_B24_S2_C6_M6C")   { *hashID=1814; *bec= 0; *layer=3; *phimod=46; *etamod= -6; }
  else if (geographicalID=="L2_B24_S2_C6_M5C")   { *hashID=1815; *bec= 0; *layer=3; *phimod=46; *etamod= -5; }
  else if (geographicalID=="L2_B24_S2_C6_M4C")   { *hashID=1816; *bec= 0; *layer=3; *phimod=46; *etamod= -4; }
  else if (geographicalID=="L2_B24_S2_C6_M3C")   { *hashID=1817; *bec= 0; *layer=3; *phimod=46; *etamod= -3; }
  else if (geographicalID=="L2_B24_S2_C6_M2C")   { *hashID=1818; *bec= 0; *layer=3; *phimod=46; *etamod= -2; }
  else if (geographicalID=="L2_B24_S2_C6_M1C")   { *hashID=1819; *bec= 0; *layer=3; *phimod=46; *etamod= -1; }
  else if (geographicalID=="L2_B24_S2_A7_M0")    { *hashID=1820; *bec= 0; *layer=3; *phimod=46; *etamod=  0; }
  else if (geographicalID=="L2_B24_S2_A7_M1A")   { *hashID=1821; *bec= 0; *layer=3; *phimod=46; *etamod=  1; }
  else if (geographicalID=="L2_B24_S2_A7_M2A")   { *hashID=1822; *bec= 0; *layer=3; *phimod=46; *etamod=  2; }
  else if (geographicalID=="L2_B24_S2_A7_M3A")   { *hashID=1823; *bec= 0; *layer=3; *phimod=46; *etamod=  3; }
  else if (geographicalID=="L2_B24_S2_A7_M4A")   { *hashID=1824; *bec= 0; *layer=3; *phimod=46; *etamod=  4; }
  else if (geographicalID=="L2_B24_S2_A7_M5A")   { *hashID=1825; *bec= 0; *layer=3; *phimod=46; *etamod=  5; }
  else if (geographicalID=="L2_B24_S2_A7_M6A")   { *hashID=1826; *bec= 0; *layer=3; *phimod=46; *etamod=  6; }
  else if (geographicalID=="L2_B25_S1_C7_M6C")   { *hashID=1827; *bec= 0; *layer=3; *phimod=47; *etamod= -6; }
  else if (geographicalID=="L2_B25_S1_C7_M5C")   { *hashID=1828; *bec= 0; *layer=3; *phimod=47; *etamod= -5; }
  else if (geographicalID=="L2_B25_S1_C7_M4C")   { *hashID=1829; *bec= 0; *layer=3; *phimod=47; *etamod= -4; }
  else if (geographicalID=="L2_B25_S1_C7_M3C")   { *hashID=1830; *bec= 0; *layer=3; *phimod=47; *etamod= -3; }
  else if (geographicalID=="L2_B25_S1_C7_M2C")   { *hashID=1831; *bec= 0; *layer=3; *phimod=47; *etamod= -2; }
  else if (geographicalID=="L2_B25_S1_C7_M1C")   { *hashID=1832; *bec= 0; *layer=3; *phimod=47; *etamod= -1; }
  else if (geographicalID=="L2_B25_S1_C7_M0")    { *hashID=1833; *bec= 0; *layer=3; *phimod=47; *etamod=  0; }
  else if (geographicalID=="L2_B25_S1_A6_M1A")   { *hashID=1834; *bec= 0; *layer=3; *phimod=47; *etamod=  1; }
  else if (geographicalID=="L2_B25_S1_A6_M2A")   { *hashID=1835; *bec= 0; *layer=3; *phimod=47; *etamod=  2; }
  else if (geographicalID=="L2_B25_S1_A6_M3A")   { *hashID=1836; *bec= 0; *layer=3; *phimod=47; *etamod=  3; }
  else if (geographicalID=="L2_B25_S1_A6_M4A")   { *hashID=1837; *bec= 0; *layer=3; *phimod=47; *etamod=  4; }
  else if (geographicalID=="L2_B25_S1_A6_M5A")   { *hashID=1838; *bec= 0; *layer=3; *phimod=47; *etamod=  5; }
  else if (geographicalID=="L2_B25_S1_A6_M6A")   { *hashID=1839; *bec= 0; *layer=3; *phimod=47; *etamod=  6; }
  else if (geographicalID=="L2_B25_S2_C6_M6C")   { *hashID=1840; *bec= 0; *layer=3; *phimod=48; *etamod= -6; }
  else if (geographicalID=="L2_B25_S2_C6_M5C")   { *hashID=1841; *bec= 0; *layer=3; *phimod=48; *etamod= -5; }
  else if (geographicalID=="L2_B25_S2_C6_M4C")   { *hashID=1842; *bec= 0; *layer=3; *phimod=48; *etamod= -4; }
  else if (geographicalID=="L2_B25_S2_C6_M3C")   { *hashID=1843; *bec= 0; *layer=3; *phimod=48; *etamod= -3; }
  else if (geographicalID=="L2_B25_S2_C6_M2C")   { *hashID=1844; *bec= 0; *layer=3; *phimod=48; *etamod= -2; }
  else if (geographicalID=="L2_B25_S2_C6_M1C")   { *hashID=1845; *bec= 0; *layer=3; *phimod=48; *etamod= -1; }
  else if (geographicalID=="L2_B25_S2_A7_M0")    { *hashID=1846; *bec= 0; *layer=3; *phimod=48; *etamod=  0; }
  else if (geographicalID=="L2_B25_S2_A7_M1A")   { *hashID=1847; *bec= 0; *layer=3; *phimod=48; *etamod=  1; }
  else if (geographicalID=="L2_B25_S2_A7_M2A")   { *hashID=1848; *bec= 0; *layer=3; *phimod=48; *etamod=  2; }
  else if (geographicalID=="L2_B25_S2_A7_M3A")   { *hashID=1849; *bec= 0; *layer=3; *phimod=48; *etamod=  3; }
  else if (geographicalID=="L2_B25_S2_A7_M4A")   { *hashID=1850; *bec= 0; *layer=3; *phimod=48; *etamod=  4; }
  else if (geographicalID=="L2_B25_S2_A7_M5A")   { *hashID=1851; *bec= 0; *layer=3; *phimod=48; *etamod=  5; }
  else if (geographicalID=="L2_B25_S2_A7_M6A")   { *hashID=1852; *bec= 0; *layer=3; *phimod=48; *etamod=  6; }
  else if (geographicalID=="L2_B26_S1_C7_M6C")   { *hashID=1853; *bec= 0; *layer=3; *phimod=49; *etamod= -6; }
  else if (geographicalID=="L2_B26_S1_C7_M5C")   { *hashID=1854; *bec= 0; *layer=3; *phimod=49; *etamod= -5; }
  else if (geographicalID=="L2_B26_S1_C7_M4C")   { *hashID=1855; *bec= 0; *layer=3; *phimod=49; *etamod= -4; }
  else if (geographicalID=="L2_B26_S1_C7_M3C")   { *hashID=1856; *bec= 0; *layer=3; *phimod=49; *etamod= -3; }
  else if (geographicalID=="L2_B26_S1_C7_M2C")   { *hashID=1857; *bec= 0; *layer=3; *phimod=49; *etamod= -2; }
  else if (geographicalID=="L2_B26_S1_C7_M1C")   { *hashID=1858; *bec= 0; *layer=3; *phimod=49; *etamod= -1; }
  else if (geographicalID=="L2_B26_S1_C7_M0")    { *hashID=1859; *bec= 0; *layer=3; *phimod=49; *etamod=  0; }
  else if (geographicalID=="L2_B26_S1_A6_M1A")   { *hashID=1860; *bec= 0; *layer=3; *phimod=49; *etamod=  1; }
  else if (geographicalID=="L2_B26_S1_A6_M2A")   { *hashID=1861; *bec= 0; *layer=3; *phimod=49; *etamod=  2; }
  else if (geographicalID=="L2_B26_S1_A6_M3A")   { *hashID=1862; *bec= 0; *layer=3; *phimod=49; *etamod=  3; }
  else if (geographicalID=="L2_B26_S1_A6_M4A")   { *hashID=1863; *bec= 0; *layer=3; *phimod=49; *etamod=  4; }
  else if (geographicalID=="L2_B26_S1_A6_M5A")   { *hashID=1864; *bec= 0; *layer=3; *phimod=49; *etamod=  5; }
  else if (geographicalID=="L2_B26_S1_A6_M6A")   { *hashID=1865; *bec= 0; *layer=3; *phimod=49; *etamod=  6; }
  else if (geographicalID=="L2_B26_S2_C6_M6C")   { *hashID=1866; *bec= 0; *layer=3; *phimod=50; *etamod= -6; }
  else if (geographicalID=="L2_B26_S2_C6_M5C")   { *hashID=1867; *bec= 0; *layer=3; *phimod=50; *etamod= -5; }
  else if (geographicalID=="L2_B26_S2_C6_M4C")   { *hashID=1868; *bec= 0; *layer=3; *phimod=50; *etamod= -4; }
  else if (geographicalID=="L2_B26_S2_C6_M3C")   { *hashID=1869; *bec= 0; *layer=3; *phimod=50; *etamod= -3; }
  else if (geographicalID=="L2_B26_S2_C6_M2C")   { *hashID=1870; *bec= 0; *layer=3; *phimod=50; *etamod= -2; }
  else if (geographicalID=="L2_B26_S2_C6_M1C")   { *hashID=1871; *bec= 0; *layer=3; *phimod=50; *etamod= -1; }
  else if (geographicalID=="L2_B26_S2_A7_M0")    { *hashID=1872; *bec= 0; *layer=3; *phimod=50; *etamod=  0; }
  else if (geographicalID=="L2_B26_S2_A7_M1A")   { *hashID=1873; *bec= 0; *layer=3; *phimod=50; *etamod=  1; }
  else if (geographicalID=="L2_B26_S2_A7_M2A")   { *hashID=1874; *bec= 0; *layer=3; *phimod=50; *etamod=  2; }
  else if (geographicalID=="L2_B26_S2_A7_M3A")   { *hashID=1875; *bec= 0; *layer=3; *phimod=50; *etamod=  3; }
  else if (geographicalID=="L2_B26_S2_A7_M4A")   { *hashID=1876; *bec= 0; *layer=3; *phimod=50; *etamod=  4; }
  else if (geographicalID=="L2_B26_S2_A7_M5A")   { *hashID=1877; *bec= 0; *layer=3; *phimod=50; *etamod=  5; }
  else if (geographicalID=="L2_B26_S2_A7_M6A")   { *hashID=1878; *bec= 0; *layer=3; *phimod=50; *etamod=  6; }
  else if (geographicalID=="L2_B01_S1_C7_M6C")   { *hashID=1879; *bec= 0; *layer=3; *phimod=51; *etamod= -6; }
  else if (geographicalID=="L2_B01_S1_C7_M5C")   { *hashID=1880; *bec= 0; *layer=3; *phimod=51; *etamod= -5; }
  else if (geographicalID=="L2_B01_S1_C7_M4C")   { *hashID=1881; *bec= 0; *layer=3; *phimod=51; *etamod= -4; }
  else if (geographicalID=="L2_B01_S1_C7_M3C")   { *hashID=1882; *bec= 0; *layer=3; *phimod=51; *etamod= -3; }
  else if (geographicalID=="L2_B01_S1_C7_M2C")   { *hashID=1883; *bec= 0; *layer=3; *phimod=51; *etamod= -2; }
  else if (geographicalID=="L2_B01_S1_C7_M1C")   { *hashID=1884; *bec= 0; *layer=3; *phimod=51; *etamod= -1; }
  else if (geographicalID=="L2_B01_S1_C7_M0")    { *hashID=1885; *bec= 0; *layer=3; *phimod=51; *etamod=  0; }
  else if (geographicalID=="L2_B01_S1_A6_M1A")   { *hashID=1886; *bec= 0; *layer=3; *phimod=51; *etamod=  1; }
  else if (geographicalID=="L2_B01_S1_A6_M2A")   { *hashID=1887; *bec= 0; *layer=3; *phimod=51; *etamod=  2; }
  else if (geographicalID=="L2_B01_S1_A6_M3A")   { *hashID=1888; *bec= 0; *layer=3; *phimod=51; *etamod=  3; }
  else if (geographicalID=="L2_B01_S1_A6_M4A")   { *hashID=1889; *bec= 0; *layer=3; *phimod=51; *etamod=  4; }
  else if (geographicalID=="L2_B01_S1_A6_M5A")   { *hashID=1890; *bec= 0; *layer=3; *phimod=51; *etamod=  5; }
  else if (geographicalID=="L2_B01_S1_A6_M6A")   { *hashID=1891; *bec= 0; *layer=3; *phimod=51; *etamod=  6; }
  else if (geographicalID=="D1A_B01_S2_M1")      { *hashID=1892; *bec= 2; *layer=0; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="D1A_B01_S2_M6")      { *hashID=1893; *bec= 2; *layer=0; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="D1A_B01_S2_M2")      { *hashID=1894; *bec= 2; *layer=0; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="D1A_B01_S2_M5")      { *hashID=1895; *bec= 2; *layer=0; *phimod= 3; *etamod=  0; }
  else if (geographicalID=="D1A_B01_S2_M3")      { *hashID=1896; *bec= 2; *layer=0; *phimod= 4; *etamod=  0; }
  else if (geographicalID=="D1A_B01_S2_M4")      { *hashID=1897; *bec= 2; *layer=0; *phimod= 5; *etamod=  0; }
  else if (geographicalID=="D1A_B02_S1_M1")      { *hashID=1898; *bec= 2; *layer=0; *phimod= 6; *etamod=  0; }
  else if (geographicalID=="D1A_B02_S1_M6")      { *hashID=1899; *bec= 2; *layer=0; *phimod= 7; *etamod=  0; }
  else if (geographicalID=="D1A_B02_S1_M2")      { *hashID=1900; *bec= 2; *layer=0; *phimod= 8; *etamod=  0; }
  else if (geographicalID=="D1A_B02_S1_M5")      { *hashID=1901; *bec= 2; *layer=0; *phimod= 9; *etamod=  0; }
  else if (geographicalID=="D1A_B02_S1_M3")      { *hashID=1902; *bec= 2; *layer=0; *phimod=10; *etamod=  0; }
  else if (geographicalID=="D1A_B02_S1_M4")      { *hashID=1903; *bec= 2; *layer=0; *phimod=11; *etamod=  0; }
  else if (geographicalID=="D1A_B02_S2_M1")      { *hashID=1904; *bec= 2; *layer=0; *phimod=12; *etamod=  0; }
  else if (geographicalID=="D1A_B02_S2_M6")      { *hashID=1905; *bec= 2; *layer=0; *phimod=13; *etamod=  0; }
  else if (geographicalID=="D1A_B02_S2_M2")      { *hashID=1906; *bec= 2; *layer=0; *phimod=14; *etamod=  0; }
  else if (geographicalID=="D1A_B02_S2_M5")      { *hashID=1907; *bec= 2; *layer=0; *phimod=15; *etamod=  0; }
  else if (geographicalID=="D1A_B02_S2_M3")      { *hashID=1908; *bec= 2; *layer=0; *phimod=16; *etamod=  0; }
  else if (geographicalID=="D1A_B02_S2_M4")      { *hashID=1909; *bec= 2; *layer=0; *phimod=17; *etamod=  0; }
  else if (geographicalID=="D1A_B03_S1_M1")      { *hashID=1910; *bec= 2; *layer=0; *phimod=18; *etamod=  0; }
  else if (geographicalID=="D1A_B03_S1_M6")      { *hashID=1911; *bec= 2; *layer=0; *phimod=19; *etamod=  0; }
  else if (geographicalID=="D1A_B03_S1_M2")      { *hashID=1912; *bec= 2; *layer=0; *phimod=20; *etamod=  0; }
  else if (geographicalID=="D1A_B03_S1_M5")      { *hashID=1913; *bec= 2; *layer=0; *phimod=21; *etamod=  0; }
  else if (geographicalID=="D1A_B03_S1_M3")      { *hashID=1914; *bec= 2; *layer=0; *phimod=22; *etamod=  0; }
  else if (geographicalID=="D1A_B03_S1_M4")      { *hashID=1915; *bec= 2; *layer=0; *phimod=23; *etamod=  0; }
  else if (geographicalID=="D1A_B03_S2_M1")      { *hashID=1916; *bec= 2; *layer=0; *phimod=24; *etamod=  0; }
  else if (geographicalID=="D1A_B03_S2_M6")      { *hashID=1917; *bec= 2; *layer=0; *phimod=25; *etamod=  0; }
  else if (geographicalID=="D1A_B03_S2_M2")      { *hashID=1918; *bec= 2; *layer=0; *phimod=26; *etamod=  0; }
  else if (geographicalID=="D1A_B03_S2_M5")      { *hashID=1919; *bec= 2; *layer=0; *phimod=27; *etamod=  0; }
  else if (geographicalID=="D1A_B03_S2_M3")      { *hashID=1920; *bec= 2; *layer=0; *phimod=28; *etamod=  0; }
  else if (geographicalID=="D1A_B03_S2_M4")      { *hashID=1921; *bec= 2; *layer=0; *phimod=29; *etamod=  0; }
  else if (geographicalID=="D1A_B04_S1_M1")      { *hashID=1922; *bec= 2; *layer=0; *phimod=30; *etamod=  0; }
  else if (geographicalID=="D1A_B04_S1_M6")      { *hashID=1923; *bec= 2; *layer=0; *phimod=31; *etamod=  0; }
  else if (geographicalID=="D1A_B04_S1_M2")      { *hashID=1924; *bec= 2; *layer=0; *phimod=32; *etamod=  0; }
  else if (geographicalID=="D1A_B04_S1_M5")      { *hashID=1925; *bec= 2; *layer=0; *phimod=33; *etamod=  0; }
  else if (geographicalID=="D1A_B04_S1_M3")      { *hashID=1926; *bec= 2; *layer=0; *phimod=34; *etamod=  0; }
  else if (geographicalID=="D1A_B04_S1_M4")      { *hashID=1927; *bec= 2; *layer=0; *phimod=35; *etamod=  0; }
  else if (geographicalID=="D1A_B04_S2_M1")      { *hashID=1928; *bec= 2; *layer=0; *phimod=36; *etamod=  0; }
  else if (geographicalID=="D1A_B04_S2_M6")      { *hashID=1929; *bec= 2; *layer=0; *phimod=37; *etamod=  0; }
  else if (geographicalID=="D1A_B04_S2_M2")      { *hashID=1930; *bec= 2; *layer=0; *phimod=38; *etamod=  0; }
  else if (geographicalID=="D1A_B04_S2_M5")      { *hashID=1931; *bec= 2; *layer=0; *phimod=39; *etamod=  0; }
  else if (geographicalID=="D1A_B04_S2_M3")      { *hashID=1932; *bec= 2; *layer=0; *phimod=40; *etamod=  0; }
  else if (geographicalID=="D1A_B04_S2_M4")      { *hashID=1933; *bec= 2; *layer=0; *phimod=41; *etamod=  0; }
  else if (geographicalID=="D1A_B01_S1_M1")      { *hashID=1934; *bec= 2; *layer=0; *phimod=42; *etamod=  0; }
  else if (geographicalID=="D1A_B01_S1_M6")      { *hashID=1935; *bec= 2; *layer=0; *phimod=43; *etamod=  0; }
  else if (geographicalID=="D1A_B01_S1_M2")      { *hashID=1936; *bec= 2; *layer=0; *phimod=44; *etamod=  0; }
  else if (geographicalID=="D1A_B01_S1_M5")      { *hashID=1937; *bec= 2; *layer=0; *phimod=45; *etamod=  0; }
  else if (geographicalID=="D1A_B01_S1_M3")      { *hashID=1938; *bec= 2; *layer=0; *phimod=46; *etamod=  0; }
  else if (geographicalID=="D1A_B01_S1_M4")      { *hashID=1939; *bec= 2; *layer=0; *phimod=47; *etamod=  0; }
  else if (geographicalID=="D2A_B01_S2_M1")      { *hashID=1940; *bec= 2; *layer=1; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="D2A_B01_S2_M6")      { *hashID=1941; *bec= 2; *layer=1; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="D2A_B01_S2_M2")      { *hashID=1942; *bec= 2; *layer=1; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="D2A_B01_S2_M5")      { *hashID=1943; *bec= 2; *layer=1; *phimod= 3; *etamod=  0; }
  else if (geographicalID=="D2A_B01_S2_M3")      { *hashID=1944; *bec= 2; *layer=1; *phimod= 4; *etamod=  0; }
  else if (geographicalID=="D2A_B01_S2_M4")      { *hashID=1945; *bec= 2; *layer=1; *phimod= 5; *etamod=  0; }
  else if (geographicalID=="D2A_B02_S1_M1")      { *hashID=1946; *bec= 2; *layer=1; *phimod= 6; *etamod=  0; }
  else if (geographicalID=="D2A_B02_S1_M6")      { *hashID=1947; *bec= 2; *layer=1; *phimod= 7; *etamod=  0; }
  else if (geographicalID=="D2A_B02_S1_M2")      { *hashID=1948; *bec= 2; *layer=1; *phimod= 8; *etamod=  0; }
  else if (geographicalID=="D2A_B02_S1_M5")      { *hashID=1949; *bec= 2; *layer=1; *phimod= 9; *etamod=  0; }
  else if (geographicalID=="D2A_B02_S1_M3")      { *hashID=1950; *bec= 2; *layer=1; *phimod=10; *etamod=  0; }
  else if (geographicalID=="D2A_B02_S1_M4")      { *hashID=1951; *bec= 2; *layer=1; *phimod=11; *etamod=  0; }
  else if (geographicalID=="D2A_B02_S2_M1")      { *hashID=1952; *bec= 2; *layer=1; *phimod=12; *etamod=  0; }
  else if (geographicalID=="D2A_B02_S2_M6")      { *hashID=1953; *bec= 2; *layer=1; *phimod=13; *etamod=  0; }
  else if (geographicalID=="D2A_B02_S2_M2")      { *hashID=1954; *bec= 2; *layer=1; *phimod=14; *etamod=  0; }
  else if (geographicalID=="D2A_B02_S2_M5")      { *hashID=1955; *bec= 2; *layer=1; *phimod=15; *etamod=  0; }
  else if (geographicalID=="D2A_B02_S2_M3")      { *hashID=1956; *bec= 2; *layer=1; *phimod=16; *etamod=  0; }
  else if (geographicalID=="D2A_B02_S2_M4")      { *hashID=1957; *bec= 2; *layer=1; *phimod=17; *etamod=  0; }
  else if (geographicalID=="D2A_B03_S1_M1")      { *hashID=1958; *bec= 2; *layer=1; *phimod=18; *etamod=  0; }
  else if (geographicalID=="D2A_B03_S1_M6")      { *hashID=1959; *bec= 2; *layer=1; *phimod=19; *etamod=  0; }
  else if (geographicalID=="D2A_B03_S1_M2")      { *hashID=1960; *bec= 2; *layer=1; *phimod=20; *etamod=  0; }
  else if (geographicalID=="D2A_B03_S1_M5")      { *hashID=1961; *bec= 2; *layer=1; *phimod=21; *etamod=  0; }
  else if (geographicalID=="D2A_B03_S1_M3")      { *hashID=1962; *bec= 2; *layer=1; *phimod=22; *etamod=  0; }
  else if (geographicalID=="D2A_B03_S1_M4")      { *hashID=1963; *bec= 2; *layer=1; *phimod=23; *etamod=  0; }
  else if (geographicalID=="D2A_B03_S2_M1")      { *hashID=1964; *bec= 2; *layer=1; *phimod=24; *etamod=  0; }
  else if (geographicalID=="D2A_B03_S2_M6")      { *hashID=1965; *bec= 2; *layer=1; *phimod=25; *etamod=  0; }
  else if (geographicalID=="D2A_B03_S2_M2")      { *hashID=1966; *bec= 2; *layer=1; *phimod=26; *etamod=  0; }
  else if (geographicalID=="D2A_B03_S2_M5")      { *hashID=1967; *bec= 2; *layer=1; *phimod=27; *etamod=  0; }
  else if (geographicalID=="D2A_B03_S2_M3")      { *hashID=1968; *bec= 2; *layer=1; *phimod=28; *etamod=  0; }
  else if (geographicalID=="D2A_B03_S2_M4")      { *hashID=1969; *bec= 2; *layer=1; *phimod=29; *etamod=  0; }
  else if (geographicalID=="D2A_B04_S1_M1")      { *hashID=1970; *bec= 2; *layer=1; *phimod=30; *etamod=  0; }
  else if (geographicalID=="D2A_B04_S1_M6")      { *hashID=1971; *bec= 2; *layer=1; *phimod=31; *etamod=  0; }
  else if (geographicalID=="D2A_B04_S1_M2")      { *hashID=1972; *bec= 2; *layer=1; *phimod=32; *etamod=  0; }
  else if (geographicalID=="D2A_B04_S1_M5")      { *hashID=1973; *bec= 2; *layer=1; *phimod=33; *etamod=  0; }
  else if (geographicalID=="D2A_B04_S1_M3")      { *hashID=1974; *bec= 2; *layer=1; *phimod=34; *etamod=  0; }
  else if (geographicalID=="D2A_B04_S1_M4")      { *hashID=1975; *bec= 2; *layer=1; *phimod=35; *etamod=  0; }
  else if (geographicalID=="D2A_B04_S2_M1")      { *hashID=1976; *bec= 2; *layer=1; *phimod=36; *etamod=  0; }
  else if (geographicalID=="D2A_B04_S2_M6")      { *hashID=1977; *bec= 2; *layer=1; *phimod=37; *etamod=  0; }
  else if (geographicalID=="D2A_B04_S2_M2")      { *hashID=1978; *bec= 2; *layer=1; *phimod=38; *etamod=  0; }
  else if (geographicalID=="D2A_B04_S2_M5")      { *hashID=1979; *bec= 2; *layer=1; *phimod=39; *etamod=  0; }
  else if (geographicalID=="D2A_B04_S2_M3")      { *hashID=1980; *bec= 2; *layer=1; *phimod=40; *etamod=  0; }
  else if (geographicalID=="D2A_B04_S2_M4")      { *hashID=1981; *bec= 2; *layer=1; *phimod=41; *etamod=  0; }
  else if (geographicalID=="D2A_B01_S1_M1")      { *hashID=1982; *bec= 2; *layer=1; *phimod=42; *etamod=  0; }
  else if (geographicalID=="D2A_B01_S1_M6")      { *hashID=1983; *bec= 2; *layer=1; *phimod=43; *etamod=  0; }
  else if (geographicalID=="D2A_B01_S1_M2")      { *hashID=1984; *bec= 2; *layer=1; *phimod=44; *etamod=  0; }
  else if (geographicalID=="D2A_B01_S1_M5")      { *hashID=1985; *bec= 2; *layer=1; *phimod=45; *etamod=  0; }
  else if (geographicalID=="D2A_B01_S1_M3")      { *hashID=1986; *bec= 2; *layer=1; *phimod=46; *etamod=  0; }
  else if (geographicalID=="D2A_B01_S1_M4")      { *hashID=1987; *bec= 2; *layer=1; *phimod=47; *etamod=  0; }
  else if (geographicalID=="D3A_B01_S2_M1")      { *hashID=1988; *bec= 2; *layer=2; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="D3A_B01_S2_M6")      { *hashID=1989; *bec= 2; *layer=2; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="D3A_B01_S2_M2")      { *hashID=1990; *bec= 2; *layer=2; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="D3A_B01_S2_M5")      { *hashID=1991; *bec= 2; *layer=2; *phimod= 3; *etamod=  0; }
  else if (geographicalID=="D3A_B01_S2_M3")      { *hashID=1992; *bec= 2; *layer=2; *phimod= 4; *etamod=  0; }
  else if (geographicalID=="D3A_B01_S2_M4")      { *hashID=1993; *bec= 2; *layer=2; *phimod= 5; *etamod=  0; }
  else if (geographicalID=="D3A_B02_S1_M1")      { *hashID=1994; *bec= 2; *layer=2; *phimod= 6; *etamod=  0; }
  else if (geographicalID=="D3A_B02_S1_M6")      { *hashID=1995; *bec= 2; *layer=2; *phimod= 7; *etamod=  0; }
  else if (geographicalID=="D3A_B02_S1_M2")      { *hashID=1996; *bec= 2; *layer=2; *phimod= 8; *etamod=  0; }
  else if (geographicalID=="D3A_B02_S1_M5")      { *hashID=1997; *bec= 2; *layer=2; *phimod= 9; *etamod=  0; }
  else if (geographicalID=="D3A_B02_S1_M3")      { *hashID=1998; *bec= 2; *layer=2; *phimod=10; *etamod=  0; }
  else if (geographicalID=="D3A_B02_S1_M4")      { *hashID=1999; *bec= 2; *layer=2; *phimod=11; *etamod=  0; }
  else if (geographicalID=="D3A_B02_S2_M1")      { *hashID=2000; *bec= 2; *layer=2; *phimod=12; *etamod=  0; }
  else if (geographicalID=="D3A_B02_S2_M6")      { *hashID=2001; *bec= 2; *layer=2; *phimod=13; *etamod=  0; }
  else if (geographicalID=="D3A_B02_S2_M2")      { *hashID=2002; *bec= 2; *layer=2; *phimod=14; *etamod=  0; }
  else if (geographicalID=="D3A_B02_S2_M5")      { *hashID=2003; *bec= 2; *layer=2; *phimod=15; *etamod=  0; }
  else if (geographicalID=="D3A_B02_S2_M3")      { *hashID=2004; *bec= 2; *layer=2; *phimod=16; *etamod=  0; }
  else if (geographicalID=="D3A_B02_S2_M4")      { *hashID=2005; *bec= 2; *layer=2; *phimod=17; *etamod=  0; }
  else if (geographicalID=="D3A_B03_S1_M1")      { *hashID=2006; *bec= 2; *layer=2; *phimod=18; *etamod=  0; }
  else if (geographicalID=="D3A_B03_S1_M6")      { *hashID=2007; *bec= 2; *layer=2; *phimod=19; *etamod=  0; }
  else if (geographicalID=="D3A_B03_S1_M2")      { *hashID=2008; *bec= 2; *layer=2; *phimod=20; *etamod=  0; }
  else if (geographicalID=="D3A_B03_S1_M5")      { *hashID=2009; *bec= 2; *layer=2; *phimod=21; *etamod=  0; }
  else if (geographicalID=="D3A_B03_S1_M3")      { *hashID=2010; *bec= 2; *layer=2; *phimod=22; *etamod=  0; }
  else if (geographicalID=="D3A_B03_S1_M4")      { *hashID=2011; *bec= 2; *layer=2; *phimod=23; *etamod=  0; }
  else if (geographicalID=="D3A_B03_S2_M1")      { *hashID=2012; *bec= 2; *layer=2; *phimod=24; *etamod=  0; }
  else if (geographicalID=="D3A_B03_S2_M6")      { *hashID=2013; *bec= 2; *layer=2; *phimod=25; *etamod=  0; }
  else if (geographicalID=="D3A_B03_S2_M2")      { *hashID=2014; *bec= 2; *layer=2; *phimod=26; *etamod=  0; }
  else if (geographicalID=="D3A_B03_S2_M5")      { *hashID=2015; *bec= 2; *layer=2; *phimod=27; *etamod=  0; }
  else if (geographicalID=="D3A_B03_S2_M3")      { *hashID=2016; *bec= 2; *layer=2; *phimod=28; *etamod=  0; }
  else if (geographicalID=="D3A_B03_S2_M4")      { *hashID=2017; *bec= 2; *layer=2; *phimod=29; *etamod=  0; }
  else if (geographicalID=="D3A_B04_S1_M1")      { *hashID=2018; *bec= 2; *layer=2; *phimod=30; *etamod=  0; }
  else if (geographicalID=="D3A_B04_S1_M6")      { *hashID=2019; *bec= 2; *layer=2; *phimod=31; *etamod=  0; }
  else if (geographicalID=="D3A_B04_S1_M2")      { *hashID=2020; *bec= 2; *layer=2; *phimod=32; *etamod=  0; }
  else if (geographicalID=="D3A_B04_S1_M5")      { *hashID=2021; *bec= 2; *layer=2; *phimod=33; *etamod=  0; }
  else if (geographicalID=="D3A_B04_S1_M3")      { *hashID=2022; *bec= 2; *layer=2; *phimod=34; *etamod=  0; }
  else if (geographicalID=="D3A_B04_S1_M4")      { *hashID=2023; *bec= 2; *layer=2; *phimod=35; *etamod=  0; }
  else if (geographicalID=="D3A_B04_S2_M1")      { *hashID=2024; *bec= 2; *layer=2; *phimod=36; *etamod=  0; }
  else if (geographicalID=="D3A_B04_S2_M6")      { *hashID=2025; *bec= 2; *layer=2; *phimod=37; *etamod=  0; }
  else if (geographicalID=="D3A_B04_S2_M2")      { *hashID=2026; *bec= 2; *layer=2; *phimod=38; *etamod=  0; }
  else if (geographicalID=="D3A_B04_S2_M5")      { *hashID=2027; *bec= 2; *layer=2; *phimod=39; *etamod=  0; }
  else if (geographicalID=="D3A_B04_S2_M3")      { *hashID=2028; *bec= 2; *layer=2; *phimod=40; *etamod=  0; }
  else if (geographicalID=="D3A_B04_S2_M4")      { *hashID=2029; *bec= 2; *layer=2; *phimod=41; *etamod=  0; }
  else if (geographicalID=="D3A_B01_S1_M1")      { *hashID=2030; *bec= 2; *layer=2; *phimod=42; *etamod=  0; }
  else if (geographicalID=="D3A_B01_S1_M6")      { *hashID=2031; *bec= 2; *layer=2; *phimod=43; *etamod=  0; }
  else if (geographicalID=="D3A_B01_S1_M2")      { *hashID=2032; *bec= 2; *layer=2; *phimod=44; *etamod=  0; }
  else if (geographicalID=="D3A_B01_S1_M5")      { *hashID=2033; *bec= 2; *layer=2; *phimod=45; *etamod=  0; }
  else if (geographicalID=="D3A_B01_S1_M3")      { *hashID=2034; *bec= 2; *layer=2; *phimod=46; *etamod=  0; }
  else if (geographicalID=="D3A_B01_S1_M4")      { *hashID=2035; *bec= 2; *layer=2; *phimod=47; *etamod=  0; }
  else if (geographicalID=="LI_S15_A_34_M3_A7")  { *hashID=2036; *bec= 4; *layer=0; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="LI_S15_A_34_M4_A10") { *hashID=2037; *bec= 4; *layer=0; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="LI_S15_A_12_M1_A1")  { *hashID=2038; *bec= 4; *layer=0; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="LI_S15_A_12_M2_A4")  { *hashID=2039; *bec= 4; *layer=0; *phimod= 3; *etamod=  0; }
  else if (geographicalID=="LI_S15_A_34_M3_A8")  { *hashID=2040; *bec= 4; *layer=1; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="LI_S15_A_34_M4_A11") { *hashID=2041; *bec= 4; *layer=1; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="LI_S15_A_12_M1_A2")  { *hashID=2042; *bec= 4; *layer=1; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="LI_S15_A_12_M2_A5")  { *hashID=2043; *bec= 4; *layer=1; *phimod= 3; *etamod=  0; }
  else if (geographicalID=="LI_S15_A_34_M3_A9")  { *hashID=2044; *bec= 4; *layer=2; *phimod= 0; *etamod=  0; }
  else if (geographicalID=="LI_S15_A_34_M4_A12") { *hashID=2045; *bec= 4; *layer=2; *phimod= 1; *etamod=  0; }
  else if (geographicalID=="LI_S15_A_12_M1_A3")  { *hashID=2046; *bec= 4; *layer=2; *phimod= 2; *etamod=  0; }
  else if (geographicalID=="LI_S15_A_12_M2_A6")  { *hashID=2047; *bec= 4; *layer=2; *phimod= 3; *etamod=  0; }
  else                                           { *hashID=  -1; *bec=-1; *layer=-1; *phimod=-1; *etamod=-1; }
}

