const byte startPin = 8;
const byte endPin = 13;
byte lightPin = startPin;
void setup() {
  for(byte i = startPin;i <= endPin;i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
    for(byte i = startPin;i <= endPin;i++){
      digitalWrite(i,LOW);
    }
    digitalWrite(lightPin,HIGH);
    if (lightPin < endPin){
      lightPin ++;
    }else{
      lightPin == startPin;
    }
    delay(100);
    if (lightPin==endPin){
      lightPin = startPin;
    }
}
