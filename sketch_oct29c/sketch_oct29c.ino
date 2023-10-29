void setup() {
  // put your setup code here, to run once:
 pinMode(13, OUTPUT); // 13번 핀을 출력으로 사용
 pinMode(A0, INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int bright = analogRead(A0);

  Serial.println(bright);

  if (bright >= 650) // 주변 환경이 어두워지면
  {
    digitalWrite(13, HIGH); // LED ON
  }
  else
  {
    digitalWrite(13, LOW); // LED OFF
  }
}
