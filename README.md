# Arduino-Based RFID Reader

Eastern Gray Squirrel Arduino-based RFID Reader/Writer 

<h3> 1. Overview </h3>
The repository is a general workflow for building an RFID reader to interpret temperature recordings through a temperature sensitive transponder. A reader will be attached to an outdoor enclosure with the aim of recording temperatures of animals under natural conditions, in addition to occupancy of the box throughout the year. While temperature recordings are limited to the animal being in the box, the device is minimally invasive compared to other surgical approaches and does not require a battery for power.

The output of the PIT tag should appear in the serial monitor as:
14:14:54.691 -> 989_001025056796; 989_001025056796_1_0_5E71_000004

The last 6 bytes indicate temperature and need to be decoded. The PIT tag has a specific range that it will report values under.



<h3>2. Bill of Materials</h3>

*Prototyping parts*
| Part        | Supplier           | Cost  |
| ------------- |:-------------:| -----:|
| Arduino Uno      | [Arduino]( https://store-usa.arduino.cc/products/arduino-uno-rev3) | $28/unit |
| RFID Reader-Writer| [Priority1desgin]( https://www.priority1design.com.au/shopfront/index.php?main_page=product_info&cPath=1&products_id=10)      |   $57/unit |
| Biotherm13 PIT Tag| [Biomark]( https://www.biomark.com/product/biotherm13-pit-tag/)      |    $12/unit |


<h3>3. Prototype assembly and Arduino Sketch</h3>

Pin mapping:
|RFID Board | Connection |
| ------------- | -----:|
| RFID A-|  Copper Coil|
|RFID A+| Copper Coil|
|RFID Tx (J1)  | Arduino 8 |
|RFID Rx (J1) | Arduino 9 |

Current Arduino sketch permits the recording of the PIT tag whenever it is near the coil antenna. 

The prototyping RFID reader has pins soldered to the J1 and J2, respectively. For this sketch, the Tx on the RFID reader goes into the Arduino Digital pin 8, and the RX on the RFID reader goes to the Arduino digital pin 9.


<h3>4. Power Consumption (coming soon)</h3>

For low power applications, this section will include the general power drain using a power profiling kit. This will be updated once the field design is under works. 
