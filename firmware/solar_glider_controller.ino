#include <Wire.h>

// Battery pin
int batteryPin = A0;

// Variables
float batteryVoltage = 0;

// Simulated IMU values (replace with real sensor later)
float roll = 0;
float pitch = 0;
float yaw = 0;

void setup() {
  Serial.begin(9600);
  Wire.begin();

  Serial.println("Solar Glider Firmware Initialized");
}

void loop() {

  // 🔋 Battery Voltage Reading
  int raw = analogRead(batteryPin);
  batteryVoltage = raw * (5.0 / 1023.0) * 3; // adjust for voltage divider

  // 📡 Simulated IMU Data (replace later with MPU6050)
  roll += 0.5;
  pitch += 0.3;
  yaw += 0.2;

  // 📡 Telemetry Output
  Serial.print("BAT:");
  Serial.print(batteryVoltage);
  Serial.print("V | ");

  Serial.print("ROLL:");
  Serial.print(roll);
  Serial.print(" | ");

  Serial.print("PITCH:");
  Serial.print(pitch);
  Serial.print(" | ");

  Serial.print("YAW:");
  Serial.println(yaw);

  delay(1000);
}
