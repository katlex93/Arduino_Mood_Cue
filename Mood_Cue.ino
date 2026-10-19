#include <Servo.h>

Servo servo;

const int servoPin{9};
const int potPin{A0};
int potVal{0};
int angle{0};

void setup() { 
  analogReadResolution(12);
  servo.attach(servoPin);

  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(potPin);
  Serial.print("Pot value: ");
  Serial.print(potVal);


  angle = map(potVal, 0, 4095, 0, 180);
  Serial.print("\t Angle: ");
  Serial.println(angle);

  servo.write(angle);
  delay(15);

}
