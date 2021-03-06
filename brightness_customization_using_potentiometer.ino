void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  val *= 4;
  if (val > 5E3) val = 5E3;
  analogWrite(11,val);
  Serial.println(val);
  delay(100); 
}
