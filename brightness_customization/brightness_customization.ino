/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fade
*/

#define FOR(i,a,b) for (int (i) = (a); (i) < (b); ++(i))
#define F0R(i,a) FOR(i,0,a)

// the setup routine runs once when you press reset:
void setup() {
  FOR(i,9,12) pinMode(i, OUTPUT);
  FOR(i,5,7) pinMode(i, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  //analogWrite(led, HIGH);
  FOR(i,5,7){
    F0R(j,256){
      analogWrite(i, j);
      delay(50);
    }
    analogWrite(i, 0);
    delay(500);
  }
  FOR(i,9,12){
    F0R(j,256){
      analogWrite(i, j);
      delay(50);
    }
    analogWrite(i, 0);
    delay(500);
  }
  delay(500);
}
