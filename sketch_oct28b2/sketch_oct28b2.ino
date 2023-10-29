void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // 디지털 13번 핀을 출력 핀으로 설정
  pinMode(3, INPUT_PULLUP); //디지털 3번 핀을 입력 핀으로 설정
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(3));
  // 풀업 회로 : 버튼 안 누르면 HIGH, 누르면 LOW
  if(digitalRead(3) == LOW) // 버튼이 눌렸으면
  {
    digitalWrite(13, HIGH);
  }
  else
    digitalWrite(13, LOW);
//  delay(1000);
//  delay(3000);
  
}
