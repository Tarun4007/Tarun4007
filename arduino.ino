void setup() {
   
pinMode(LED_BUILTIN,OUTPUT);                            //LED_BUILTIN refers to pin number 13
}

void loop() {
   
  
 digitalWrite(LED_BUILTIN,HIGH);
 delay(2000);
 digitalWrite(LED_BUILTIN,LOW);
 delay(2000);

}
