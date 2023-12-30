int lightPin = A5;
int ledPin = 8;
int lightVal;

void setup() {
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(1000);
  if(lightVal < 500){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }
}
