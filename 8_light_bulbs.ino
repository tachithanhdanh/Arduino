#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define dW digitalWrite

void setup() {
  // put your setup code here, to run once:
  FOR(i,6,14) { pinMode(i,OUTPUT); dW(i,0);}
}

void loop() {
  // put your main code here, to run repeatedly:
  // Description: Chương trình bật/tắt đèn tuần tự
  // Bật tắt tuần tự 8 đèn từ 6 đến 13
  // gọi s là trạng thái
  F0R(s,2) FOR(i,6,14) {
    dW(i,1-s);
    delay(1E3);
  }
}
