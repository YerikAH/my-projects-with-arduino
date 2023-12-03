int pinRed = 7;
int pinYellow = 8;
int pinGreen = 9;
String inputUser;
String message = "Write a color: ";

void setup() {
  pinMode(pinRed, OUTPUT);
  pinMode(pinYellow, OUTPUT);
  pinMode(pinGreen, OUTPUT);
}

void loop() {
  Serial.println(message);
  while(Serial.available() == 0){

  }
  inputUser = Serial.readString();
  if(inputUser == "rojo"){
    digitalWrite(pinRed, HIGH);
    digitalWrite(pinYellow, LOW);
    digitalWrite(pinGreen, LOW);
  }else if(inputUser == "verde"){
    digitalWrite(pinRed, LOW);
    digitalWrite(pinYellow, LOW);
    digitalWrite(pinGreen, HIGH);
  }else if(inputUser == "amarillo"){
    digitalWrite(pinRed, LOW);
    digitalWrite(pinYellow, HIGH);
    digitalWrite(pinGreen, LOW);
  }
}

