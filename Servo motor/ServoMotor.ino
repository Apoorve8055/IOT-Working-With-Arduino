// install the servo lib

#include<Servo.h>

int servoPin = 12 ;
Servo ServoDemo;

void setup() {
ServoDemo.attach(servoPin);
}

void loop(){
  
ServoDemo.write(90);
delay(1000);

ServoDemo.write(180);
delay(1000);

ServoDemo.write(0);
delay(1000);
}
