#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define dw digitalWrite

void setup() {
  // put your setup code here, to run once:
  FOR(i,11,14) pinMode(i,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Description : Hmm... Hình như là cái này https://github.com/tachithanhdanh/Arduino/blob/main/Images/20210313_100930.jpg
  int val = analogRead(A0);
  if (!val) {
    FOR(i,11,14) dw(i,0);
  }
  else if (val < 341) {
    dw(11,1); dw(12,0); dw(13,0); 
  }
  else if (val < 682) {
    dw(11,0); dw(12,1); dw(13,0);
  }
  else if (val < 1023) {
    dw(11,0); dw(12,0); dw(13,1);
  }
  else {
    FOR(i,11,14) dw(i,1);
  }
  //delay(100); 
}
