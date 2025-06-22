#include <Servo.h>

Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;

int pot1;
int servo1;
int pot2;
int servo2;
int pot3;
int servo3;
int pot4;
int servo4;

void setup() {
  motor1.attach(12);
  motor2.attach(11);
  motor3.attach(10);
  motor4.attach(9);

}

void loop() {
    pot1 = analogRead(0);
    servo1 = map(pot1, 0, 1023, 0, 180);
    motor1.write(servo1);
    pot2 = analogRead(1);
    servo2 = map(pot2, 0, 1023, 0, 180);
    motor2.write(servo2);
    pot3 = analogRead(2);
    servo3 = map(pot3, 0, 1023, 0, 180);
    motor3.write(servo3);
    pot4 = analogRead(3);
    servo4 = map(pot4, 0, 1023, 0, 180);
    motor4.write(servo4);

}