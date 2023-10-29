void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // 디지털 13번 핀을 출력 핀으로 설정
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(3000);
  
}
