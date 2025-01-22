
# Overview
A comprehensive C++ library and Arduino project for controlling NodeMCU (V2 & V3) boards over various communication interfaces.
DontCodeNodeMCU provides a unified API for interacting with NodeMCU boards through HTTP, TCP, and Serial communication interfaces.

# Features

* **HTTP**: Establish and manage HTTP connections for NodeMCU V2 & V3 boards.
* **TCP**: Configure and control TCP connections for NodeMCU boards.
* **Serial**: Communicate with NodeMCU boards over serial interfaces (always available).

# Installation Steps

1. **Set WiFi Configuration**
	* Set your WiFi SSID (`WIFI_SSID`) and password (`WIFI_PASSWORD`) in the `config.h` file.
2. **Set Protocol and Host**
	* Choose the desired protocol from the `config.h` file:
		+ `PROTOCOL_HTTP` for HTTP connections
		+ `PROTOCOL_TCP` for TCP connections
		+ `PROTOCOL_SERIAL` for serial connections only
	* Set the host IP address or domain name in the `config.h` file, if using HTTP protocol.
3. **Connect NodeMCU and Download Sketch**
	* Connect your NodeMCU board to your computer using a USB cable.
	* Download the DontCodeNodeMCU sketch to your NodeMCU board using the Arduino IDE.
4. **Configure Your Device**
	* Configure your device using the protocol-specific functions and settings.

# Contribution
Contributions to DontCodeNodeMCU are welcome! If you'd like to contribute to the project, please fork the repository and submit a pull request with your changes.

# Changelog
**Version 1.0.0**
---
- First release.

# Contact
For questions, feedback, or to report issues, please contact the maintainer at ammon.mensah@gmail.com.