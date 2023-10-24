# Arduino Servo Control with ROS

This Arduino sketch demonstrates servo control using the ROS (Robot Operating System) framework. The code is designed to control multiple servos simultaneously based on position data received from a ROS topic.

## Prerequisites

Before using this code, you'll need:

1. An Arduino board.
2. Servo motors connected to the specified pins (servo0 to servo4).
3. The Arduino IDE installed.
4. The `ros.h` and `std_msgs` libraries for Arduino.
5. A ROS environment set up.

## Hardware Setup

- Connect servo motors to the Arduino board as specified in the code.
- Ensure your Arduino is connected to your computer.

## Usage

1. Upload the sketch to your Arduino using the Arduino IDE.
2. Make sure your ROS environment is set up and running.
3. Create a ROS node or topic to publish position data (e.g., angles) to the `/cmd_pos` topic.
4. The servos will move according to the received position data.
5. You can adjust the delay in the `loop` function for the desired control rate.

## Customize

- Modify the code to change the servo pins (e.g., `servo0.attach(3)`).
- Adapt the code to match your specific hardware setup or ROS topic.
- Adjust the delay time in the `loop` function for different control rates.

