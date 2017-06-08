#define ledPin 14
#include <Servo.h>
Servo myServo;
int pos=0;

void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  myServo.attach(ledPin);
}

void loop() {
  for(pos=0;pos<180;pos++)
  {myServo.write(pos);
   Serial.println(myServo.read());
   delay(15);
    }
   for(pos=180;pos>0;pos--)
  {myServo.write(pos);
   Serial.println(myServo.read());
   delay(15);
  
  }  
  }
