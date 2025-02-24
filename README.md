# WiFi Repeater Using ESP32

This repository contains the Arduino code, configuration, and assembly instructions for building a WiFi repeater using the ESP32 microcontroller. The ESP32 acts as both a Wi-Fi client and an access point (AP), enabling it to receive and rebroadcast a Wi-Fi signal, effectively extending the coverage area <button class="citation-flag" data-index="2">. This project is ideal for improving Wi-Fi connectivity in areas with weak signals, such as large homes, offices, or remote locations.

---

## Table of Contents
1. [Overview](#overview)
2. [Components Used](#components-used)
3. [System Dimensions](#system-dimensions)
4. [Assembly Instructions](#assembly-instructions)
5. [Arduino Code Explanation](#arduino-code-explanation)
6. [Contributing](#contributing)
7. [License](#license)

---

## Overview
The WiFi repeater uses the ESP32's dual-mode Wi-Fi capabilities to connect to an existing Wi-Fi network and rebroadcast it as a new network. This setup improves Wi-Fi coverage in areas with weak signals, making it a cost-effective solution for extending network range <button class="citation-flag" data-index="4">. The ESP32's ability to act as both a client and an access point makes it an excellent choice for this application.

---

## Components Used
To build this WiFi repeater, you will need the following components:
- **ESP32 Development Board**
- **5V USB Power Adapter**
- **External Antenna (Optional)**
- **Protective Enclosure (Optional)**

---

## System Dimensions
For an ideal WiFi repeater:
- **Height**: 10–15 cm
- **Width**: 10–15 cm
- **Length**: 10–15 cm

These dimensions ensure that the system is compact yet spacious enough to house all components.

---

## Assembly Instructions
Follow these steps to assemble your WiFi repeater:
1. Connect the ESP32 to your computer using a USB cable for programming.
2. Optionally, install an external antenna to improve signal strength.
3. Power the ESP32 using a USB power adapter or battery pack.
4. Place the repeater in an area where it can receive the primary Wi-Fi signal and broadcast it effectively.

---

## Arduino Code Explanation
The provided Arduino code configures the ESP32 to connect to an existing Wi-Fi network and rebroadcast it as a new network. The ESP32 acts as a client to the primary network and as an access point for devices to connect to the extended network.

---

## Contributing
Feel free to fork this repository and contribute improvements or new features. If you have suggestions or find bugs, please open an issue.

---

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

By following this guide, you should be able to build and test your own WiFi repeater using the ESP32. Happy tinkering! 🚀
