# Requirements
## Introduction
Analog and digital circuits are two common ways of distinguishing between two types of electronic circuits based on the signals that they handle. Analog Circuits deal with continuous analogue signals, whereas Digital Circuits deal with discrete digital signals, to put it simply. Individual electronic components such as resistors, transistors, capacitors, inductors, and diodes are connected by conductive wires or traces via which electric current can flow in any electronic circuit. Different circuits take in different values and output different results. This project primarily focuses on processing digital and analogue circuits by receiving data from the end user and sending back a response to the user based on the circuit type selected.
## Research
### History
Telephone relays were used to build the first digital logic systems in the 1930s because they were affordable and relatively reliable. Following that, electrical engineers always chose the cheapest electronic switches available that could yet meet the standards. In 1958, the first germanium transistor op-amp was introduced, followed by silicon equivalents in 1960. DAVID TALBERT AND ROBERT WIDLAR AT FAIRCHILD STARTED A MAJOR INDUSTRY SECTOR BY CREATING COMMERCIALLY SUCCESSFUL ICS FOR ANALOG APPLICATIONS.
### Digital & Analog Circuits Value Estimator
#### Digital Logical Circuits
The term "digital logic circuit" refers to a circuit in which voltages are expected to have a finite number of unique values. Combinational logic circuits and sequential logic circuits are two types of digital logic circuits. Most digital electronic devices, such as computers, calculators, and cell phones, use these basic circuits.
![image](https://user-images.githubusercontent.com/101788713/160765370-fc6cb204-58cf-4644-8efe-b86d8ce6895d.png)

#### Combinational Digital Logic Circuits
Digital logic gates such as AND, OR, NOT, and universal gates are used to construct combinational digital logic circuits (NAND gate and NOR gate). A sophisticated switching circuit is created by combining all of these gates. Combinational logic circuits use logic gates as building blocks. In a combinational logic circuit, the output at any point in time is solely determined by the current input at that point in time, and there are no memory devices in combinational circuits. Combinational circuits include encoders and decoders.
![image](https://user-images.githubusercontent.com/101788713/160765414-5263b479-85ac-47e6-b44d-a1a672cced82.png)

#### Multiplexer & Demultiplexer
A multiplexer is a circuit that takes numerous inputs but only outputs one. A demultiplexer works in the opposite direction of a multiplexer, accepting just one input and producing several outputs. Because communication systems are bidirectional, multiplexer and demultiplexer are usually employed simultaneously. Multiplexers are used in communication systems, telephone networks, computer memory, and satellite transmission systems. Communication systems, ALUs (Arithmetic Logic Units), and serial to parallel converters all require demultiplexers.
![image](https://user-images.githubusercontent.com/101788713/160765446-18d9a477-274b-432b-9efe-607acd3f66c5.png)

#### Operational Amplifiers
A multiplexer is a circuit that takes numerous inputs but only outputs one. A demultiplexer works in the opposite direction of a multiplexer, accepting just one input and producing several outputs. Because communication systems are bidirectional, multiplexer and demultiplexer are usually employed simultaneously. Multiplexers are used in communication systems, telephone networks, computer memory, and satellite transmission systems. Communication systems, ALUs (Arithmetic Logic Units), and serial to parallel converters all require demultiplexers.
![image](https://user-images.githubusercontent.com/101788713/160765481-65aca0f3-8ca1-4fab-9a8d-6312277c772f.png)

* Voltage amplifiers accept input voltage and output it as a voltage.
* Current amplifiers take a current input and output it as a current.
* A voltage input is converted into a current output by transconductance amplifiers.
* A current input is converted to a voltage output using transresistance amplifiers.
#### The project will address the following types of operational amplifiers::
* Inverting Amplifier
* Non Inverting Amplifier
* Differential Amplifier
* Inverting Summing Amplifier
* Non Inverting Summing Amplifier
### Cost
* The cost of the project is largely determined by the amount of time developers spend writing code to implement the functions.
* The monetary expense is little.
* The utility's estimated values can be used in a variety of fields and locations, with costs ranging from inexpensive for modest projects to costly for larger and more complex projects.
### Features
* Modular application with the ability to simply add additional functions and parts
* Simple command line interaction with the user can be further improved for a more appealing graphical interface.
* Commands and output that are simple to use can be employed in real-world applications.
### Defining The System
This project primarily focuses on processing analog and digital circuits by receiving data from the end user and sending back a response to the user based on the circuit type selected. Initially, the user is presented with a number of alternatives from which to choose from the Main Menu. The user is then prompted to choose a precise type of circuit from a list of sub choices. Following the user's selection of Sub Options, we collect data from the end user, process the circuit in the backend, and return the intended output to the user.
## SWOT Analysis
S Strength | W Weakness
------------- | -------------
Circuit Knowledge |Complex Flows
Platform Independent | Requires Turbo C or VS
Compatiblity | Limited Types of Circuits Implemented

O Opportunity | T Threats
------------- | -------------
Improve Circuit Outcome | Emerging Competitors
Students and Staff emerging requirement | Hardware dependency
Better Sequential Flow | Changing User Attitude
Rising Need of Calculators and Estimators | Academic Work
## 4W's and 1'H
### Who:
* End Users Can be Mainly Engineering College Students
* College Faculty
### What:
* Various types of circuits with a variety of input values, and finally estimating and calculating the expected output by displaying the circuit's Final Output to end users.
### Where:
* This will be particularly useful on the educational front, since it is a convenient and robust application that can be created and operated on both Windows and Linux operating systems, making it suitable for usage by faculty, staff, and students in schools and colleges.
### How:
* The user can input data by selecting various options from the Main Menu and Sub Menu, and the programme will then output the predicted result of that particular circuit.
## Detail requirements
### High Level Requirements:
ID | Description | Status
| :--- | :--- | :---:
01  | Choose Option From Main Menu | Implemented
02 | Choose Sub Option From Sub Menu | Implemented
03 | Enter the input value bases on the user requirement | Implemented
04 | Execution o the selected circuit | Implemented
05 | Display of the result | Iplemented
06 | Handle Error Flows in Case of Invalid Input | Implemented
07 | Add more circuits to the main menu | Future 
08| Handle Complex Executions | Future
09| Go Back to Main menu to Continue more Excution | implemented
10 | Exit the execution | Implemented

## Low level Requirements:
ID | Description | Status
| :--- | :--- | :---:
01  | Start the program in Turbo C and a variety of options will appear for you to choose from. | Implemented
02 | Option 1, 2, or 3 is selected, and the corresponding sub options list is executed. This list differs depending on the Option. | Implemented
03 | Selecting the proper circuit from the list of sub-options. Because the list is so long, choose your sub choice carefully. | Implemented
04 |To begin the circuit execution, enter the values based on the sub option chosen. The input value can be anything from Binary to KHz and mm.| Implemented
05 |Providing a way for the user to return to the main menu if they become confused, as well as managing errors and invalid inputs appropriately. | Iplemented
06 | Requires Knowledge on Circuits, their various different inputs and Expected output| Implemented
07 | Explore More about Circuits and various different Flows and add them to the Main Menu | Future 
08| Error Handling based on execution of Complex functions and their outputs | Future
