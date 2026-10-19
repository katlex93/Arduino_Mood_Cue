# Arduino Mood Cue: Project 02

A simple Arduino project that uses a potentiometer to control a servo motor and create a mechanical gauge.

This project is based on the Arduino practice project **"Mood Cue"** and is my second Arduino project.

## Components

- 1 × Arduino Uno WiFi R4
- 1 × Servo motor
- 1 × Potentiometer
- 1 × 100 µF capacitor
- Breadboard
- Jumper wires

## Demo
https://github.com/user-attachments/assets/9c6ca1a6-2521-40e8-906d-586deb06a0c3

## How it works

The potentiometer is connected to analog pin A0 and the servo motor is connected to digital pin 9.

When the potentiometer is turned, the Arduino reads its analog value (0–4095) using 12-bit resolution.

The `map()` function converts this value into an angle between 0° and 180°.

The servo motor rotates to the corresponding angle, moving a pointer on a mechanical gauge to display different moods or availability statuses.



