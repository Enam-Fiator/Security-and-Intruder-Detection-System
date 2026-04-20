# Smart Intruder Detection System (Arduino)

This project is a smart security monitoring system built using Arduino.  
It detects intrusion using distance sensing, sound detection, and light intensity monitoring.

## Features

- Detects motion using Ultrasonic Sensor (HC-SR04)
- Detects sound using Sound Sensor
- Detects light changes using LDR
- Activates buzzer alarm during intrusion
- RGB LED status indicator
- Servo motor response mechanism
- White LED emergency light trigger

## Components Used

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Sound Sensor Module
- LDR (Light Dependent Resistor)
- RGB LED
- Servo Motor
- Buzzer
- White LED
- Jumper wires
- Breadboard

## How It Works

The system continuously monitors:

- Distance changes
- Sound detection
- Light intensity levels

If any suspicious activity is detected:

- Red LED turns ON
- Buzzer activates
- White LED turns ON
- Servo rotates to alert position

Otherwise:

- Green LED remains ON
- System stays in standby mode

## Pin Configuration

| Component | Arduino Pin |
|----------|-------------|
| Trigger | D2 |
| Echo | D4 |
| Sound Sensor | D6 |
| LDR | A0 |
| Red LED | D10 |
| Green LED | D3 |
| Blue LED | D5 |
| Servo | D8 |
| Buzzer | D7 |
| White LED | D9 |

## Demo Behavior

System triggers alarm when:

- Object detected within 50cm
- Sound detected
- Light threshold exceeded

