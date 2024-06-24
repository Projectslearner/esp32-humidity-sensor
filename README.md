# ESP32 Humidity Sensor Project

## Project Overview
This project demonstrates how to use a DHT11 or DHT22 humidity sensor with an ESP32 microcontroller to measure and display humidity levels. These sensors are commonly used in environmental monitoring systems, home automation, and weather stations.

## Components Needed
- ESP32 Microcontroller
- DHT11 or DHT22 Humidity and Temperature Sensor
- Jumper Wires
- Breadboard

## Block Diagram
*(Insert your block diagram image here)*

## Circuit Setup
1. **Connecting the DHT Sensor to ESP32:**
   - Connect the DATA pin of the DHT sensor to GPIO pin 4 on the ESP32.
   - Ensure the DHT sensor’s power (VCC) and ground (GND) connections are properly established.

## Instructions
1. **Setup:**
   - Include the required libraries for the DHT sensor: `Adafruit_Sensor` and `DHT`.
   - Define the type of DHT sensor being used (DHT11 or DHT22) with `#define DHTTYPE DHT11`.
   - Initialize the DHT sensor object in the `setup()` function using `dht.begin()`.

2. **Operation:**
   - In the `loop()` function:
     - Delay for 2 seconds between measurements using `delay(2000)`.
     - Read the humidity value from the sensor using `dht.readHumidity()`.
     - Check if the reading failed with `isnan(humidity)` and handle errors accordingly.
     - Print the humidity value to the Serial Monitor.

3. **Considerations:**
   - **Sensor Type:** Ensure you define the correct sensor type (DHT11 or DHT22) based on the sensor you are using.
   - **Measurement Intervals:** Allow sufficient delay between readings to ensure accurate measurements.

## Applications
- **Environmental Monitoring:** Measure and monitor humidity levels in various environments.
- **Home Automation:** Integrate with home automation systems to maintain optimal humidity levels.
- **Weather Stations:** Use as part of a DIY weather station to track environmental conditions.

## Notes
- **Sensor Output:** The DHT11 or DHT22 sensor provides humidity (and temperature) readings which can be accessed via the ESP32.
- **Serial Output:** Monitor sensor readings via the ESP32's Serial Monitor for real-time humidity data.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 Humidity Sensor](https://projectslearner.com/learn/esp32-humidity-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner