# 🤖 Robot Arm Control using Arduino Uno 

This project demonstrates how to control a 4-degree-of-freedom robot arm using **Arduino Uno** and **four potentiometers**. Each potentiometer adjusts one servo motor.

---

## 🧠 How It Works

- Potentiometers send analog values to the Arduino.
- Arduino maps those values to servo angles (0°–180°).
- Servos move the robot arm accordingly.

---

## 🔧 Components Used

See [`components.txt`](./components.text) for the full list.

---

## 🔌 Circuit Diagram

Below is the wiring schematic for this project:

![Circuit Diagram](./circuit_diagram.png)

---

## 💾 Arduino Code

All code is in the file: [`robot_arm_control.ino`](./robot_arm_control.ino)

---

## Non-obvious tech & libraries

* **Arduino Servo library** – bundled with the IDE but often overlooked for multi-axis work.  
* **TinkerCAD Circuits** schematic (`circuit_diagram.png`) – handy cloud simulator for quick validation.  
* **USB CDC serial monitor** – quick-and-dirty telemetry without extra hardware.

---

## External assets

| Asset | Link |
|-------|------|
| Servo library docs | <https://www.arduino.cc/reference/en/libraries/servo/> |
| TinkerCAD Circuits | <https://www.tinkercad.com/circuits> |

---

## 📸 Demo

Here’s a snapshot of the robot arm in action:

![Robot Arm Demo](./demo.jpg)

---




