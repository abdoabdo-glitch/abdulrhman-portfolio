# abdulrhman-portfolio
My personal portfolio website
# Smart Temperature Monitoring System

## Project Overview
This project is an ESP32-based Smart Temperature Monitoring System that measures temperature and humidity using a DHT22 sensor.

The system uses two LED indicators to show the temperature status:
- **Green LED:** Turns ON when the temperature is below 30°C.
- **Red LED:** Turns ON when the temperature is 30°C or higher.

## Components Used
- ESP32
- DHT22 Temperature and Humidity Sensor
- Red LED
- Green LED
- 220Ω Resistors
- Wokwi Simulator

## Pin Connections

| Component | ESP32 Pin |
|---|---|
| DHT22 SDA | GPIO 15 |
| Red LED | GPIO 2 |
| Green LED | GPIO 4 |
| DHT22 VCC | 3V3 |
| GND | GND |

## Technologies
- Arduino C++
- ESP32
- DHTesp Library
- Wokwi Simulator

## How It Works
1. The ESP32 reads temperature and humidity from the DHT22 sensor.
2. The readings are displayed in the Serial Monitor.
3. If the temperature reaches 30°C or higher, the red LED turns ON.
4. If the temperature is below 30°C, the green LED turns ON.

## Simulation
Developed and tested using the Wokwi online simulator.

## Project Files
- `smart-temperature-monitoring.ino` – Main ESP32 code.
- `diagram.json` – Circuit diagram and connections.
- `libraries.txt` – Required libraries.

## Author
Abdulrhman
