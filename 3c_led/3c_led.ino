// RGBそれぞれのPIN番号
#define BLUE 3
#define GREEN 5
#define RED 6

// 色変化の時間(ms)
#define delayTime 10

void setup() {
  // pinを出力モードにする
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

int redValue = 255;
int greenValue = 0;
int blueValue = 0;

void loop() {
  // 赤→緑への変化
  for (int i = 0; i <= 255; i++) {
    redValue = 255 - i;
    greenValue = i;
    blueValue = 0;
    updateColor();
    delay(delayTime);
  }

  // 緑→青への変化
  for (int i = 0; i <= 255; i++) {
    redValue = 0;
    greenValue = 255 - i;
    blueValue = i;
    updateColor();
    delay(delayTime);
  }

  // 青→赤への変化
  for (int i = 0; i <= 255; i++) {
    redValue = i;
    greenValue = 0;
    blueValue = 255 - i;
    updateColor();
    delay(delayTime);
  }
}

void updateColor() {
  analogWrite(RED, redValue);
  analogWrite(GREEN, greenValue);
  analogWrite(BLUE, blueValue);
}
