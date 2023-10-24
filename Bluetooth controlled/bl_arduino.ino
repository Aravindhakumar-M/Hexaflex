#include <Servo.h>
#include <SoftwareSerial.h>

// Define the number of servos and create an array of Servo objects
#define SERVOS 6
Servo myservo1, myservo2, myservo3, myservo4, myservo5, myservo6;
Servo myservo[SERVOS];
int servo_pins[SERVOS] = {3, 4, 5, 6, 7, 8};

int bluetoothTx = 10;
int bluetoothRx = 11;

SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

void setup() {
  // Serial.begin(9600); // Initialize the serial communication for debugging if needed
  bluetooth.begin(9600); // Initialize the SoftwareSerial for Bluetooth

  // Attach each Servo object to its respective pin
  for (int i = 0; i < SERVOS; i++) {
    myservo[i].attach(servo_pins[i]);
    delay(500); // Delay to allow servo initialization
  }
}

void loop() {
  if (bluetooth.available() >= 2) { // Check if there are at least 2 bytes available in Bluetooth input
    unsigned int servopos = bluetooth.read(); // Read the first byte
    unsigned int servopos1 = bluetooth.read(); // Read the second byte
    unsigned int realservo = (servopos1 * 256) + servopos;

    // Check for different servo control ranges and update the corresponding servo
    if (realservo >= 1000 && realservo < 1180) {
      int servo1 = realservo - 1000;
      myservo2.write(servo1);
      // Serial.println("Servo 1 turned ON");
      delay(10);
    }

    if (realservo >= 2000 && realservo < 2180) {
      int servo2 = realservo - 2000;
      myservo2.write(servo2);
      // Serial.println("Servo 2 turned ON");
      delay(10);
    }

    if (realservo >= 3000 && realservo < 3180) {
      int servo3 = realservo - 3000;
      myservo3.write(servo3);
      // Serial.println("Servo 3 turned ON");
      delay(10);
    }

    if (realservo >= 4000 && realservo < 4180) {
      int servo4 = realservo - 4000;
      myservo4.write(servo4);
      // Serial.println("Servo 4 turned ON");
      delay(10);
    }

    if (realservo >= 5000 && realservo < 5180) {
      int servo5 = realservo - 5000;
      myservo5.write(servo5);
      // Serial.println("Servo 5 turned ON");
      delay(10);
    }

    if (realservo >= 6000 && realservo < 6180) {
      int servo6 = realservo - 6000;
      myservo6.write(servo6);
      // Serial.println("Servo 6 turned ON");
      delay(10);
    }
  }
}
