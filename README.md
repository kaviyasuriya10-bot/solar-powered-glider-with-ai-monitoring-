## Overview

This project presents the design and development of a solar-powered autonomous glider with AI-based monitoring capabilities. The system combines renewable energy, embedded electronics, and flight control to enable efficient and long-endurance aerial operation.

<img width="1793" height="1253" alt="image" src="https://github.com/user-attachments/assets/b6b901fc-1503-4f5c-ac58-f5eaf1de84e6" />

The glider uses solar panels to supplement battery power, allowing extended flight duration while reducing dependence on ground charging. A flight controller manages stabilization and navigation, while onboard electronics monitor system performance in real time.

---

## Key Features

* Solar-assisted power system for extended endurance
* Autonomous flight using Pixhawk and ArduPlane firmware
* Real-time telemetry and system monitoring
* Lightweight fixed-wing glider design
* Modular architecture for future AI integration

---

## System Components

* Flight Controller: Pixhawk
* Power System: LiPo battery + solar panels + MPPT (CN3722)
* Sensors: IMU, GPS, barometer, compass
* Communication: Telemetry module
* Actuators: Servo motors and brushless motor (ESC controlled)

---

## How It Works

Solar panels generate energy during flight and charge the battery through an MPPT controller. The flight controller processes sensor data to maintain stable flight and execute missions. Control signals are sent to servos and the motor to adjust the aircraft’s movement.

---

## Repository Structure

* firmware/ → Pixhawk configuration and control logic
* hardware/ → Wiring diagrams and system design
* cad/ → 3D models of the glider
* docs/ → Documentation and project journal
* bom.csv → Bill of materials

---

## Project Status

This project is currently in the design and prototyping phase. Hardware integration and real-world testing are planned for future stages.

---

## Future Improvements

* AI-based flight optimization
* Solar energy-aware navigation
* Autonomous landing system
* Advanced telemetry and data logging

---

## Goal

To develop a low-cost, efficient, and scalable solar-powered UAV platform for research, learning, and real-world applications.
