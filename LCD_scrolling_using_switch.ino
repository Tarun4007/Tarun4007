#include<LiquidCrystal.h>
 LiquidCrystal lcd(12,11,9,8,7,6);
void setup() {
  pinMode(2,INPUT);
  lcd.begin(16,2);
}
void loop() 
 { 
    lcd.setCursor(1,0);
    
  if (digitalRead(2)==0){
  lcd.print("WELCOME TO MY WORLD");
  for(int pos =0;pos<19;pos++){
   lcd.scrollDisplayLeft();
   delay(500);
   }  lcd.clear();}
  else if (digitalRead(2)==1)
  { 
    lcd.print("bye");
    for(int pos =0;pos<4;pos++){
   lcd.scrollDisplayLeft();
   delay(500);
   }
   lcd.clear();}
  }
     
