int greenPin = 12;
int redPin = 11;
int bluePin = 10;
int pot1 = A0;
int pot2 = A1;
int pot1Val = 0;
int pot2Val = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  Serial.begin(9600);
  pinMode(greenPin, OUTPUT);     
  pinMode(redPin, OUTPUT);    
  pinMode(bluePin, OUTPUT);     

}

// the loop routine runs over and over again forever:
void loop() {
  // Red Control
  pot1Val = analogRead(pot1)/4;

  // Green Control
  pot2Val = analogRead(pot2)/4;

  /* Noticed issues wit blue. Will explore with new led */

  Serial.println(String("pot 1: ") + pot1Val);
  Serial.println(String("pot 2: ") + pot2Val);

  setColor(pot1Val, pot2Val, 0); 
  delay(1000);
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
