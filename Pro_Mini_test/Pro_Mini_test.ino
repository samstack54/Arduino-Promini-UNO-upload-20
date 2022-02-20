 // Pro Mini test : Digital and Analog

 byte led = 13 ;
 
 void setup() {
  pinMode(led, OUTPUT) ;
  Serial.begin(9600) ;
 }

 void loop() {
  
  digitalWrite(led,!digitalRead(led) ) ;
  delay(1000) ;

  int val=analogRead(0) ;
  Serial.println(val) ;
 }
