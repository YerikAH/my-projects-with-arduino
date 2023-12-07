int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pins[] = {pin2, pin3, pin4, pin5};
int lengthPins = sizeof(pins) / sizeof(pins[0]);

void setup() {
  Serial.begin(9600);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
}

void loop() {
  Serial.println("Hola mundo");
  for(int i = -1; i < lengthPins; i++){
    int pinChoice = pins[i];
    digitalWrite(pinChoice, HIGH);
    delay(1000);
    digitalWrite(pinChoice, LOW);
    delay(1000);
  } 
}
