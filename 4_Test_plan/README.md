# Test Plan
## High Level Test Plan
| Test ID | Description | Exp I/P | Exp O/p | Actual O/P | Type of Test|
| :---:        |     :---:      |          :--- |:---| :---: | :---|
| H_01   | Test function of selecting courses     | int 1 or 2    | case 1 or case 2 |SUCCESS |Subject Based |
| H_02     |Test function calculating the gain for opamp      | Structure with OpAmp parameters and choice of gain  |Gain and output voltage |SUCCESS	|topic Based|
|H_03|Test function calculating output of digital gates |Structure with 2 or more inputs|truth table|SUCCESS|topic Based|
## Low Level Test Plan
| Test ID | Description | Exp I/P | Exp O/p | Actual O/P | Type of Test|
| :---:        |     :---:      |          :--- |:---| :---: | :---|
|L_01|To check output of AND gate|binary 1 and 0	| |0|topic Based|
|L_02|To check output of NOT gate|binary 1 |0|0|topic Based|
|L_03|To check output of 2:1 MUX|binary 0 ,1, 1| 1|y= 1|topic Based|
|L_04|To check output of 1:2 DEMUX|binary 1, 0,1| y1=1|y1=1 |topic Based|
|L_05|To find inverting gain and Vout|10000, 25000, 3|7.5,-2.5|7.5,-2.5|topic Based|
|L_06|To find non-inverting gain and Vout|10000,25000,3	|10.5,3.5|10.5,3.5|topic Based|
