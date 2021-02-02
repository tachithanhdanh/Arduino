/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
const int dendo=8;
const int denvang=12;
const int denxanh=11;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(dendo, OUTPUT);
  //pinMode(denxanh, OUTPUT);
  //pinMode(denvang, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(dendo, HIGH);   // turn the dendo on (HIGH is the voltage level)
  delay(10000);                       // wait for a second
  digitalWrite(dendo, LOW);    // turn the dendo off by making the voltage LOW
  delay(1000);                       // wait for a second
  /*digitalWrite(denxanh, HIGH);   // turn the dendo on (HIGH is the voltage level)
  delay(5000);                       // wait for a second
  digitalWrite(denxanh, LOW);    // turn the dendo off by making the voltage LOW
  delay(1000);
  digitalWrite(denvang, HIGH);   // turn the dendo on (HIGH is the voltage level)
  delay(3000);                       // wait for a second
  digitalWrite(denvang, LOW);    // turn the dendo off by making the voltage LOW
  delay(1000); */
}
// hello
