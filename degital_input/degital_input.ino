// 3つのピンに対応
int ledPin = 5; // 出力
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT); // 出力設定
  pinMode(buttonApin, INPUT_PULLUP); // プルアップ
  pinMode(buttonBpin, INPUT_PULLUP); // プルアップ
}

void loop() 
{
  // 9番ピンがLOW => ボタン押下時
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
  }

  // 8番ピンがLOW => ボタン押下時
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
}
