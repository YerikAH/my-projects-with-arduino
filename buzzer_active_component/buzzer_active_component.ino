int buzzPin = 8;
int potenPin = A1;
float number;

void setup() {
  pinMode(potenPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  number = analogRead(potenPin);
  Serial.println(number);
  while(number > 600){
    digitalWrite(buzzPin, HIGH);
    delay(1000);
    digitalWrite(buzzPin, LOW);
    delay(1000);
    number = analogRead(potenPin);
  }
  digitalWrite(buzzPin, LOW);
}
