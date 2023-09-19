#define PIN_LED 7


void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  while(!Serial){
    ; //wait for serial port to connect
  }
  // put your setup code here, to run once:
 
 
}

void loop() {
  unsigned long now = millis();
  Serial.println(now);
  if ( now < 1000){
    digitalWrite(PIN_LED, LOW);
  }
  else if(now >1000 && now < 2000){
     for(int i = 0 ; i < 5; i ++){
      digitalWrite(PIN_LED, HIGH);
      delay(100);
      digitalWrite(PIN_LED,LOW);
      delay(100);
    
    } 
  }
  else if(now >= 2000){
    digitalWrite(PIN_LED,HIGH);
  }
 
  // put your main code here, to run repeatedly:

}