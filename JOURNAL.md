---
title: "Multi Sensor"
author: "your-name"
description: "A multi sensor (mmWave presence, temperature and humidity) built on an ESP32-C6 that exposes entities to Home Assistant through ESPHome"
created_at: "2026-03-31"
---

# March 31: Shopping for components

### Overview
I shopped for components to build the multi sensor. The plan was to have multiple sensors in one discreet simple format with usb c in power or to be powered by a usb c cable or a coin cell battery the same one that the aqara zigbee sensors use.

### Microcontroller
*ESP32-C6 ESP32-C 802.11 b/g/n/ax (WiFi/WLAN/Wi-Fi 6), 802.15.4 (Matter, Thread, Zigbee®), Bluetooth® 5.x (BLE) Transceiver 2.4GHz Evaluation Board*

Zigbee for low power and a cost effective small enough board with enough pins for this project. Found on digikey and is an efefctive esp home product.

### MMwave sensor
Ive always wondered what made mmwave sensors so expensive and i never found the answer a simple mmwave sensor costs only 6 dollars on digikey. This is a powerful well reccomended sensor for the power users of home assistant.

### Temperature and humidity sensor
*DHT11 Humidity, Temperature Sensor Platform Evaluation Expansion Board*
Simple cheap temperature and humidity sensor.

### double sided tape
*X-Press It High Tack Foam Mounting Tape 6mm x 2m*
To mount individual components to the frame and to mount the sensor to the main board.
![Screenshot 2026-03-31 at 3.06.24 pm](https://stasis.hackclub-assets.com/images/1774929987803-h3djr6.png)

![Screenshot 2026-03-31 at 3.06.36 pm](https://stasis.hackclub-assets.com/images/1774929999405-p1ave9.png)

**Total time spent: 1 hour**

# March 31: CAD

## *Enclosure design*

### Process
First in fusion i imported all of my compnents and layed them out in a manner that was space efficient but would still allow for accurate sensor readings.
![Screenshot 2026-03-31 at 2.37.39 pm](https://stasis.hackclub-assets.com/images/1774953285180-u2jsjh.png)

The microcontroller is mounted at the very bottom for easy USB-C plug in and disconnection at a rapid rate to move the device around. The microcontroller model was found on grabcad.
![Screenshot 2026-03-31 at 2.35.16 pm](https://stasis.hackclub-assets.com/images/1774953307826-39g4gf.png)

I then designed a simple rectangular case around it with indents for the power connector and brackets for the compnents. I left adequate spce to work around the components as double sided tape is the main connecter here.

On the back there are 2 indents each for a piece of foam double sided tape which is strong and easy to remove. 

The lid is the most special part of the whole enclosure. Because MMWave can easily penetrate 3d printed plastic it was not completely necessary to include an opening for the mmwave sensor which would have made the design unsightly and inelegant enought to be placed within a house or apartment.

The hole for the temperature sensor has multiple circular cutouts for more accurate readings. and easier detection of accurate temperatures. For the holes i used the rectangular pattern tool in fusion 360 to speed up and aid in the process.
![Screenshot 2026-03-31 at 2.38.06 pm](https://stasis.hackclub-assets.com/images/1774953240365-5hz69t.png)

### Design philisophy
The design had to be contemporary, modern and simple enough for it to fit into any home and what better item to fit in than something people wont even notice. A small white box containing a vast sensor suite is the least possible protruding thing in a home. The issue of power however is quite rampant. An unsightly cable is not a good option for the device hence why a zigbee or bluetooth LE device is better if the issue of a cable is a problem.

### Future improvements
The design is not yet perfect and has some room to improve for example rounding corners may smoothen out the sharp angles of the curve finding a better mounting solution than double sided tape is also required however not all people are comfortable with. Designing a pot light mount would also be a good idea to easily conceal the electronics.

**Total time spent: 1.75 hours**

# March 31: Updating .Readme

I added various project details and guideliens to the readme including the About section, design philosophy section and the build section
![Screenshot 2026-03-31 at 9.50.54 pm](https://stasis.hackclub-assets.com/images/1774954256618-schqmr.png)

![Screenshot 2026-03-31 at 9.51.02 pm](https://stasis.hackclub-assets.com/images/1774954264817-80p5qw.png)

**Total time spent: 0.58 hours**

# April 1: Added wiring diagram and BOM to readme

I made the wiring diagram in apple notes
I connected the MMWave to the 5V pin and the temperature and humidity sensor to the 3v3 pin and data pin gpio 2.
![Wiring diagram](https://stasis.hackclub-assets.com/images/1775040268600-acjmn4.png)

I also added the BOM to the readme.

| NAME | PURPOSE | QTY | TOTAL (USD) | LINK | DISTRIBUTOR |
| :--- | :--- | :---: | :--- | :--- | :--- |
| temperature and humidity sensor | To measure temperature and humidity | 1 | $9.50 | [Link to Listing](https://www.digikey.com.au/en/products/detail/seeed-technology-co-ltd/101010001/22109372) | Digikey |
| Microcontroller | To control all electronics and send back information | 1 | $5.44 | [Link to Listing](https://www.digikey.com.au/en/products/detail/seeed-technology-co-ltd/113991254/24613066) | Digikey |
| MM wave sensor | To detect presence | 1 | $4.54 | [Link to Listing](https://www.digikey.com.au/en/products/detail/sunfounder/ST0248/22116817) | Digikey |
| Double sided foam tape 6mm | To stick components to base and to stick sensor to wall | 1 | $3.42 | [Link to Listing](https://www.officeworks.com.au/shop/officeworks/p/x-press-it-high-tack-foam-mounting-tape-6mm-x-2m-xpfth6) | Officeworks |

![Screenshot 2026-04-01 at 9.48.39 pm](https://stasis.hackclub-assets.com/images/1775040526144-x95u69.png)

**Total time spent: 1.5 hours**

# April 12: Readme update

I added the sample code to the readme which is essentially just flashing esp home to the device and photos of the wiring diagram as well.

![Screenshot 2026-04-13 at 9.50.29 am](https://stasis.hackclub-assets.com/images/1776037835551-6hgasy.png)

![Screenshot 2026-04-13 at 9.53.33 am](https://stasis.hackclub-assets.com/images/1776038018059-v7tfmq.png)

**Total time spent: 0.33 hours**

# April 12: Coding

I coded the sample code for the sensor. It essentially just reads the sensor values and exposes them to ESP home which exposes it to home assistnat giving you sensor entities to control.
![Screenshot 2026-04-13 at 9.54.42 am](https://stasis.hackclub-assets.com/images/1776038085159-62wew1.png)

**Total time spent: 0.75 hours**
