/*
  ReadAnalogVoltage

  Reads an analog input on pin 0, converts it to voltage, and prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/ReadAnalogVoltage
*/

// the setup routine runs once when you press reset:

#define pm pinMode
#define re analogRead
#define i INPUT
#define o OUTPUT
#define h HIGH
#define l LOW
#define ps digitalWrite
#define s Serial

using f = float;


const int red=13,yellow=12,green=11;

void setup() {
  // initialize serial communication at 9600 bits per second:
  s.begin(9600);
  pm(red,o);
  pm(green,o);
  pm(yellow,o);
  pm(A0,i);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int a = re(A0);
  f b = a * 5.0 / 1023.0;
  f c = b * 100.0;
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  // print out the value you read:
  s.println(c);
  if (c<=30.0){
    ps(green,h);
    ps(red,l);
    ps(yellow,l);
  }
  else if (c<=40.0){
    ps(green,l);
    ps(red,l);
    ps(yellow,h);
  }
  else {
    ps(green,l);
    ps(red,h);
    ps(yellow,l);
  }
  delay(1000);
}
