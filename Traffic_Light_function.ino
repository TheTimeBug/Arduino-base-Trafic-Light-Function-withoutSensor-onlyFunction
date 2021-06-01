#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
void setup() {
  lcd.begin(16,2);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
}
void red(){
  lcd.clear();
  lcd.setCursor(6,0);
  lcd.print("Red");
  lcd.setCursor(3,1);
  lcd.print("..........");
  digitalWrite(7,HIGH);
  delay(2000);
  digitalWrite(7,LOW);
}
void green(){
  lcd.clear();
  lcd.setCursor(5,0);
  lcd.print("Green");
  lcd.setCursor(3,1);
  lcd.print("..........");
  digitalWrite(5,HIGH);
  delay(2000);
  digitalWrite(5,LOW); 
}
void orange(){
  lcd.clear();
  lcd.setCursor(5,0);
  lcd.print("Orange");
  lcd.setCursor(3,1);
  lcd.print("..........");
  digitalWrite(6,HIGH);
  delay(2000);
  digitalWrite(6,LOW);  
}
void loop() {
  green();
  orange();
  red();
  orange();
  
}
