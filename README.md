# Home-assistant-mini-hub
A home assistant sensor that runs off usb and has: temperature, humidity, motion, bluetooth range extending capabilities and thread border router and zigbee hub extending capabilities.

## About
The home assistant Combi sensor is a practical, cost efefctive solution for a full sensor suite in any room of your house for around $20 USD and $30 AUD. The project is fully open source so feel free to customise it and make it however you like and share it however you like. Also if you happen to feature my model in a video a link would be extremely appreciated and a shout out would be greatly appreciated. The project is rather simple only requiring individuals to solder a few wires to connect everything up. The module can be battery powered or usb c powered and mounted anywhere with the help of some double sided foam tape. running along the sides in the included channels. Feel free to use this project for your home and if you are on the home assistant discord or community forum please give a shoutout.

## Design philosophy
The design had to be contemporary, modern and simple enough for it to fit into any home and what better item to fit in than something people wont even notice. A small white box containing a vast sensor suite is the least possible protruding thing in a home. The issue of power however is quite rampant. An unsightly cable is not a good option for the device hence why a zigbee or bluetooth LE device is better if the issue of a cable is a problem. The slim 12mm layout makes it a suitable hidden addition to any wall
<img width="761" height="539" alt="Screenshot 2026-03-31 at 2 38 15 pm" src="https://github.com/user-attachments/assets/90f075ad-322b-4e48-a72c-ea99a0604897" />


## Future improvements
The design is not yet perfect and has some room to improve for example rounding corners may smoothen out the sharp angles of the curve finding a better mounting solution than double sided tape is also required however not all people are comfortable with. Designing a pot light mount would also be a good idea to easily conceal the electronics. Using a cheaper temperature and humidity sensor is of primary concern.

## Internal layout
<img width="504" height="433" alt="Screenshot 2026-03-31 at 2 35 16 pm" src="https://github.com/user-attachments/assets/65c98d0a-8a1a-456e-a35f-7a7c740efeec" />
The Sensor has a relatively simple layout with parts that are extremely easy to source making this open source project amazing for beginners and advanced users combined. The microcontroller is strategically placed at the bottom so that it can be easily and discreetly powered by a simple usb-c cable making it easy to install and power for cheap by anyone. the sensors have been placed far away from most electric components to avoid temperature differences and interference. next to the MCU there is a spot for a coin cell battery which is the same as in the aqara zigbee sensors so if you are already stocking those it mayb be worth while to build this project.
