#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.clear();
  lcd.print("welcome");
  pinMode(A0,OUTPUT);
pinMode(A2,INPUT);
pinMode(A1,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
long t=0,cm=0;
digitalWrite(A1,LOW);
delayMicroseconds(5);
digitalWrite(A1,HIGH);
delayMicroseconds(5);
digitalWrite(A1,LOW);
t=pulseIn(A2,HIGH);
long y=t/29;
cm=y/2;
lcd.clear();
lcd.setCursor(0,0);
lcd.print(cm);
if(cm<=50)
{
  digitalWrite(A0,HIGH);
  delay(2000);
}
else
{
   digitalWrite(A0,LOW);
delay(2000);
}
  
}
