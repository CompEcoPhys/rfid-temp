# Arduino-Based RFID Reader

Eastern Gray Squirrel Arduino-based RFID Reader/Writer 

<h3> 1. Overview </h3>
The repository is a general workflow for building an RFID reader to interpret temperature recordings through a temperature sensitive transponder. A reader will be attached to an outdoor enclosure with the aim of recording temperatures of animals under natural conditions, in addition to occupancy of the box throughout the year. While temperature recordings are limited to the animal being in the box, the device is minimally invasive compared to other surgical approaches and does not require a battery for power. 

<h3>2. Bill of Materials</h3>

<h3>3. Prototype assembly and Arduino Sketch</h3>

Pin mapping:
Copper coil ≫ RFID A+;A-
RFID Tx ≫ Arduino 8
RFID Rx ≫ Arduino 9

Current Arduino sketch permits the recording of the PIT tag whenever it is near the coil antenna. 

The prototyping RFID reader has pins soldered to the J1 and J2, respectively. For this sketch, the Tx on the RFID reader goes into the Arduino Digital pin 8, and the RX on the RFID reader goes to the Arduino digital pin 9.


<h3>4. Power Consumption (coming soon)<h/3>
     
     For low power applications, this section will include the general power drain using a power profiling kit. This will be updated once the field design is under works. 
