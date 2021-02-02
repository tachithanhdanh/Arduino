const int dendo = 8;
const int denvang = 12;
const int denxanh = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(dendo, OUTPUT);
  pinMode(denvang, OUTPUT);
  pinMode(denxanh, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(dendo, HIGH);   // turn the dendo on (HIGH is the voltage level)
  delay(5000);                       // wait for a second
  digitalWrite(dendo, LOW);    // turn the dendo off by making the voltage LOW
  delay(5000);     
  digitalWrite(denxanh, HIGH);
  delay(5000);
  digitalWrite(denxanh, LOW);
  delay(5000);
  digitalWrite(denvang, HIGH);
  delay(5000);
  digitalWrite(denvang, LOW);
  delay(5000);
}
