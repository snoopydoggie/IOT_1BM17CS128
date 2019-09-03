#include<Servo.h>
Servo anyservo;
int pos=0;
int sensorPin=0;
int sensorValue=0;

void setup(){
  anyservo.attach(11);
  Serial.begin(9600);
}

void loop(){
  sensorValue=analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue>500)
  {
    for(pos=0;pos<180;pos+=1)
    {
      anyservo.write(pos);
      delay(5);
    }
    for(pos=180; pos>=0;pos-=1)
    {
      anyservo.write(pos);
      delay(5);
    }
    
  }
  delay(100);
}
