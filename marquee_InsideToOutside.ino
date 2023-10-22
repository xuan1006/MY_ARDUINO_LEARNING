const byte leds[]={2, 3, 4, 5, 6, 7, 8, 9};
const byte total=sizeof(leds);
void setup() {
  for(byte i=0; i<total; i++){
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for(byte i=0; i<total; i+=2){
    digitalWrite(leds[i], HIGH);
    digitalWrite(leds[i+1], HIGH);
    delay(400);
    digitalWrite(leds[i], LOW);
    digitalWrite(leds[i+1], LOW);
    delay(400);
  }
  for(byte i=total-1; i>0; i-=2){
    digitalWrite(leds[i], HIGH);
    digitalWrite(leds[i-1], HIGH);
    delay(400);
    digitalWrite(leds[i], LOW);
    digitalWrite(leds[i-1], LOW);
    delay(400);
  }
}
