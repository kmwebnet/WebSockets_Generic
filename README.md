## WebSockets_Generic

[![arduino-library-badge](https://www.ardu-badge.com/badge/WebSockets_Generic.svg?)](https://www.ardu-badge.com/WebSockets_Generic)
[![GitHub release](https://img.shields.io/github/release/khoih-prog/WebSockets_Generic.svg)](https://github.com/khoih-prog/WebSockets_Generic/releases)
[![GitHub](https://img.shields.io/github/license/mashape/apistatus.svg)](https://github.com/khoih-prog/WebSockets_Generic/blob/master/LICENSE)
[![contributions welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat)](#Contributing)
[![GitHub issues](https://img.shields.io/github/issues/khoih-prog/WebSockets_Generic.svg)](http://github.com/khoih-prog/WebSockets_Generic/issues)

---
---

## Important Notes

1. Currently, the WebSocketServer feature is usable only for ESP8266/ESP32.
2. The timeline when to fix and reintroduce the WebSocketServer feature to other boards is not determined yet.
3. Please use the new [**WebSockets2_Generic Library**](https://github.com/khoih-prog/WebSockets2_Generic) if WebSocketServer is necessary. See [Issue 2](https://github.com/khoih-prog/WebSockets_Generic/issues/2), [Issue 3](https://github.com/khoih-prog/WebSockets_Generic/issues/3) and [Issue 4](https://github.com/khoih-prog/WebSockets_Generic/issues/4)

---

## RFC6455-based WebSocket Server and Client for Arduino boards.

### Why do we need this [WebSockets_Generic library](https://github.com/khoih-prog/WebSockets_Generic)

Many Web services require WebSockets library, which is so far written only for ESP8266/ESP32 boards. The ESP boards rely on this [Markus Sattler's **WebSockets Library**](https://github.com/Links2004/arduinoWebSockets) to connect to Alexa via Sinric or SinricPro skills.

This [WebSockets_Generic library](https://github.com/khoih-prog/WebSockets_Generic) is based on and modified from [Markus Sattler's **WebSockets Library**](https://github.com/Links2004/arduinoWebSockets) to provide support to many more boards, such as **Arduino SAMD21, Adafruit SAMD21/SAMD51, nRF52, STM32F/L/H/G/WB/MP1, Teensy, SAM DUE, etc.** and enable those boards to use WebSockets services, including voice-control Alexa along with Blynk. Those supported boards can also run **WebSockets Server.** The WebSockets can be used with **ESP’s WiFi, WiFiNINA, W5x00 and ENC28J60 Ethernet.**

Please see illustrating examples.

---
## Forked version  

1.add support for rainbowtype arduino boilerplate to enable hardware root of trust based TLS communication.   

### New in v2.3.1

1. Sync with v2.3.1 of original [**WebSockets library**](https://github.com/Links2004/arduinoWebSockets). 
2. Add support to ENC28J60 using [**EthernetENC library**](https://github.com/jandrassy/EthernetENC).
3. Add and update examples

#### New in v2.2.3

1. Add support to all **STM32F/L/H/G/WB/MP1 (Nucleo-144 NUCLEO_F767ZI, Nucleo-64 NUCLEO_L053R8, etc.)**
2. Add support to **Seeeduino SAMD21/SAMD51 boards (SEEED_WIO_TERMINAL, SEEED_FEMTO_M0, SEEED_XIAO_M0, Wio_Lite_MG126, WIO_GPS_BOARD, SEEEDUINO_ZERO, SEEEDUINO_LORAWAN, SEEED_GROVE_UI_WIRELESS, etc.)**
3. Add support to **W5x00's Ethernet2, Ethernet3, EthernetLarge Libraries.**
4. Add sample Packages_Patches for **STM32 stm32** (Nucleo-144 NUCLEO_F767ZI, Nucleo-64 NUCLEO_L053R8)
5. Add Packages' Patches and Ethernet Library Patches.

#### New in v2.2.2

1. Add support to **Teensy** boards, such as **Teensy 4.1, 4.0. 3.6, 3.5, 3.2/3.1, 3.0, LC.**.
2. Add support to **STM32 (Nucleo-144, Nucleo-64, Nucleo-32, Discovery, STM32F1, STM32F3, STM32F4, STM32H7, STM32L0, etc.)**.
3. Add support to **SAM DUE**
4. Add WebSocketServer examples to those supported boards.

#### New in v2.2.1

1. Bump up to sync with v2.2.1 of original WebSockets library

#### New in v2.1.3

1. Add support to **nRF52** boards, such as **AdaFruit Feather nRF52832, nRF52840 Express, BlueFruit Sense, Itsy-Bitsy nRF52840 Express, Metro nRF52840 Express, NINA_B302_ublox, etc.**.
2. Add support to **SAMD51 (Itsy-Bitsy M4, Metro M4, Grand Central M4, Feather M4 Express, etc.)**.
3. Add support to **SAMD21 (ZERO, MKR, NANO_33_IOT, M0, M0 Pro, AdaFruit CIRCUITPLAYGROUND_EXPRESS, etc.)**.


##### Supported features of RFC6455 #####

 - text frame
 - binary frame
 - connection close
 - ping
 - pong
 - continuation frame

---
---
 
## Prerequisite

 1. [`Arduino IDE 1.8.13+`](https://www.arduino.cc/en/Main/Software)
 2. [`Blynk library 0.6.1 or later`](https://github.com/blynkkk/blynk-library/releases) if use Blynk examples.
 3. [`ESP32 core 1.0.4+`](https://github.com/espressif/arduino-esp32/releases) for ESP32 boards
 4. [`ESP8266 core 2.7.4+`](https://github.com/esp8266/Arduino#installing-with-boards-manager) for ESP8266 boards. To use ESP8266 core 2.7.1+ for LittleFS.
 5. [`Arduino AVR core 1.8.3+`](https://github.com/arduino/ArduinoCore-avr) for Arduino AVR boards. Use Arduino Board Manager to install.
 6. [`Teensy core 1.53+`](https://www.pjrc.com/teensy/td_download.html) for Teensy (4.1, 4.0, 3.6, 3.5, 3,2, 3.1, 3.0) boards.
 7. [`Arduino SAM DUE core 1.6.12+`](https://www.arduino.cc/en/Guide/ArduinoDue) for SAM DUE ARM Cortex-M3 boards
 8. [`Arduino SAMD core 1.8.9+`](https://www.arduino.cc/en/Guide/ArduinoM0) for SAMD ARM Cortex-M0+ boards (Nano 33 IoT, etc.).
 9. [`Adafruit SAMD core 1.6.3+`](https://www.adafruit.com/) for SAMD ARM Cortex-M0+ and M4 boards (Itsy-Bitsy M4, etc.)
10. [`Adafruit nRF52 v0.21.0+`](https://www.adafruit.com/) for nRF52 boards such as AdaFruit Feather nRF52840 Express, NINA_B302_ublox, etc.
11. [`Seeeduino SAMD core 1.7.9+`](https://www.seeedstudio.com/) for SAMD21/SAMD51 boards (XIAO M0, Wio Terminal, etc.) 
12. [`Arduino Core for STM32 v1.9.0+`](https://github.com/khoih-prog/Arduino_Core_STM32) for STM32F/L/H/G/WB/MP1 boards. To install go to Arduino IDE, select Boards Manager, search for **`STM32`**
13. [`EthernetWebServer library v1.0.13+`](https://github.com/khoih-prog/EthernetWebServer) if necessary to use certain Ethernet features. To install, check [![arduino-library-badge](https://www.ardu-badge.com/badge/EthernetWebServer.svg?)](https://www.ardu-badge.com/EthernetWebServer)
14. Depending on which Ethernet card you're using:
   - [`Ethernet library v2.0.0+`](https://www.arduino.cc/en/Reference/Ethernet) for W5100, W5200 and W5500.
   - [`Ethernet2 library v1.0.4+`](https://github.com/khoih-prog/Ethernet2) for W5500 (Deprecated, use Arduino Ethernet library).
   - [`Ethernet3 library v1.5.3+`](https://github.com/sstaub/Ethernet3) for W5500/WIZ550io/WIZ850io/USR-ES1 with Wiznet W5500 chip.
   - [`EthernetLarge library v2.0.0+`](https://github.com/OPEnSLab-OSU/EthernetLarge) for W5100, W5200 and W5500.
   - [`EthernetENC library v2.0.0+`](https://github.com/jandrassy/EthernetENC) for ENC28J60.
   - [`UIPEthernet library v2.0.9+`](https://github.com/UIPEthernet/UIPEthernet) for ENC28J60.
   - [`STM32Ethernet library v1.2.0+`](https://github.com/stm32duino/STM32Ethernet) for built-in Ethernet LAN8742A on (Nucleo-144, Discovery). To be used with [`STM32duino_LwIP library v2.1.2+`](https://github.com/stm32duino/LwIP).
15. [`WiFiNINA_Generic library v1.7.1+`](https://github.com/khoih-prog/WiFiNINA_Generic) if necessary to use WiFiNINA. To install. check [![arduino-library-badge](https://www.ardu-badge.com/badge/WiFiNINA_Generic.svg?)](https://www.ardu-badge.com/WiFiNINA_Generic)
16. [`WiFiWebServer library v1.0.7+`](https://github.com/khoih-prog/WiFiWebServer) if necessary to use certain WiFi/WiFiNINA features. To install, check [![arduino-library-badge](https://www.ardu-badge.com/badge/WiFiWebServer.svg?)](https://www.ardu-badge.com/WiFiWebServer)
17. [`FlashStorage_SAMD library v1.0.0+`](https://github.com/khoih-prog/FlashStorage_SAMD) for SAMD21 and SAMD51 boards (ZERO, MKR, **NANO_33_IOT**, M0, M0 Pro, **AdaFruit Itsy-Bitsy M4**, etc.) if necessary to use certain features.
18. [`DueFlashStorage library`](https://github.com/sebnil/DueFlashStorage) for SAM DUE if necessary to use certain features.
19. [`Adafruit's LittleFS/InternalFS`](https://www.adafruit.com) for nRF52. Already included if you already installed Adafruit **nRF52 board package** from Boards Manager.
20. [`DoubleResetDetector_Generic v1.0.2+`](https://github.com/khoih-prog/DoubleResetDetector_Generic) if necessary to use some examples. To install. check [![arduino-library-badge](https://www.ardu-badge.com/badge/DoubleResetDetector_Generic.svg?)](https://www.ardu-badge.com/DoubleResetDetector_Generic) if necessary to use certain features.

---

## Installation

### Use Arduino Library Manager

The best and easiest way is to use `Arduino Library Manager`. Search for [**WebSockets_Generic**](https://github.com/khoih-prog/WebSockets_Generic), then select / install the latest version.
You can also use this link [![arduino-library-badge](https://www.ardu-badge.com/badge/WebSockets_Generic.svg?)](https://www.ardu-badge.com/WebSockets_Generic) for more detailed instructions.

### Manual Install

Another way to install is to:

1. Navigate to [**WebSockets_Generic**](https://github.com/khoih-prog/WebSockets_Generic) page.
2. Download the latest release `WebSockets_Generic-master.zip`.
3. Extract the zip file to `WebSockets_Generic-master` directory 
4. Copy whole `WebSockets_Generic-master` folder to Arduino libraries' directory such as `~/Arduino/libraries/`.

### VS Code & PlatformIO:

1. Install [VS Code](https://code.visualstudio.com/)
2. Install [PlatformIO](https://platformio.org/platformio-ide)
3. Install [**WebSockets_Generic** library v2.3.1+](https://platformio.org/lib/show/11283/WebSockets_Generic) by using [**Library Manager**](https://platformio.org/lib/show/11283/WebSockets_Generic/installation). Install [**WebSockets_Generic** library v2.2.2-](https://platformio.org/lib/show/7375/WebSockets_Generic) by using [Library Manager](https://platformio.org/lib/show/7375/WebSockets_Generic/installation). Search for [**WebSockets_Generic**](https://platformio.org/lib/show/11283/WebSockets_Generic) in [Platform.io Author's Libraries](https://platformio.org/lib/search?query=author:%22Khoi%20Hoang%22)
4. Use included [platformio.ini](platformio/platformio.ini) file from examples to ensure that all dependent libraries will installed automatically. Please visit documentation for the other options and examples at [Project Configuration File](https://docs.platformio.org/page/projectconf.html)

---

### Packages' Patches

 1. **To be able to compile, run and automatically detect and display BOARD_NAME on nRF52840/nRF52832 boards**, you have to copy the whole [nRF52 0.21.0](Packages_Patches/adafruit/hardware/nrf52/0.21.0) directory into Adafruit nRF52 directory (~/.arduino15/packages/adafruit/hardware/nrf52/0.21.0). 

Supposing the Adafruit nRF52 version is 0.21.0. These files must be copied into the directory:
- `~/.arduino15/packages/adafruit/hardware/nrf52/0.21.0/platform.txt`
- `~/.arduino15/packages/adafruit/hardware/nrf52/0.21.0/boards.txt`
- `~/.arduino15/packages/adafruit/hardware/nrf52/0.21.0/variants/NINA_B302_ublox/variant.h`
- `~/.arduino15/packages/adafruit/hardware/nrf52/0.21.0/variants/NINA_B302_ublox/variant.cpp`
- `~/.arduino15/packages/adafruit/hardware/nrf52/0.21.0/variants/NINA_B112_ublox/variant.h`
- `~/.arduino15/packages/adafruit/hardware/nrf52/0.21.0/variants/NINA_B112_ublox/variant.cpp`
- **`~/.arduino15/packages/adafruit/hardware/nrf52/0.21.0/cores/nRF5/Udp.h`**

Whenever a new version is installed, remember to copy these files into the new version directory. For example, new version is x.yy.z
These files must be copied into the directory:

- `~/.arduino15/packages/adafruit/hardware/nrf52/x.yy.z/platform.txt`
- `~/.arduino15/packages/adafruit/hardware/nrf52/x.yy.z/boards.txt`
- `~/.arduino15/packages/adafruit/hardware/nrf52/x.yy.z/variants/NINA_B302_ublox/variant.h`
- `~/.arduino15/packages/adafruit/hardware/nrf52/x.yy.z/variants/NINA_B302_ublox/variant.cpp`
- `~/.arduino15/packages/adafruit/hardware/nrf52/x.yy.z/variants/NINA_B112_ublox/variant.h`
- `~/.arduino15/packages/adafruit/hardware/nrf52/x.yy.z/variants/NINA_B112_ublox/variant.cpp`
- **`~/.arduino15/packages/adafruit/hardware/nrf52/x.yy.z/cores/nRF5/Udp.h`**

 2. **To be able to compile and run on Teensy boards**, you have to copy the file [Teensy boards.txt](Packages_Patches/hardware/teensy/avr/boards.txt) into Teensy hardware directory (./arduino-1.8.12/hardware/teensy/avr/boards.txt). 

Supposing the Arduino version is 1.8.12. This file must be copied into the directory:

- `./arduino-1.8.12/hardware/teensy/avr/boards.txt`

Whenever a new version is installed, remember to copy this file into the new version directory. For example, new version is x.yy.zz
This file must be copied into the directory:

- `./arduino-x.yy.zz/hardware/teensy/avr/boards.txt`

 3. **To be able to compile and run on SAM DUE boards**, you have to copy the whole [SAM DUE](Packages_Patches/arduino/hardware/sam/1.6.12) directory into Arduino sam directory (~/.arduino15/packages/arduino/hardware/sam/1.6.12). 

Supposing the Arduino SAM core version is 1.6.12. This file must be copied into the directory:

- `~/.arduino15/packages/arduino/hardware/sam/1.6.12/platform.txt`

Whenever a new version is installed, remember to copy this file into the new version directory. For example, new version is x.yy.zz
This file must be copied into the directory:

- `~/.arduino15/packages/arduino/hardware/sam/x.yy.zz/platform.txt`

 4. ***To be able to compile without error and automatically detect and display BOARD_NAME on Arduino SAMD (Nano-33-IoT, etc) boards***, you have to copy the whole [Arduino SAMD cores 1.8.9](Packages_Patches/arduino/hardware/samd/1.8.9) directory into Arduino SAMD directory (~/.arduino15/packages/arduino/hardware/samd/1.8.9).
 
Supposing the Arduino SAMD version is 1.8.9. These files must be copied into the directory:
- `~/.arduino15/packages/arduino/hardware/samd/1.8.9/platform.txt`
- ***`~/.arduino15/packages/arduino/hardware/samd/1.8.9/cores/arduino/Arduino.h`***

Whenever a new version is installed, remember to copy these files into the new version directory. For example, new version is x.yy.z

These files must be copied into the directory:

- `~/.arduino15/packages/arduino/hardware/samd/x.yy.z/platform.txt`
- ***`~/.arduino15/packages/arduino/hardware/samd/x.yy.z/cores/arduino/Arduino.h`***
 
 This is mandatory to fix the ***notorious Arduino SAMD compiler error***. See [Improve Arduino compatibility with the STL (min and max macro)](https://github.com/arduino/ArduinoCore-samd/pull/399)
 
```
 ...\arm-none-eabi\include\c++\7.2.1\bits\stl_algobase.h:243:56: error: macro "min" passed 3 arguments, but takes just 2
     min(const _Tp& __a, const _Tp& __b, _Compare __comp)
```

Whenever the above-mentioned compiler error issue is fixed with the new Arduino SAMD release, you don't need to copy the `Arduino.h` file anymore.

 5. **To be able to automatically detect and display BOARD_NAME on Adafruit SAMD (Itsy-Bitsy M4, etc) boards**, you have to copy the file [Adafruit SAMD platform.txt](Packages_Patches/adafruit/hardware/samd/1.6.3) into Adafruit samd directory (~/.arduino15/packages/adafruit/hardware/samd/1.6.3). 

Supposing the Adafruit SAMD core version is 1.6.3. This file must be copied into the directory:

- `~/.arduino15/packages/adafruit/hardware/samd/1.6.3/platform.txt`

Whenever a new version is installed, remember to copy this file into the new version directory. For example, new version is x.yy.zz
This file must be copied into the directory:

- `~/.arduino15/packages/adafruit/hardware/samd/x.yy.zz/platform.txt`

 6. **To be able to automatically detect and display BOARD_NAME on Seeeduino SAMD (XIAO M0, Wio Terminal, etc) boards**, you have to copy the file [Seeeduino SAMD platform.txt](Packages_Patches/Seeeduino/hardware/samd/1.7.9) into Adafruit samd directory (~/.arduino15/packages/Seeeduino/hardware/samd/1.7.9). 

Supposing the Seeeduino SAMD core version is 1.7.9. This file must be copied into the directory:

- `~/.arduino15/packages/Seeeduino/hardware/samd/1.7.9/platform.txt`

Whenever a new version is installed, remember to copy this file into the new version directory. For example, new version is x.yy.zz
This file must be copied into the directory:

- `~/.arduino15/packages/Seeeduino/hardware/samd/x.yy.zz/platform.txt`

7. **To use Serial1 on some STM32 boards without Serial1 definition (Nucleo-144 NUCLEO_F767ZI, Nucleo-64 NUCLEO_L053R8, etc.) boards**, you have to copy the files [STM32 variant.h](Packages_Patches/STM32/hardware/stm32/1.9.0) into STM32 stm32 directory (~/.arduino15/packages/STM32/hardware/stm32/1.9.0). You have to modify the files corresponding to your boards, this is just an illustration how to do.

Supposing the STM32 stm32 core version is 1.9.0. These files must be copied into the directory:

- `~/.arduino15/packages/STM32/hardware/stm32/1.9.0/variants/NUCLEO_F767ZI/variant.h` for Nucleo-144 NUCLEO_F767ZI.
- `~/.arduino15/packages/STM32/hardware/stm32/1.9.0/variants/NUCLEO_L053R8/variant.h` for Nucleo-64 NUCLEO_L053R8.

Whenever a new version is installed, remember to copy this file into the new version directory. For example, new version is x.yy.zz,
theses files must be copied into the corresponding directory:

- `~/.arduino15/packages/STM32/hardware/stm32/x.yy.zz/variants/NUCLEO_F767ZI/variant.h`
- `~/.arduino15/packages/STM32/hardware/stm32/x.yy.zz/variants/NUCLEO_L053R8/variant.h`

---

### Libraries' Patches

1. If your application requires 2K+ HTML page, the current [`Ethernet library`](https://www.arduino.cc/en/Reference/Ethernet) must be modified if you are using W5200/W5500 Ethernet shields. W5100 is not supported for 2K+ buffer. If you use boards requiring different CS/SS pin for W5x00 Ethernet shield, for example ESP32, ESP8266, nRF52, etc., you also have to modify the following libraries to be able to specify the CS/SS pin correctly.

2. To fix [`Ethernet library`](https://www.arduino.cc/en/Reference/Ethernet), just copy these following files into the [`Ethernet library`](https://www.arduino.cc/en/Reference/Ethernet) directory to overwrite the old files:

- [Ethernet.h](LibraryPatches/Ethernet/src/Ethernet.h)
- [Ethernet.cpp](LibraryPatches/Ethernet/src/Ethernet.cpp)
- [EthernetServer.cpp](LibraryPatches/Ethernet/src/EthernetServer.cpp)
- [w5100.h](LibraryPatches/Ethernet/src/utility/w5100.h)
- [w5100.cpp](LibraryPatches/Ethernet/src/utility/w5100.cpp)

3. To fix [`EthernetLarge library`](https://github.com/OPEnSLab-OSU/EthernetLarge), just copy these following files into the [`EthernetLarge library`](https://github.com/OPEnSLab-OSU/EthernetLarge) directory to overwrite the old files:

- [EthernetLarge.h](LibraryPatches/EthernetLarge/src/EthernetLarge.h)
- [EthernetLarge.cpp](LibraryPatches/EthernetLarge/src/EthernetLarge.cpp)
- [EthernetServer.cpp](LibraryPatches/EthernetLarge/src/EthernetServer.cpp)
- [w5100.h](LibraryPatches/EthernetLarge/src/utility/w5100.h)
- [w5100.cpp](LibraryPatches/EthernetLarge/src/utility/w5100.cpp)

4. To fix [`Ethernet2 library`](https://github.com/khoih-prog/Ethernet2), just copy these following files into the [`Ethernet2 library`](https://github.com/khoih-prog/Ethernet2) directory to overwrite the old files:

- [Ethernet2.h](LibraryPatches/Ethernet2/src/Ethernet2.h)
- [Ethernet2.cpp](LibraryPatches/Ethernet2/src/Ethernet2.cpp)

To add **UDP Multicast** support, necessary for these [**MDNS_Generic**](https://github.com/khoih-prog/MDNS_Generic), [**UPnP_Generic**](https://github.com/khoih-prog/UPnP_Generic) libraries:

- [EthernetUdp2.h](LibraryPatches/Ethernet2/src/EthernetUdp2.h)
- [EthernetUdp2.cpp](LibraryPatches/Ethernet2/src/EthernetUdp2.cpp)

5. To fix [`Ethernet3 library`](https://github.com/sstaub/Ethernet3), just copy these following files into the [`Ethernet3 library`](https://github.com/sstaub/Ethernet3) directory to overwrite the old files:

- [Ethernet3.h](LibraryPatches/Ethernet3/src/Ethernet3.h)
- [Ethernet3.cpp](LibraryPatches/Ethernet3/src/Ethernet3.cpp)

6. **To be able to compile and run on nRF52 boards with ENC28J60 using UIPEthernet library**, you have to copy these following files into the UIPEthernet `utility` directory to overwrite the old files:

- For [UIPEthernet v2.0.8](https://github.com/UIPEthernet/UIPEthernet)

  - [UIPEthernet.h](LibraryPatches/UIPEthernet/UIPEthernet.h)
  - [UIPEthernet.cpp](LibraryPatches/UIPEthernet/UIPEthernet.cpp)
  - [Enc28J60Network.h](LibraryPatches/UIPEthernet/utility/Enc28J60Network.h)
  - [Enc28J60Network.cpp](LibraryPatches/UIPEthernet/utility/Enc28J60Network.cpp)

- For [UIPEthernet v2.0.9](https://github.com/UIPEthernet/UIPEthernet)

  - [UIPEthernet.h](LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.h)
  - [UIPEthernet.cpp](LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.cpp)
  - [Enc28J60Network.h](LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.h)
  - [Enc28J60Network.cpp](LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.cpp)

7. To fix [`ESP32 compile error`](https://github.com/espressif/arduino-esp32), just copy the following file into the [`ESP32`](https://github.com/espressif/arduino-esp32) cores/esp32 directory (e.g. ./arduino-1.8.12/hardware/espressif/cores/esp32) to overwrite the old file:
- [Server.h](LibraryPatches/esp32/cores/esp32/Server.h)

---
---

### HOWTO Use analogRead() with ESP32 running WiFi and/or BlueTooth (BT/BLE)

Please have a look at [**ESP_WiFiManager Issue 39: Not able to read analog port when using the autoconnect example**](https://github.com/khoih-prog/ESP_WiFiManager/issues/39) to have more detailed description and solution of the issue.

#### 1.  ESP32 has 2 ADCs, named ADC1 and ADC2

#### 2. ESP32 ADCs functions

- ADC1 controls ADC function for pins **GPIO32-GPIO39**
- ADC2 controls ADC function for pins **GPIO0, 2, 4, 12-15, 25-27**

#### 3.. ESP32 WiFi uses ADC2 for WiFi functions

Look in file [**adc_common.c**](https://github.com/espressif/esp-idf/blob/master/components/driver/adc_common.c#L61)

> In ADC2, there're two locks used for different cases:
> 1. lock shared with app and Wi-Fi:
>    ESP32:
>         When Wi-Fi using the ADC2, we assume it will never stop, so app checks the lock and returns immediately if failed.
>    ESP32S2:
>         The controller's control over the ADC is determined by the arbiter. There is no need to control by lock.
> 
> 2. lock shared between tasks:
>    when several tasks sharing the ADC2, we want to guarantee
>    all the requests will be handled.
>    Since conversions are short (about 31us), app returns the lock very soon,
>    we use a spinlock to stand there waiting to do conversions one by one.
> 
> adc2_spinlock should be acquired first, then adc2_wifi_lock or rtc_spinlock.


- In order to use ADC2 for other functions, we have to **acquire complicated firmware locks and very difficult to do**
- So, it's not advisable to use ADC2 with WiFi/BlueTooth (BT/BLE).
- Use ADC1, and pins GPIO32-GPIO39
- If somehow it's a must to use those pins serviced by ADC2 (**GPIO0, 2, 4, 12, 13, 14, 15, 25, 26 and 27**), use the **fix mentioned at the end** of [**ESP_WiFiManager Issue 39: Not able to read analog port when using the autoconnect example**](https://github.com/khoih-prog/ESP_WiFiManager/issues/39) to work with ESP32 WiFi/BlueTooth (BT/BLE).

---
---

### Important Notes

1. Code is restructured to provide flexibility to make it easy to support many more **WiFi/Ethernet** modules/shields in the future. Please delete the *.cpp files, replaced by *.hpp files, in the src directory, if *.cpp files still exist after installing new version.

2. For **Adafruit nRF52**, use the SPI's  pin as follows:

  - SS/CS     = 10
  - SPI_MOSI  = MO(SI)
  - SPI_MISO  = MI(SO)
  - SPI_SCK   = SCK

3. For **Adafruit SAMD21/SAMD51**, use the SPI's CS/SS pin as follows:

  - Itsy-Bitsy M0/M4, Feather M0 (Express), Hallowing M0 Express, Zero, Metro M0 => use CS = 16 = pin A2
  - Feather M4 (SAMD51)   => use SS/CS = 9
  - Grand Central M4      => use SS/CS = 53
  - Hallowing M4          => use SS/CS = 10
  - Metro M4 AirLift      => use SS/CS = 36

To know the default CS/SS pins of not listed boards, check the related `variant.h` files in 

`~/.arduino15/packages/adafruit/hardware/samd/x.y.zz/variants/board_name/variant.h`

4. For **Arduino SAM DUE**, use the SPI's  pin as follows:

  - SS/CS     = 10
  - SPI_MOSI  = 75 ( pin 4 @ [ICSP connector](pics/ICSP_connector.jpg) )
  - SPI_MISO  = 74 ( pin 1 @ [ICSP connector](pics/ICSP_connector.jpg) )
  - SPI_SCK   = 76 ( pin 3 @ [ICSP connector](pics/ICSP_connector.jpg) )
  
<p align="center">
    <img src="https://github.com/khoih-prog/WebSockets2_Generic/blob/master/pics/ICSP_connector.jpg">
</p>
  
---
---

##### Limitations #####

 - max input length is limited to the ram size and the `WEBSOCKETS_MAX_DATA_SIZE` define
 - max output length has no limit (the hardware is the limit)
 - Client send big frames with mask 0x00000000 (on AVR all frames)
 - continuation frame reassembly need to be handled in the application code

##### Limitations for Async #####

 - Functions called from within the context of the websocket event might not honor `yield()` and/or `delay()`.  See [this issue](https://github.com/Links2004/arduinoWebSockets/issues/58#issuecomment-192376395) for more info and a potential workaround.
 - wss / SSL is not possible.

---

##### Originally Supported Hardware #####

 - ESP8266 [Arduino for ESP8266](https://github.com/esp8266/Arduino/)
 - ESP32 [Arduino for ESP32](https://github.com/espressif/arduino-esp32)
 - ESP31B
 - Particle with STM32 ARM Cortex M3
 - ATmega328 with Ethernet Shield (ATmega branch)
 - ATmega328 with ENC28J60 (ATmega branch)
 - ATmega2560 with Ethernet Shield (ATmega branch)
 - ATmega2560 with ENC28J60 (ATmega branch)

---

#### New support from v2.3.1

1. **ENC28J60's EthernetENC Library.**

#### New support from v2.2.3

1. **STM32F/L/H/G/WB/MP1 (Nucleo-144 NUCLEO_F767ZI, Nucleo-64 NUCLEO_L053R8, etc.)**
2. **Seeeduino SAMD21/SAMD51 boards (SEEED_WIO_TERMINAL, SEEED_FEMTO_M0, SEEED_XIAO_M0, Wio_Lite_MG126, WIO_GPS_BOARD, SEEEDUINO_ZERO, SEEEDUINO_LORAWAN, SEEED_GROVE_UI_WIRELESS, etc.)**
3. **W5x00's Ethernet2, Ethernet3, EthernetLarge Libraries.**

#### New support from v2.2.2

1. **Teensy** boards, such as **Teensy 4.1, 4.0. 3.6, 3.5, 3.2/3.1, 3.0, LC.**.
2. **STM32 (Nucleo-144, Nucleo-64, Nucleo-32, Discovery, STM32F1, STM32F3, STM32F4, STM32H7, STM32L0, etc.)**.
3. **SAM DUE**
4. WebSocketServer for those supported boards.

#### New support from v2.1.3
 
1. **nRF52** boards, such as **AdaFruit Feather nRF52832, nRF52840 Express, BlueFruit Sense, Itsy-Bitsy nRF52840 Express, Metro nRF52840 Express, NINA_B30_ublox, etc.**
2. **SAM51 (Itsy-Bitsy M4, Metro M4, Grand Central M4, Feather M4 Express, etc.) and SAM DUE**.
3. **SAMD21 (ZERO, MKR, NANO_33_IOT, M0, M0 Pro, AdaFruit CIRCUITPLAYGROUND_EXPRESS, etc.)**

##### Note: #####

  Version 2.0.0 and up is not compatible with AVR/ATmega, check ATmega branch.
  
  Version 2.3.0 has API changes for the ESP8266 BearSSL (may break existing code)

  Arduino for AVR not supports std namespace of c++.

### wss / SSL ###

 supported for:
 
 - wss client on the ESP8266
 - wss / SSL is not natively supported in WebSocketsServer. However it is possible to achieve secure websockets
   by running the device behind an SSL proxy. See [Nginx](examples/Nginx/esp8266.ssl.reverse.proxy.conf) for a
   sample Nginx server configuration file to enable this.

### ESP Async TCP ###

This libary can run in Async TCP mode on the ESP.

The mode can be activated in the [WebSockets_Generic.h](src/WebSockets_Generic.h) (see WEBSOCKETS_NETWORK_TYPE define).

[ESPAsyncTCP](https://github.com/me-no-dev/ESPAsyncTCP) library is required.

---

### How to use

In your code, select one of the currently supported network connection from the following list:

1. **NETWORK_ESP8266_ASYNC** for ESP8266 Async
2. **NETWORK_W5100** for W5x00 Ethernet
3. **NETWORK_ENC28J60** for ENC28J60 Ethernet using UIPEthernet library
4. **NETWORK_ESP32** for ESP32 WiFi
5. **NETWORK_ESP32_ETH** for ESP32 Ethernet
6. **NETWORK_WIFININA** for WiFiNINA
7. **NETWORK_ETHERNET_ENC** for ENC28J60 Ethernet using EthernetENC library

then add `#define WEBSOCKETS_NETWORK_TYPE`  before `#include <WebSocketsClient_Generic.h>`

For example:

```
#define WEBSOCKETS_NETWORK_TYPE   NETWORK_WIFININA

#include <WebSocketsClient_Generic.h>
```

### High Level Client API ###

 - `begin` : Initiate connection sequence to the WebSocket host.
 
```
void begin(const char * host, uint16_t port, const char * url = "/", const char * protocol = "arduino");
void begin(String host, uint16_t port, String url = "/", String protocol = "arduino");
void begin(IPAddress host, uint16_t port, const char * url = "/", const char * protocol = "arduino");

void begin(IPAddress host, uint16_t port, String url = "/", String protocol = "arduino");
```

 - `beginSSL` : Initiate SSL connection sequence to the WebSocket host.
 
```
#if defined(HAS_SSL)
#ifdef SSL_AXTLS

    void beginSSL(const char * host, uint16_t port, const char * url = "/", const char * fingerprint = "", const char * protocol = "arduino");
    void beginSSL(IPAddress host, uint16_t port, String url = "/", String fingerprint = "", String protocol = "arduino");
    void beginSSL(String host, uint16_t port, String url = "/", String fingerprint = "", String protocol = "arduino");

#else

    void beginSSL(const char * host, uint16_t port, const char * url = "/", const uint8_t * fingerprint = NULL, const char * protocol = "arduino");
    void beginSSL(IPAddress host, uint16_t port, String url = "/", String fingerprint = "", String protocol = "arduino");   
    void beginSslWithCA(const char * host, uint16_t port, const char * url = "/", BearSSL::X509List * CA_cert = NULL, const char * protocol = "arduino");

#endif    // SSL_AXTLS

    void beginSslWithCA(const char * host, uint16_t port, const char * url = "/", const char * CA_cert = NULL, const char * protocol = "arduino");

#endif    // HAS_SSL
```

 - `beginSocketIO` : Initiate connection sequence to the WebSocketIO host.
 
```
void beginSocketIO(const char * host, uint16_t port, const char * url = "/socket.io/?EIO=3", const char * protocol = "arduino");
void beginSocketIO(String host, uint16_t port, String url = "/socket.io/?EIO=3", String protocol = "arduino");

void beginSocketIO(IPAddress host, uint16_t port, String url = "/socket.io/?EIO=3", String protocol = "arduino");
```

---

 - `onEvent`: Callback to handle for websocket events

```
void onEvent(WebSocketClientEvent cbEvent);
```

 - `WebSocketClientEvent`: Handler for websocket events
 
```
void (*WebSocketClientEvent)(WStype_t type, uint8_t * payload, size_t length)
```

Where `WStype_t type` is defined as:

```
typedef enum 
{
  WStype_ERROR,
  WStype_DISCONNECTED,
  WStype_CONNECTED,
  WStype_TEXT,
  WStype_BIN,
  WStype_FRAGMENT_TEXT_START,
  WStype_FRAGMENT_BIN_START,
  WStype_FRAGMENT,
  WStype_FRAGMENT_FIN,
  WStype_PING,
  WStype_PONG,
} WStype_t;
```

---
---

### Examples

#### For Generic boards using W5x00 Ethernet shield

1. [Generic_WebSocketClientSocketIO_W5500](examples/Generic/W5500/Generic_WebSocketClientSocketIO_W5500)
2. [Generic_WebSocketClientStompOverSockJs_W5500](examples/Generic/W5500/Generic_WebSocketClientStompOverSockJs_W5500)
3. [Generic_WebSocketClientStomp_W5500](examples/Generic/W5500/Generic_WebSocketClientStomp_W5500)
4. [Generic_WebSocketClient_W5500](examples/Generic/W5500/Generic_WebSocketClient_W5500)
5. [Generic_WebSocketServerAllFunctionsDemo_W5500](examples/Generic/W5500/Generic_WebSocketServerAllFunctionsDemo_W5500)
6. [Generic_WebSocketServerFragmentation_W5500](examples/Generic/W5500/Generic_WebSocketServerFragmentation_W5500)
7. [Generic_WebSocketServerHttpHeaderValidation_W5500](examples/Generic/W5500/Generic_WebSocketServerHttpHeaderValidation_W5500)
8. [Generic_WebSocketServer_LEDcontrol_W5500](examples/Generic/W5500/Generic_WebSocketServer_LEDcontrol_W5500)
9. [Generic_WebSocketServer_W5500](examples/Generic/W5500/Generic_WebSocketServer_W5500)

#### For Generic boards using WiFiNINA

1. [Generic_WebSocketClientSocketIO_WiFiNINA](examples/Generic/WiFiNINA/Generic_WebSocketClientSocketIO_WiFiNINA)
2. [Generic_WebSocketClientStompOverSockJs_WiFiNINA](examples/Generic/WiFiNINA/Generic_WebSocketClientStompOverSockJs_WiFiNINA)
3. [Generic_WebSocketClientStomp_WiFiNINA](examples/Generic/WiFiNINA/Generic_WebSocketClientStomp_WiFiNINA)
4. [Generic_WebSocketClient_WiFiNINA](examples/Generic/WiFiNINA/Generic_WebSocketClient_WiFiNINA)
5. [Generic_WebSocketServerAllFunctionsDemo_WiFiNINA](examples/Generic/WiFiNINA/Generic_WebSocketServerAllFunctionsDemo_WiFiNINA)
6. [Generic_WebSocketServerFragmentation_WiFiNINA](examples/Generic/WiFiNINA/Generic_WebSocketServerFragmentation_WiFiNINA)
7. [Generic_WebSocketServerHttpHeaderValidation_WiFiNINA](examples/Generic/WiFiNINA/Generic_WebSocketServerHttpHeaderValidation_WiFiNINA)
8. [Generic_WebSocketServer_LEDcontrol_WiFiNINA](examples/Generic/WiFiNINA/Generic_WebSocketServer_LEDcontrol_WiFiNINA)
9. [Generic_WebSocketServer_WiFiNINA](examples/Generic/WiFiNINA/Generic_WebSocketServer_WiFiNINA)

#### For Generic boards using ENC28J60 Ethernet shield using EthernetENC library

1. [Generic_WebSocketClientSocketIO_EthernetENC](examples/Generic/EthernetENC/Generic_WebSocketClientSocketIO_EthernetENC)
2. [Generic_WebSocketClientStompOverSockJs_EthernetENC](examples/Generic/EthernetENC/Generic_WebSocketClientStompOverSockJs_EthernetENC)
3. [Generic_WebSocketClientStomp_EthernetENC](examples/Generic/EthernetENC/Generic_WebSocketClientStomp_EthernetENC)
4. [Generic_WebSocketClient_EthernetENC](examples/Generic/EthernetENC/Generic_WebSocketClient_EthernetENC)
5. [Generic_WebSocketServerAllFunctionsDemo_EthernetENC](examples/Generic/EthernetENC/Generic_WebSocketServerAllFunctionsDemo_EthernetENC)
6. [Generic_WebSocketServerFragmentation_EthernetENC](examples/Generic/EthernetENC/Generic_WebSocketServerFragmentation_EthernetENC)
7. [Generic_WebSocketServerHttpHeaderValidation_EthernetENC](examples/Generic/EthernetENC/Generic_WebSocketServerHttpHeaderValidation_EthernetENC)
8. [Generic_WebSocketServer_LEDcontrol_EthernetENC](examples/Generic/EthernetENC/Generic_WebSocketServer_LEDcontrol_EthernetENC)
9. [Generic_WebSocketServer_EthernetENC](examples/Generic/EthernetENC/Generic_WebSocketServer_EthernetENC)

#### For WiFiNINA

1. [nRF52_Blynk_NINA_Alexa](examples/WiFiNINA/nRF52_Blynk_NINA_Alexa)
2. [SAMD_Blynk_NINA_Alexa](examples/WiFiNINA/SAMD_Blynk_NINA_Alexa)
3. [WebSocketClient_NINA](examples/WiFiNINA/WebSocketClient_NINA)
4. [WebSocketClientSocketIO_NINA](examples/WiFiNINA/WebSocketClientSocketIO_NINA)
5. [WebSocketClientStomp_NINA](examples/WiFiNINA/WebSocketClientStomp_NINA)
6. [WebSocketClientStompOverSockJs_NINA](examples/WiFiNINA/WebSocketClientStompOverSockJs_NINA)

#### For W5x00 Ethernet shield

1. [nRF52_Blynk_W5500_Alexa](examples/W5500/nRF52_Blynk_W5500_Alexa)
2. [SAMD_Blynk_W5500_Alexa](examples/W5500/SAMD_Blynk_W5500_Alexa)
3. [WebSocketClient_W5500](examples/W5500/WebSocketClient_W5500)
4. [WebSocketClientSocketIO_W5500](examples/W5500/WebSocketClientSocketIO_W5500)
5. [WebSocketClientStomp_W5500](examples/W5500/WebSocketClientStomp_W5500)
6. [WebSocketClientStompOverSockJs_W5500](examples/W5500/WebSocketClientStompOverSockJs_W5500)

#### For ENC28J60 Ethernet shield using UIPEthernet library

1. [nRF52_Blynk_ENC_Alexa](examples/ENC28J60/nRF52_Blynk_ENC_Alexa)
2. [SAMD_Blynk_ENC_Alexa](examples/ENC28J60/SAMD_Blynk_ENC_Alexa)
3. [WebSocketClient_ENC](examples/ENC28J60/WebSocketClient_ENC)
4. [WebSocketClientSocketIO_ENC](examples/ENC28J60/WebSocketClientSocketIO_ENC)
5. [WebSocketClientStomp_ENC](examples/ENC28J60/WebSocketClientStomp_ENC)
6. [WebSocketClientStompOverSockJs_ENC](examples/ENC28J60/WebSocketClientStompOverSockJs_ENC)


#### For ESP32 board

1. [ESP32_WebSocketClient](examples/esp32/ESP32_WebSocketClient)
2. [ESP32_WebSocketClientSSL](examples/esp32/ESP32_WebSocketClientSSL)
3. [ESP32_WebSocketServer](examples/esp32/ESP32_WebSocketServer)

#### For ESP8266 board

 1. [ESP8266_WebSocketClient](examples/esp8266/ESP8266_WebSocketClient)
 2. [ESP8266_WebSocketClientSocketIO](examples/esp8266/ESP8266_WebSocketClientSocketIO)
 3. [ESP8266_WebSocketClientSocketIOack](examples/esp8266/ESP8266_WebSocketClientSocketIOack)
 4. [ESP8266_WebSocketClientSSL](examples/esp8266/ESP8266_WebSocketClientSSL)
 5. [ESP8266_WebSocketClientStomp](examples/esp8266/ESP8266_WebSocketClientStomp)
 6. [ESP8266_WebSocketClientStompOverSockJs](examples/esp8266/ESP8266_WebSocketClientStompOverSockJs)
 7. [ESP8266_WebSocketServer](examples/esp8266/ESP8266_WebSocketServer)
 8. [ESP8266_WebSocketServerAllFunctionsDemo](examples/esp8266/ESP8266_WebSocketServerAllFunctionsDemo)
 9. [ESP8266_WebSocketServerFragmentation](examples/esp8266/ESP8266_WebSocketServerFragmentation)
10. [ESP8266_WebSocketServerHttpHeaderValidation](examples/esp8266/ESP8266_WebSocketServerHttpHeaderValidation)
11. [ESP8266_WebSocketServer_LEDcontrol](examples/esp8266/ESP8266_WebSocketServer_LEDcontrol)


---
---

### Example [Generic_WebSocketClient_WiFiNINA](examples/Generic/WiFiNINA/Generic_WebSocketClient_WiFiNINA)

```cpp
#define _WEBSOCKETS_LOGLEVEL_     3
#define WEBSOCKETS_NETWORK_TYPE   NETWORK_WIFININA

#include <WebSocketsClient_Generic.h>

WebSocketsClient webSocket;

// Select the IP address according to your local network
IPAddress clientIP(192, 168, 2, 225);
IPAddress serverIP(192, 168, 2, 140);

int status = WL_IDLE_STATUS;

///////please enter your sensitive data in the Secret tab/arduino_secrets.h

char ssid[] = "your_ssid";        // your network SSID (name)
char pass[] = "12345678";    // your network password (use for WPA, or use as key for WEP), length must be 8+

bool alreadyConnected = false;

void webSocketEvent(WStype_t type, uint8_t * payload, size_t length)
{
  switch (type)
  {
    case WStype_DISCONNECTED:
      if (alreadyConnected)
      {
        Serial.println("[WSc] Disconnected!");
        alreadyConnected = false;
      }
      
      break;
    case WStype_CONNECTED:
      {
        alreadyConnected = true;
        
        Serial.print("[WSc] Connected to url: ");
        Serial.println((char *) payload);

        // send message to server when Connected
        webSocket.sendTXT("Connected");
      }
      break;
    case WStype_TEXT:
      Serial.print("[WSc] get text: ");
      Serial.println((char *) payload);

      // send message to server
      // webSocket.sendTXT("message here");
      break;
    case WStype_BIN:
      Serial.print("[WSc] get binary length: ");
      Serial.println(length);

      // KH, To check
      // hexdump(payload, length);

      // send data to server
      webSocket.sendBIN(payload, length);
      break;

    case WStype_PING:
      // pong will be send automatically
      Serial.println("[WSc] get ping");
      break;
    case WStype_PONG:
      // answer to a ping we send
      Serial.println("[WSc] get pong");
      break;
      
    default:
      break;
  }
}

void printWifiStatus()
{
  // print the SSID of the network you're attached to:
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());

  // print your board's IP address:
  IPAddress ip = WiFi.localIP();
  Serial.print("WebSockets Client @ IP Address: ");
  Serial.println(ip);

  // print the received signal strength:
  long rssi = WiFi.RSSI();
  Serial.print("signal strength (RSSI):");
  Serial.print(rssi);
  Serial.println(" dBm");
}

void setup()
{
  // Serial.begin(921600);
  Serial.begin(115200);
  while (!Serial);

  Serial.println("\nStart Generic_WebSocketClient_WiFiNINA on " + String(BOARD_NAME));

  Serial.println("Used/default SPI pinout:");
  Serial.print("MOSI:");
  Serial.println(MOSI);
  Serial.print("MISO:");
  Serial.println(MISO);
  Serial.print("SCK:");
  Serial.println(SCK);
  Serial.print("SS:");
  Serial.println(SS);

  for (uint8_t t = 4; t > 0; t--)
  {
    Serial.println("[SETUP] BOOT WAIT " + String(t));
    Serial.flush();
    delay(1000);
  }

  // check for the WiFi module:
  if (WiFi.status() == WL_NO_MODULE)
  {
    Serial.println("Communication with WiFi module failed!");
    // don't continue
    while (true);
  }

  String fv = WiFi.firmwareVersion();
  if (fv < WIFI_FIRMWARE_LATEST_VERSION)
  {
    Serial.println("Please upgrade the firmware");
  }

  // attempt to connect to Wifi network:
  while (status != WL_CONNECTED)
  {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
    status = WiFi.begin(ssid, pass);

    // wait 10 seconds for connection:
    //delay(10000);
  }

  printWifiStatus();

  // server address, port and URL
  webSocket.begin(serverIP, 81, "/");

  // event handler
  webSocket.onEvent(webSocketEvent);

  // use HTTP Basic Authorization this is optional remove if not needed
  webSocket.setAuthorization("user", "Password");

  // try ever 5000 again if connection has failed
  webSocket.setReconnectInterval(5000);

  // start heartbeat (optional)
  // ping server every 15000 ms
  // expect pong from server within 3000 ms
  // consider connection disconnected if pong is not received 2 times
  webSocket.enableHeartbeat(15000, 3000, 2);

}

void loop()
{
  webSocket.loop();
}
```

---
---

### Debug Termimal Output Samples

#### 1. Debug Terminal Output when running [nRF52_Blynk_W5500_Alexa](examples/W5500/nRF52_Blynk_W5500_Alexa) on NRF52840_FEATHER

You can see the **Adafruit NRF52840_FEATHER Express** board, with W5500 Ethernet shield, connects to Blynk using [**BlynkEthernet_WM** library](https://github.com/khoih-prog/BlynkEthernet_WM). 

It also uses [**WebSockets_Generic** library](https://github.com/khoih-prog/WebSockets_Generic) to communicate with `SINRIC` skills, and `Alexa`, to control a relay using Alexa voice control via the `Amazon Alexa` phone APP

```
Start nRF52_Blynk_W5500_Alexa using W5x00_Shield on NRF52840_FEATHER
LittleFS Flag read = 0xd0d04321
Flag read = 0xd0d04321
No doubleResetDetected
Saving DOUBLERESETDETECTOR_FLAG to DRD file : 0xd0d01234
Saving DRD file OK
SetFlag write = 0xd0d01234
[881] ======= Start Default Config Data =======
[881] Hdr=NonSSL,BName=Air-Control
[881] Svr=account.duckdns.org,Tok=token1
[881] Svr1=blynk-cloud.com,Tok1=<<my real Blynk auth>>
[882] Prt=8080,SIP=
[882] LoadCfgFile 
[883] OK
[883] ======= Start Stored Config Data =======
[883] Hdr=W5X00,BName=Air-Control
[883] Svr=account.duckdns.org,Tok=****
[884] Svr1=blynk-cloud.com,Tok1=****
[884] Prt=8080,SIP=
[884] CCSum=0x262e,RCSum=0x262e
[886] LoadCredFile 
[886] ChkCrR: Buffer allocated, sz=37
[886] ChkCrR:pdata=****,len=36
[886] ChkCrR:pdata=****,len=24
[886] OK
[887] CrCCsum=ea7,CrRCsum=ea7
[887] Buffer freed
[887] Valid Stored Dynamic Data
[889] LoadCredFile 
[889] CrR:pdata=****,len=36
[889] CrR:pdata=****,len=24
[889] OK
[889] CrCCsum=ea7,CrRCsum=ea7
[890] Hdr=W5X00,BName=Air-Control
[890] Svr=account.duckdns.org,Tok=****
[890] Svr1=blynk-cloud.com,Tok1=****
[890] Prt=8080,SIP=
[890] MAC:FE-F8-E0-CB-D0-BD
_pinCS = 0
W5100 init, using SS_PIN_DEFAULT = 10, new ss_pin = 10, W5100Class::ss_pin = 10
W5100::init: W5500, SSIZE =4096
[2577] IP:192.168.2.89
[2577] bg: noConfigPortal = true
[2577] bg: noConfigPortal = true
[2577] bg:ECon.TryB
[2577] 
    ___  __          __
   / _ )/ /_ _____  / /__
  / _  / / // / _ \/  '_/
 /____/_/\_, /_//_/_/\_\
        /___/ v0.6.1 on Arduino

[2578] BlynkArduinoClient.connect: Connecting to account.duckdns.org:8080
[2687] Ready (ping: 3ms).
[2754] Connected to Blynk Server = account.duckdns.org, Token = ****
[2754] bg:EBCon

Your stored Credentials :
SINRIC API Key = ****
Device_ID1 = ****
[WSc] Service connected to sinric.com at url: /
Waiting for commands from sinric.com ...
Stop doubleResetDetecting
Saving to DRD file : 0xd0d04321
Saving DRD file OK
LittleFS Flag read = 0xd0d04321
ClearFlag write = 0xd0d04321
[WSc] get text: {"deviceId":"****","action":"setPowerState","value":"ON"}
Turn on for unknown device id: ****
[WSc] get text: {"deviceId":"****","action":"setPowerState","value":"OFF"}
Turn off for unknown device id: ****
[WSc] get text: {"action":"test","sender":"web"}
[WSc] received test command from sinric.com
[WSc] get text: {"action":"test","sender":"web"}
[WSc] received test command from sinric.com
[WSc] get text: {"deviceId":"****","action":"setPowerState","value":"ON"}
Turn on device id: ****
[WSc] get text: {"deviceId":"****","action":"setPowerState","value":"OFF"}
Turn off Device ID: ****
```
---

#### 2. Debug Terminal Output when running [SAMD_Blynk_NINA_Alexa](examples/WiFiNINA/SAMD_Blynk_NINA_Alexa) on SAMD NANO_33_IOT

You can see the **Arduino SAMD NANO_33_IoT** board, with built-in WiFiNINA, connects to Blynk using [**Blynk_WiFiNINA_WM** library](https://github.com/khoih-prog/Blynk_WiFiNINA_WM). 

It also uses [**WebSockets_Generic** library](https://github.com/khoih-prog/WebSockets_Generic) to communicate with `SINRIC` skills, and `Alexa`, to control a relay using Alexa voice control via the `Amazon Alexa` phone APP

```
Start Blynk_WiFiNINA_WM using WiFiNINA_Shield on SAMD NANO_33_IOT
Start Blynk_WM
Flag read = 0xd0d04321
No doubleResetDetected
SetFlag write = 0xd0d01234
[21425] ======= Start Default Config Data =======
[21425] Hdr=NonSSL,BrdName=Air-Control
[21426] SSID=SSID1,PW=password1
[21426] SSID1=SSID2,PW1=password2
[21426] Server=account.ddns.net,Token=token
[21426] Server1=account.duckdns.org,Token1=token1
[21426] Port=8080
[21427] ======= End Config Data =======
[21427] Hostname=SAMD-WiFiNINA
[21427] bg: noConfigPortal = true
[21427] ChkCrR:CrCCsum=ef8,CrRCsum=ef8
[21428] CrCCSum=3832,CrRCSum=3832
[21428] ======= Start Stored Config Data =======
[21428] Hdr=SHD_WiFiNINA,BrdName=Air-Control
[21428] SSID=HueNet1,PW=****
[21429] SSID1=HueNet2,PW1=****
[21429] Server=account.ddns.net,Token=****
[21429] Server1=account.duckdns.org,Token1=****
[21429] Port=8080
[21429] ======= End Config Data =======
[21430] CCSum=0x3678,RCSum=0x3678
[21430] Hdr=SHD_WiFiNINA,BrdName=Air-Control
[21430] SSID=HueNet1,PW=****
[21430] SSID1=HueNet2,PW1=****
[21430] Server=account.ddns.net,Token=****
[21431] Server1=account.duckdns.org,Token1=****
[21431] Port=8080
[21431] ======= End Config Data =======
[21431] Connecting MultiWifi...
[22192] con2WF:spentMsec=761
WiFi-begin: return1 = 3
WiFi-begin: return2 = 3
[25451] con2WF:OK
[25452] IP = 192.168.2.46, GW = 192.168.2.1, SN = 255.255.0.0
[25453] b:WOK.TryB
[25453] 
    ___  __          __
   / _ )/ /_ _____  / /__
  / _  / / // / _ \/  '_/
 /____/_/\_, /_//_/_/\_\
        /___/ v0.6.1 on Arduino

[25454] BlynkArduinoClient.connect: Connecting to account.ddns.net:8080
[25488] Ready (ping: 5ms).
[25559] Con2BlynkServer=account.ddns.net,Token=****
[25559] b:WBOK
Stop doubleResetDetecting
ClearFlag write = 0xd0d04321

Your stored Credentials :
SINRIC API Key = ****
Device_ID1 = ****
[WSc] Service connected to sinric.com at url: /
Waiting for commands from sinric.com ...
[WSc] get text: {"deviceId":"****","action":"setPowerState","value":"ON"}
Turn on device id: ****
[WSc] get text: {"deviceId":"****","action":"setPowerState","value":"OFF"}
Turn off Device ID: ****
```

---

#### 3. Debug Terminal Output when running [Generic_WebSocketClient_EthernetENC](examples/Generic/EthernetENC/Generic_WebSocketClient_EthernetENC) on NRF52840_FEATHER

```
Start Generic_WebSocketClient_EthernetENC on NRF52840_FEATHER

[SETUP] BOOT WAIT 4
[SETUP] BOOT WAIT 3
[SETUP] BOOT WAIT 2
[SETUP] BOOT WAIT 1
[WS] Board : NRF52840_FEATHER , setCsPin: 10
[WS] Default SPI pinout:
[WS] MOSI: 25
[WS] MISO: 24
[WS] SCK: 26
[WS] SS: 5
[WS] =========================
WebSockets Client @ IP address: 192.168.2.93
Connecting to WebSockets Server @ IP address: 192.168.2.140
[WS] [WS-Client][handleHeader] RX: HTTP/1.1 101 Switching Protocols
[WS] [WS-Client][handleHeader] RX: Server: arduino-WebSocketsServer
[WS] [WS-Client][handleHeader] RX: Upgrade: websocket
[WS] [WS-Client][handleHeader] RX: Connection: Upgrade
[WS] [WS-Client][handleHeader] RX: Sec-WebSocket-Version: 13
[WS] [WS-Client][handleHeader] RX: Sec-WebSocket-Accept: PJIpSp/QBZPtgaA5LIeNbtWz710=
[WS] [WS-Client][handleHeader] RX: Sec-WebSocket-Protocol: arduino
[WS] [WS-Client][handleHeader] Header read fin.
[WS] [WS-Client][handleHeader] Client settings:
[WS] [WS-Client][handleHeader] - cURL: /
[WS] [WS-Client][handleHeader] - cKey: XAtxzzeVt0HiQZ3cu85Y3A==
[WS] [WS-Client][handleHeader] Server header:
[WS] [WS-Client][handleHeader] - cCode: 101
[WS] [WS-Client][handleHeader] - cIsUpgrade: 1
[WS] [WS-Client][handleHeader] - cIsWebsocket: 1
[WS] [WS-Client][handleHeader] - cAccept: PJIpSp/QBZPtgaA5LIeNbtWz710=
[WS] [WS-Client][handleHeader] - cProtocol: arduino
[WS] [WS-Client][handleHeader] - cExtensions: 
[WS] [WS-Client][handleHeader] - cVersion: 13
[WS] [WS-Client][handleHeader] - cSessionId: 
[WSc] Connected to url: /
[WSc] get text: Connected

```
---

#### 4. Debug Terminal Output when running [Generic_Ethernet_Blinds](https://github.com/khoih-prog/SinricPro_Generic/tree/master/examples/Generic/Blinds/Generic_Ethernet_Blinds) on NRF52840_FEATHER with ENC28J60 using EthernetENC Library

You can see the **NRF52840_FEATHER** board, with NC28J60 using EthernetENC Library, connects to SinricPro service using [**SinricPro_Generic** library](https://github.com/khoih-prog/SinricPro_Generic). 

It also uses this [**WebSockets_Generic** library](https://github.com/khoih-prog/WebSockets_Generic) to communicate with [**SinricPro** service](https://sinric.pro/), to control Blinds via the `Sinric Pro` phone APP


```
Starting Generic_Ethernet_Blinds on NRF52840_FEATHER with ENC28J60 using EthernetENC Library
[SRP] =========================
[SRP] Default SPI pinout:
[SRP] MOSI: 25
[SRP] MISO: 24
[SRP] SCK: 26
[SRP] SS: 5
[SRP] =========================
[SRP] Use default CS/SS pin :  10
Index = 6
Connected!
[Ethernet]: IP-Address is 192.168.2.97
[SRP] Creating new device. No current DeviceId = 123456789012345678901234
[SRP] add(): Adding DeviceId = 123456789012345678901234
[SRP] begin(): App-Key = 12345678-1234-1234-1234-123456789012
[SRP] begin(): App-Secret = 12345678-1234-1234-1234-123456789012-12345678-1234-1234-1234-123456789012
[SRP] Websocket: Connecting to WebSocket Server:  ws.sinric.pro
Websocket: headers:
appkey:12345678-1234-1234-1234-123456789012
deviceids:123456789012345678901234
restoredevicestates:false
platform:NRF52840_FEATHER
version:2.7.0
Connected to SinricPro
[SRP] handleReceiveQueue(): Message(s) in receiveQueue = 1
[SRP] handleReceiveQueue(): Valid Signature. Processing message...
[SRP] extractTimestamp(): Got Timestamp = 1602031564
[SRP] handleReceiveQueue(): Message(s) in receiveQueue = 1
[SRP] handleReceiveQueue(): Valid Signature. Processing message...
[SRP] extractTimestamp(): Got Timestamp = 1602031575
[SRP] handleRequest(): handling request
{
  "header": {
    "payloadVersion": 2,
    "signatureVersion": 1
  },
  "payload": {
    "action": "setPowerState",
    "clientId": "sinricpro-web",
    "createdAt": 1602031575,
    "deviceAttributes": [],
    "deviceId": "123456789012345678901234",
    "replyToken": "4a2080b4-ca92-4fb7-aec1-3aa8d108a818",
    "type": "request",
    "value": {
      "state": "Off"
    }
  },
  "signature": {
    "HMAC": "PttsGuF4w4xfwzJHA6C5WDOmQmBgHXv9eTMSg8hYHXM="
  }
}
Device 123456789012345678901234 power turned off
[SRP] handleSendQueue(): Sending Number of Message(s) in sendQueue = 1
{
  "header": {
    "payloadVersion": 2,
    "signatureVersion": 1
  },
  "payload": {
    "action": "setPowerState",
    "clientId": "sinricpro-web",
    "createdAt": 1602031575,
    "deviceId": "123456789012345678901234",
    "message": "OK",
    "replyToken": "4a2080b4-ca92-4fb7-aec1-3aa8d108a818",
    "success": true,
    "type": "response",
    "value": {
      "state": "Off"
    }
  },
  "signature": {
    "HMAC": "42vn7js8X+KvuHHPZSrGeJt7dtwP8VVl9Y3cZsYtXOA="
  }
}
[SRP] handleSendQueue: Sending to WebSocket
[SRP] handleSendQueue(): Message sent.
[SRP] handleReceiveQueue(): Message(s) in receiveQueue = 1
[SRP] handleReceiveQueue(): Valid Signature. Processing message...
[SRP] extractTimestamp(): Got Timestamp = 1602031577
[SRP] handleRequest(): handling request
{
  "header": {
    "payloadVersion": 2,
    "signatureVersion": 1
  },
  "payload": {
    "action": "setPowerState",
    "clientId": "sinricpro-web",
    "createdAt": 1602031577,
    "deviceAttributes": [],
    "deviceId": "123456789012345678901234",
    "replyToken": "81a2433d-957d-481e-a9f7-2dea5c2e6c78",
    "type": "request",
    "value": {
      "state": "On"
    }
  },
  "signature": {
    "HMAC": "ir18LAhlUVCWHY5hA8QdGY8bzHE/s4XBeX8cwHTaPQI="
  }
}
Device 123456789012345678901234 power turned on
[SRP] handleSendQueue(): Sending Number of Message(s) in sendQueue = 1
{
  "header": {
    "payloadVersion": 2,
    "signatureVersion": 1
  },
  "payload": {
    "action": "setPowerState",
    "clientId": "sinricpro-web",
    "createdAt": 1602031577,
    "deviceId": "123456789012345678901234",
    "message": "OK",
    "replyToken": "81a2433d-957d-481e-a9f7-2dea5c2e6c78",
    "success": true,
    "type": "response",
    "value": {
      "state": "On"
    }
  },
  "signature": {
    "HMAC": "9Z1uVUjeaCf1T2Ol6Fv4wXkz8gaJvEYmmIRfRcDnOgA="
  }
}
[SRP] handleSendQueue: Sending to WebSocket
[SRP] handleSendQueue(): Message sent.
[SRP] handleReceiveQueue(): Message(s) in receiveQueue = 1
[SRP] handleReceiveQueue(): Valid Signature. Processing message...
[SRP] extractTimestamp(): Got Timestamp = 1602031578
[SRP] handleRequest(): handling request
{
  "header": {
    "payloadVersion": 2,
    "signatureVersion": 1
  },
  "payload": {
    "action": "setRangeValue",
    "clientId": "sinricpro-web",
    "createdAt": 1602031578,
    "deviceAttributes": [],
    "deviceId": "123456789012345678901234",
    "replyToken": "16d6fd59-dfd1-4017-ab51-ff8bb85fc806",
    "type": "request",
    "value": {
      "rangeValue": 100
    }
  },
  "signature": {
    "HMAC": "KfAwQ6z5XGvoZaspBVBP+CXnryW0YsEILqyxesHDhJo="
  }
}
Device 123456789012345678901234 set position to 100
[SRP] handleSendQueue(): Sending Number of Message(s) in sendQueue = 1
{
  "header": {
    "payloadVersion": 2,
    "signatureVersion": 1
  },
  "payload": {
    "action": "setRangeValue",
    "clientId": "sinricpro-web",
    "createdAt": 1602031578,
    "deviceId": "123456789012345678901234",
    "message": "OK",
    "replyToken": "16d6fd59-dfd1-4017-ab51-ff8bb85fc806",
    "success": true,
    "type": "response",
    "value": {
      "rangeValue": 100
    }
  },
  "signature": {
    "HMAC": "CNYG9Or+ZH+R2S1Ouvd2bqX8lT/8Siu23T8LycZVtTk="
  }
}
[SRP] handleSendQueue: Sending to WebSocket
[SRP] handleSendQueue(): Message sent.
[SRP] handleReceiveQueue(): Message(s) in receiveQueue = 1
[SRP] handleReceiveQueue(): Valid Signature. Processing message...
[SRP] extractTimestamp(): Got Timestamp = 1602031579
[SRP] handleRequest(): handling request
{
  "header": {
    "payloadVersion": 2,
    "signatureVersion": 1
  },
  "payload": {
    "action": "setRangeValue",
    "clientId": "sinricpro-web",
    "createdAt": 1602031579,
    "deviceAttributes": [],
    "deviceId": "123456789012345678901234",
    "replyToken": "864b1a6b-d539-49e0-bad8-48fa27d80d7f",
    "type": "request",
    "value": {
      "rangeValue": 0
    }
  },
  "signature": {
    "HMAC": "8CsQ57297F9lzrKBopsE8Xga2RdT9pgJpA8moGQFBTs="
  }
}
Device 123456789012345678901234 set position to 0
[SRP] handleSendQueue(): Sending Number of Message(s) in sendQueue = 1
{
  "header": {
    "payloadVersion": 2,
    "signatureVersion": 1
  },
  "payload": {
    "action": "setRangeValue",
    "clientId": "sinricpro-web",
    "createdAt": 1602031579,
    "deviceId": "123456789012345678901234",
    "message": "OK",
    "replyToken": "864b1a6b-d539-49e0-bad8-48fa27d80d7f",
    "success": true,
    "type": "response",
    "value": {
      "rangeValue": 0
    }
  },
  "signature": {
    "HMAC": "AF7bO1deIYIh3VLvVuLaRx6n1ACVYgk2Evl3NgiZ0pg="
  }
}
[SRP] handleSendQueue: Sending to WebSocket
[SRP] handleSendQueue(): Message sent.
```

---

#### 5. Debug Terminal Output when running [WebSocketClientSocketIO_W5500](examples/W5500/WebSocketClientSocketIO_W5500) on NRF52840_FEATHER with W5500 using Ethernet2 Library

```
Start WebSocketClientSocketIO_W5500 on NRF52840_FEATHER with W5x00 using Ethernet2 Library
[SETUP] BOOT WAIT 4
[SETUP] BOOT WAIT 3
[SETUP] BOOT WAIT 2
[SETUP] BOOT WAIT 1
[WS] Board : NRF52840_FEATHER , setCsPin: 10
[WS] Default SPI pinout:
[WS] MOSI: 25
[WS] MISO: 24
[WS] SCK: 26
[WS] SS: 5
[WS] =========================
WebSockets Client @ IP address: 192.168.2.108
Connecting to WebSockets Server @ IP address: 192.168.2.51, port: 3000
["event_name",{"now":6671}]
[WS] [WS-Client][handleHeader] RX: HTTP/1.1 200 OK
[WS] [WS-Client][handleHeader] RX: Content-Type: text/plain; charset=UTF-8
[WS] [WS-Client][handleHeader] RX: Content-Length: 103
[WS] [WS-Client][handleHeader] RX: Access-Control-Allow-Credentials: true
[WS] [WS-Client][handleHeader] RX: Access-Control-Allow-Origin: file://
[WS] [WS-Client][handleHeader] RX: Set-Cookie: io=ivB-kiMefQhNrlkgAAAd; Path=/; HttpOnly; SameSite=Strict
[WS] [WS-Client][handleHeader] RX: Date: Thu, 08 Oct 2020 00:32:59 GMT
[WS] [WS-Client][handleHeader] RX: Connection: keep-alive
[WS] [WS-Client][handleHeader] RX: Keep-Alive: timeout=5
[WS] [WS-Client][handleHeader] Header read fin.
[WS] [WS-Client][handleHeader] Client settings:
[WS] [WS-Client][handleHeader] - cURL: /socket.io/?EIO=3
[WS] [WS-Client][handleHeader] - cKey: DT1hYS8BbVNsE++xI7B82A==
[WS] [WS-Client][handleHeader] Server header:
[WS] [WS-Client][handleHeader] - cCode: 200
[WS] [WS-Client][handleHeader] - cIsUpgrade: 0
[WS] [WS-Client][handleHeader] - cIsWebsocket: 1
[WS] [WS-Client][handleHeader] - cAccept: 
[WS] [WS-Client][handleHeader] - cProtocol: arduino
[WS] [WS-Client][handleHeader] - cExtensions: 
[WS] [WS-Client][handleHeader] - cVersion: 0
[WS] [WS-Client][handleHeader] - cSessionId: ivB-kiMefQhNrlkgAAAd
[IOc] Disconnected
[WS] [WS-Client][handleHeader] RX: HTTP/1.1 200 OK
[WS] [WS-Client][handleHeader] RX: Content-Type: text/plain; charset=UTF-8
[WS] [WS-Client][handleHeader] RX: Content-Length: 103
[WS] [WS-Client][handleHeader] RX: Access-Control-Allow-Credentials: true
[WS] [WS-Client][handleHeader] RX: Access-Control-Allow-Origin: file://
[WS] [WS-Client][handleHeader] RX: Set-Cookie: io=Lq1IQW-WBtymSZzzAAAe; Path=/; HttpOnly; SameSite=Strict
[WS] [WS-Client][handleHeader] RX: Date: Thu, 08 Oct 2020 00:32:59 GMT
[WS] [WS-Client][handleHeader] RX: Connection: keep-alive
[WS] [WS-Client][handleHeader] RX: Keep-Alive: timeout=5
[WS] [WS-Client][handleHeader] Header read fin.
[WS] [WS-Client][handleHeader] Client settings:
[WS] [WS-Client][handleHeader] - cURL: /socket.io/?EIO=3
[WS] [WS-Client][handleHeader] - cKey: onWidNpa6PhedJSy60Az5A==
[WS] [WS-Client][handleHeader] Server header:
[WS] [WS-Client][handleHeader] - cCode: 200
[WS] [WS-Client][handleHeader] - cIsUpgrade: 0
[WS] [WS-Client][handleHeader] - cIsWebsocket: 0
[WS] [WS-Client][handleHeader] - cAccept: 
[WS] [WS-Client][handleHeader] - cProtocol: arduino
[WS] [WS-Client][handleHeader] - cExtensions: 
[WS] [WS-Client][handleHeader] - cVersion: 0
[WS] [WS-Client][handleHeader] - cSessionId: Lq1IQW-WBtymSZzzAAAe
[WS] [WS-Client][handleHeader] RX: HTTP/1.1 101 Switching Protocols
[WS] [WS-Client][handleHeader] RX: Upgrade: websocket
[WS] [WS-Client][handleHeader] RX: Connection: Upgrade
[WS] [WS-Client][handleHeader] RX: Sec-WebSocket-Accept: 92pjBGiagarYGjMy1FsUcKOzrSk=
[WS] [WS-Client][handleHeader] RX: Sec-WebSocket-Protocol: arduino
[WS] [WS-Client][handleHeader] Header read fin.
[WS] [WS-Client][handleHeader] Client settings:
[WS] [WS-Client][handleHeader] - cURL: /socket.io/?EIO=3
[WS] [WS-Client][handleHeader] - cKey: i6rJQeEER2+zCTjRW4OjLg==
[WS] [WS-Client][handleHeader] Server header:
[WS] [WS-Client][handleHeader] - cCode: 101
[WS] [WS-Client][handleHeader] - cIsUpgrade: 1
[WS] [WS-Client][handleHeader] - cIsWebsocket: 1
[WS] [WS-Client][handleHeader] - cAccept: 92pjBGiagarYGjMy1FsUcKOzrSk=
[WS] [WS-Client][handleHeader] - cProtocol: arduino
[WS] [WS-Client][handleHeader] - cExtensions: 
[WS] [WS-Client][handleHeader] - cVersion: 0
[WS] [WS-Client][handleHeader] - cSessionId: Lq1IQW-WBtymSZzzAAAe
[IOc] Connected to url: /socket.io/?EIO=3
```

---

#### 6. Debug Terminal Output when running [Generic_WebSocketClientSocketIO_EthernetENC](examples/Generic/EthernetENC/Generic_WebSocketClientSocketIO_EthernetENC) on NRF52840_FEATHER with ENC28J60 using EthernetENC Library

```
Start Generic_WebSocketClientSocketIO_EthernetENC on NRF52840_FEATHER with ENC28J60 using EthernetENC Library
[SETUP] BOOT WAIT 4
[SETUP] BOOT WAIT 3
[SETUP] BOOT WAIT 2
[SETUP] BOOT WAIT 1
[WS] Board : NRF52840_FEATHER , setCsPin: 10
[WS] Default SPI pinout:
[WS] MOSI: 25
[WS] MISO: 24
[WS] SCK: 26
[WS] SS: 5
[WS] =========================
WebSockets Client @ IP address: 192.168.2.86
Connecting to WebSockets Server @ IP address: 192.168.2.51, port: 3000
["event_name",{"now":9577}]
[WS] [WS-Client][handleHeader] RX: HTTP/1.1 200 OK
[WS] [WS-Client][handleHeader] RX: Content-Type: text/plain; charset=UTF-8
[WS] [WS-Client][handleHeader] RX: Content-Length: 103
[WS] [WS-Client][handleHeader] RX: Access-Control-Allow-Credentials: true
[WS] [WS-Client][handleHeader] RX: Access-Control-Allow-Origin: file://
[WS] [WS-Client][handleHeader] RX: Set-Cookie: io=W5HMvbfTz5Nbn2SgAAAV; Path=/; HttpOnly; SameSite=Strict
[WS] [WS-Client][handleHeader] RX: Date: Thu, 08 Oct 2020 00:23:11 GMT
[WS] [WS-Client][handleHeader] RX: Connection: keep-alive
[WS] [WS-Client][handleHeader] RX: Keep-Alive: timeout=5
[WS] [WS-Client][handleHeader] Header read fin.
[WS] [WS-Client][handleHeader] Client settings:
[WS] [WS-Client][handleHeader] - cURL: /socket.io/?EIO=3
[WS] [WS-Client][handleHeader] - cKey: tTIoy547t0bFK6IwotJ0Ww==
[WS] [WS-Client][handleHeader] Server header:
[WS] [WS-Client][handleHeader] - cCode: 200
[WS] [WS-Client][handleHeader] - cIsUpgrade: 0
[WS] [WS-Client][handleHeader] - cIsWebsocket: 1
[WS] [WS-Client][handleHeader] - cAccept: 
[WS] [WS-Client][handleHeader] - cProtocol: arduino
[WS] [WS-Client][handleHeader] - cExtensions: 
[WS] [WS-Client][handleHeader] - cVersion: 0
[WS] [WS-Client][handleHeader] - cSessionId: W5HMvbfTz5Nbn2SgAAAV
[IOc] Disconnected
[WS] [WS-Client][handleHeader] RX: HTTP/1.1 200 OK
[WS] [WS-Client][handleHeader] RX: Content-Type: text/plain; charset=UTF-8
[WS] [WS-Client][handleHeader] RX: Content-Length: 103
[WS] [WS-Client][handleHeader] RX: Access-Control-Allow-Credentials: true
[WS] [WS-Client][handleHeader] RX: Access-Control-Allow-Origin: file://
[WS] [WS-Client][handleHeader] RX: Set-Cookie: io=r1Kx0T7wZNQ9BHk9AAAW; Path=/; HttpOnly; SameSite=Strict
[WS] [WS-Client][handleHeader] RX: Date: Thu, 08 Oct 2020 00:23:11 GMT
[WS] [WS-Client][handleHeader] RX: Connection: keep-alive
[WS] [WS-Client][handleHeader] RX: Keep-Alive: timeout=5
[WS] [WS-Client][handleHeader] Header read fin.
[WS] [WS-Client][handleHeader] Client settings:
[WS] [WS-Client][handleHeader] - cURL: /socket.io/?EIO=3
[WS] [WS-Client][handleHeader] - cKey: BgGmlEiRrKzeEDEHHE48qA==
[WS] [WS-Client][handleHeader] Server header:
[WS] [WS-Client][handleHeader] - cCode: 200
[WS] [WS-Client][handleHeader] - cIsUpgrade: 0
[WS] [WS-Client][handleHeader] - cIsWebsocket: 0
[WS] [WS-Client][handleHeader] - cAccept: 
[WS] [WS-Client][handleHeader] - cProtocol: arduino
[WS] [WS-Client][handleHeader] - cExtensions: 
[WS] [WS-Client][handleHeader] - cVersion: 0
[WS] [WS-Client][handleHeader] - cSessionId: r1Kx0T7wZNQ9BHk9AAAW
[WS] [WS-Client][handleHeader] RX: HTTP/1.1 101 Switching Protocols
[WS] [WS-Client][handleHeader] RX: Upgrade: websocket
[WS] [WS-Client][handleHeader] RX: Connection: Upgrade
[WS] [WS-Client][handleHeader] RX: Sec-WebSocket-Accept: P76KK/oGpRX1UE1cAtk5jp31+Aw=
[WS] [WS-Client][handleHeader] RX: Sec-WebSocket-Protocol: arduino
[WS] [WS-Client][handleHeader] Header read fin.
[WS] [WS-Client][handleHeader] Client settings:
[WS] [WS-Client][handleHeader] - cURL: /socket.io/?EIO=3
[WS] [WS-Client][handleHeader] - cKey: 1uSPYGC/Asnl0DfyQcW5NQ==
[WS] [WS-Client][handleHeader] Server header:
[WS] [WS-Client][handleHeader] - cCode: 101
[WS] [WS-Client][handleHeader] - cIsUpgrade: 1
[WS] [WS-Client][handleHeader] - cIsWebsocket: 1
[WS] [WS-Client][handleHeader] - cAccept: P76KK/oGpRX1UE1cAtk5jp31+Aw=
[WS] [WS-Client][handleHeader] - cProtocol: arduino
[WS] [WS-Client][handleHeader] - cExtensions: 
[WS] [WS-Client][handleHeader] - cVersion: 0
[WS] [WS-Client][handleHeader] - cSessionId: r1Kx0T7wZNQ9BHk9AAAW
[IOc] Connected to url: /socket.io/?EIO=3
```

---
---

### Releases

### New in v2.3.1

1. Sync with v2.3.1 of original [**WebSockets library**](https://github.com/Links2004/arduinoWebSockets). 
2. Add support to ENC28J60 using [**EthernetENC library**](https://github.com/jandrassy/EthernetENC).
3. Add and update examples

#### New in v2.2.3

1. Add support to all **STM32F/L/H/G/WB/MP1 (Nucleo-144 NUCLEO_F767ZI, Nucleo-64 NUCLEO_L053R8, etc.)**
2. Add support to **Seeeduino SAMD21/SAMD51 boards (SEEED_WIO_TERMINAL, SEEED_FEMTO_M0, SEEED_XIAO_M0, Wio_Lite_MG126, WIO_GPS_BOARD, SEEEDUINO_ZERO, SEEEDUINO_LORAWAN, SEEED_GROVE_UI_WIRELESS, etc.)**
3. Add support to **W5x00's Ethernet2, Ethernet3, EthernetLarge Libraries.**
4. Add sample Packages_Patches for **STM32 stm32** (Nucleo-144 NUCLEO_F767ZI, Nucleo-64 NUCLEO_L053R8)
5. Add Packages' Patches and Ethernet Library Patches.

#### New in v2.2.2

1. Add support to **Teensy** boards, such as **Teensy 4.1, 4.0. 3.6, 3.5, 3.2/3.1, 3.0, LC.**.
2. Add support to **STM32 (Nucleo-144, Nucleo-64, Nucleo-32, Discovery, STM32F1, STM32F3, STM32F4, STM32H7, STM32L0, etc.)**.
3. Add support to **SAM DUE**
4. Add WebSocketServer examples to those supported boards.

#### New in v2.2.1

1. Bump up to sync with v2.2.1 of original WebSockets library

#### New in v2.1.3

1. Add support to **nRF52** boards, such as **AdaFruit Feather nRF52832, nRF52840 Express, BlueFruit Sense, Itsy-Bitsy nRF52840 Express, Metro nRF52840 Express, NINA_B302_ublox, etc.**.
2. Add support to **SAM51 (Itsy-Bitsy M4, Metro M4, Grand Central M4, Feather M4 Express, etc.)**.
3. Add support to **SAMD21 (ZERO, MKR, NANO_33_IOT, M0, M0 Pro, AdaFruit CIRCUITPLAYGROUND_EXPRESS, etc.)**.

---
---

### TO DO

1. Bug Searching and Killing
2. Support more types of boards using WiFi/Ethernet shields (Teensy, etc.)
3. Support more non-compatible Ethernet Libraries such as Ethernet_Shield_W5200, EtherCard, EtherSia


### DONE

 1. Add support to Arduino SAMD21 (ZERO, MKR, NANO_33_IOT, etc.)
 2. Add support to Adafruit SAMD21 (Itsy-Bitsy M0, Metro M0, Feather M0 Express, etc.).
 3. Add support to Adafruit SAMD51 (Itsy-Bitsy M4, Metro M4, Grand Central M4, Feather M4 Express, etc.).
 4. Add support to Adafruit nRF52 ( Feather nRF52832, nRF52840 Express, BlueFruit Sense, Itsy-Bitsy nRF52840 Express, Metro nRF52840 Express, NINA_B302_ublox, NINA_B112_ublox, etc.
 5. Add support to Seeeduino SAMD21/SAMD51 boards (SEEED_WIO_TERMINAL, SEEED_FEMTO_M0, SEEED_XIAO_M0, Wio_Lite_MG126, WIO_GPS_BOARD, SEEEDUINO_ZERO, SEEEDUINO_LORAWAN, SEEED_GROVE_UI_WIRELESS, etc.)
 6. Add support to STM32F/L/H/G/WB/MP1 (Nucleo-144, Nucleo-64, Nucleo-32, Discovery, STM32Fx, STM32H7, STM32Lx, STM32Gx, STM32WB, STM32MP1, etc.) having 64K+ Flash program memory.
 7. Add support to Ethernet W5x00, using either [`Ethernet`](https://www.arduino.cc/en/Reference/Ethernet), [`Ethernet2`](https://github.com/khoih-prog/Ethernet2), [`Ethernet3`](https://github.com/sstaub/Ethernet3) or [`EthernetLarge`](https://github.com/OPEnSLab-OSU/EthernetLarge) library
 8. Add support to WiFiNINA using WiFiNINA or [**WiFiNINA_Generic library**](https://github.com/khoih-prog/WiFiNINA_Generic).
 9. Add support to ENC28J60 using [`UIPEthernet`](https://github.com/UIPEthernet/UIPEthernet)
10. Add support to ENC28J60 using [`EthernetENC`](https://github.com/jandrassy/EthernetENC)


---

### Issues ###

Submit issues to: [**WebSockets_Generic issues**](https://github.com/khoih-prog/WebSockets_Generic/issues)

---

### Contributions and thanks

1. Based on and modified from [Markus Sattler's **arduinoWebSockets** library](https://github.com/Links2004/arduinoWebSockets)

<table>
  <tr>
    <td align="center"><a href="https://github.com/Links2004"><img src="https://github.com/Links2004.png" width="100px;" alt="Links2004"/><br /><sub><b>⭐️ Markus Sattler</b></sub></a><br /></td>
  </tr> 
</table>

---

## Contributing

If you want to contribute to this project:

- Report bugs and errors
- Ask for enhancements
- Create issues and pull requests
- Tell other people about this library

---

### License and credits ###

- Most of the credits go to original author [**Markus Sattler**](https://github.com/Links2004).

- The library is licensed under [**LGPLv2.1**](https://github.com/Links2004/arduinoWebSockets/blob/master/LICENSE) and [**MIT**](https://github.com/khoih-prog/WebSockets_Generic/blob/master/LICENSE)

- [libb64](http://libb64.sourceforge.net/) written by Chris Venter. It is distributed under Public Domain see [LICENSE](https://github.com/Links2004/arduinoWebSockets/blob/master/src/libb64/LICENSE).
