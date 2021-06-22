# Calibration tool & recover script

## Usage

How to perform calibration script and get calibration map:
```bash
$ cd calibration
$ root -b -q PixelCalib.C
```

How to modify the black-box in the calibration map:
```bash
$ cd recover
$ python recover.py input.dat output.dat
```
The scripts output summary text file: {date}_CalibSummary.txt
