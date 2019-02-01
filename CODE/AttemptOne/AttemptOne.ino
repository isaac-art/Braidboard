#include <Tiny4kOLED.h>

const int o1 = 10;
const int o2 = 9;
const int o3 = 8;
const int o4 = 7;
const int i1 = 0;
const int i2 = 1;
const int i3 = 2;
const int i4 = 3;

void setup() {
  pinMode(o1, OUTPUT);
  pinMode(o2, OUTPUT);
  pinMode(o3, OUTPUT);
  pinMode(o4, OUTPUT);
  pinMode(i1, INPUT);
  pinMode(i2, INPUT);
  pinMode(i3, INPUT);
  pinMode(i4, INPUT);
  
  digitalWrite(o1, LOW);
  digitalWrite(o2, LOW);
  digitalWrite(o3, LOW);
  digitalWrite(o4, LOW);
  
  oled.begin();
  oled.setFont(FONT8X16);
  oled.switchRenderFrame();
  initDisplay();
  updateState();
  oled.on();
}

void loop() {
  delay(50);
  updateState();
}

void updateState(){
  oled.setCursor(48, 1);
  if(digitalRead(i1) == LOW && digitalRead(i2) == LOW){
    oled.print(F("00"));
    digitalWrite(o1, HIGH);
    digitalWrite(o2, HIGH);
  }else if(digitalRead(i1) == LOW && digitalRead(i2) == HIGH){
    oled.print(F("01"));
    digitalWrite(o1, HIGH);
    digitalWrite(o2, LOW);
  }else if(digitalRead(i1) == HIGH && digitalRead(i2) == LOW){
    oled.print(F("10"));
    digitalWrite(o1, LOW);
    digitalWrite(o2, HIGH);
  }else if(digitalRead(i1) == HIGH && digitalRead(i2) == HIGH){
    oled.print(F("11"));
    digitalWrite(o1, LOW);
    digitalWrite(o2, LOW);
  }

  oled.setCursor(80, 1);
  if(digitalRead(i3) == LOW && digitalRead(i4) == LOW){
    oled.print(F("00"));
    digitalWrite(o3, HIGH);
    digitalWrite(o4, HIGH);
  }else if(digitalRead(i3) == LOW && digitalRead(i4) == HIGH){
    oled.print(F("01"));
    digitalWrite(o3, HIGH);
    digitalWrite(o4, LOW);
  }else if(digitalRead(i3) == HIGH && digitalRead(i4) == LOW){
    oled.print(F("10"));
    digitalWrite(o3, LOW);
    digitalWrite(o4, HIGH);
  }else if(digitalRead(i3) == HIGH && digitalRead(i4) == HIGH){
    oled.print(F("11"));
    digitalWrite(o3, LOW);
    digitalWrite(o4, LOW);
  }
  oled.switchFrame();
}

void initDisplay() {
//  oled.fill(0xFF);
  oled.clear();
  oled.switchFrame();
  oled.clear();
  oled.switchFrame();
}
