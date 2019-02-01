#include <Tiny4kOLED.h>

const int out1 = 0;
const int out2 = 2;
const int out3 = 3;
const int out4 = 1;

const int in1 = 7;
const int in2 = 8;
const int in3 = 9;
const int in4 = 10;

int left = 0;
int right = 0;
int st = 0;

void setup() {
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  pinMode(out4, OUTPUT);
  pinMode(in1, INPUT_PULLUP);
  pinMode(in2, INPUT_PULLUP);
  pinMode(in3, INPUT_PULLUP);
  pinMode(in4, INPUT_PULLUP);
  digitalWrite(out1, LOW);
  digitalWrite(out2, LOW);
  digitalWrite(out3, LOW);
  digitalWrite(out4, LOW);

  
  oled.begin();
  oled.setFont(FONT8X16);
  oled.switchRenderFrame();
  initDisplay();
  updateState();
  oled.on();
}

void loop() {
  delay(1000);
  updateState();
}

void updateState(){
  oled.setCursor(40, 0);
  
  if(digitalRead(in1) == LOW && digitalRead(in2) == LOW){
    left = 0;
  }else if(digitalRead(in1) == LOW && digitalRead(in2) == HIGH){
    left = 1;
  }else if(digitalRead(in1) == HIGH && digitalRead(in2) == LOW){
    left = 2;
  }else if(digitalRead(in1) == HIGH && digitalRead(in2) == HIGH){
    left = 3;
  }
  oled.print(left)

  oled.setCursor(80, 0);
  if(digitalRead(in3) == LOW && digitalRead(in4) == LOW){
    right = 0;
  }else if(digitalRead(in3) == LOW && digitalRead(in4) == HIGH){
    right = 1;
  }else if(digitalRead(in3) == HIGH && digitalRead(in4) == LOW){
    right = 2;
  }else if(digitalRead(in3) == HIGH && digitalRead(in4) == HIGH){
    rigbt = 3;
  }
  oled.print(right)

  oled.setCursor(60, 1);
  st = left + right;
  st = st % 3;
  oled.print(st);

  
  
  oled.switchFrame();
}


void initDisplay() {
  oled.clear();
  oled.switchFrame();
  oled.clear();
  oled.switchFrame();
}
