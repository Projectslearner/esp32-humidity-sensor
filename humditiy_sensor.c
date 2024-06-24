/*
    Project name : ESP32 Humidity Sensor
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-humidity-sensor
*/

#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

// Define the type of DHT sensor (DHT11 or DHT22)
#define DHTTYPE DHT11 // Change this to DHT22 if you're using that sensor

// Pin connected to the DATA pin of the DHT sensor
const int dhtPin = 4; // GPIO pin 4 on ESP32

// Initialize DHT sensor object
DHT dht(dhtPin, DHTTYPE);

void setup() {
  Serial.begin(9600); // Initialize serial communication
  dht.begin(); // Initialize the DHT sensor
}

void loop() {
  delay(2000); // Wait a few seconds between measurements

  // Read humidity
  float humidity = dht.readHumidity();

  // Check if any reads failed
  if (isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print humidity value to Serial Monitor
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
}
