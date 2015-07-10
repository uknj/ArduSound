#include <Ultrasonic.h> // This library is licensed under Creative Commons Share alike and Attribution by J.Rodrigo. See: https://github.com/JRodrigoTech/Ultrasonic-HC-SR04
 
Ultrasonic ultraleft(11,3, 25000);   // (Trig PIN, Echo PIN, Time Out in milliseconds- A lower value will limit the maximum distance reading.)
Ultrasonic ultraright(6,5, 25000);  // (Trig PIN, Echo PIN, Time Out in milliseconds- A lower value will limit the maximum distance reading.)
 
int pwmleft;
int pwmright;
 
void setup(){
  pinMode(2, OUTPUT); // GND pin
  digitalWrite(2, LOW);  // GND mode
  Serial.begin(9600);
}
 
void loop(){
  Serial.print("Left: ");
  Serial.print(ultraleft.Ranging(CM)); // CM or INC
  Serial.print(" cm     " );
  delay(50);
  Serial.print("Right: ");
  Serial.print(ultraright.Ranging(CM)); // CM or INC
  Serial.println(" cm" );
  delay(50);
 
 
  pwmleft = map(ultraleft.Ranging(CM), 0, 431, 0, 70); // Map the distance value to the analogue output.
  pwmright = map(ultraright.Ranging(CM), 0, 431, 0, 70); // Map the distance value to the analogue output. 
  analogWrite(10, pwmleft); // Output the pwm value as analog output
  analogWrite(9, pwmright); // Output the pwm value as analog output
 
}

