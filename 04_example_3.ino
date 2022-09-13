#define PIN_LED 13
unsigned int count, toggle;
void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  while(!Serial){
    ; //wait for serial port to connect
  }
  // put your setup code here, to run once:
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle); //
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(count);
  digitalWrite(PIN_LED, toggle);
  delay(1000);
  // put your main code here, to run repeatedly:

}
int toggle_state(int count){
  return count%2;
}
