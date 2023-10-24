# Arduino Bluetooth-Controlled Servo Robot Arm

This Arduino sketch is designed to control a robotic arm with multiple servo motors using a Bluetooth module. The code enables the control of up to six servos wirelessly through a paired mobile device with a Bluetooth connection.

## Components Required

- Arduino board (e.g., Arduino Uno)
- Servo motors (6x)
- HC-05 or HC-06 Bluetooth module
- Jumper wires

## Installation

1. Connect the servo motors to the designated PWM pins on the Arduino board.
2. Connect the TX and RX pins of the Bluetooth module to the designated pins on the Arduino.
3. Upload this Arduino sketch to your board.
4. Install a compatible Bluetooth app on your mobile device.

## Usage

1. Pair your mobile device with the HC-05 or HC-06 Bluetooth module.
2. Use a serial terminal app or your custom mobile app to send control commands to the Arduino. The format of the control signal should match the specified ranges for each servo.
3. The code decodes the received commands and moves the corresponding servos accordingly.
4. The servo movement is logged through the Arduino's serial communication for debugging.

## Control Commands

- To control each servo, send a control signal within specific ranges as defined in the code. For example:
  - Servo 1: Values between 1000 and 1180
  - Servo 2: Values between 2000 and 2180
  - Servo 3: Values between 3000 and 3180
  - Servo 4: Values between 4000 and 4180
  - Servo 5: Values between 5000 and 5180
  - Servo 6: Values between 6000 and 6180

## Configuration

You can configure the code by adjusting the servo PWM pin assignments and the Bluetooth module's TX and RX pins to match your hardware setup.

## Acknowledgments

This project is inspired by and adapted from various Arduino servo control tutorials and resources.
