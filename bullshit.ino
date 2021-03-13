#define aw analogWrite
#define dw digitalWrite

void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
  //Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  //val *= 5; if (val > 5E3) val = 5E3;
  dw(11,(val>1000));
  //delay(100); 
}
