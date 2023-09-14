const byte LED = 13;
const byte SW = 2;
boolean lastState = LOW;
boolean toggle = LOW;
byte click = 0;
void setup() {
  pinMode(LED,OUTPUT);
  pinMode(SW,INPUT_PULLUP);
  lastState = digitalRead(SW);
}
void loop() {
  boolean b1 = digitalRead(SW);
  if(b1 != lastState){
    delay(20);
    boolean b2 = digitalRead(SW);

    if(b1 == b2){
      lastState = b1;
      click ++;
    }
  }
  if(click == 2){
    click = 0;
    toggle = !toggle;
    digitalWrite(LED,toggle);
  }
}
