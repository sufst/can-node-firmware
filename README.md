
Firmware for BMS **T**hermistor **E**xpansion **M**odules
- provides readout of cell temperatures 
- aims to behave identically to the Orion BMS [TEM](https://www.orionbms.com/products/thermistor-expansion-module/)

target MCU is the [PIC18F47Q84](https://www.microchip.com/en-us/product/pic18f47q84), built in MPLAB X 

focus on implementing messages:
- 1839F380 - Thermistor Module -> BMS Broadcast
	- add 0x41 to the checksum 
- 1838F380 - Thermistor General Broadcast



