int pinRed = 7;
int pinYellow = 8;
int pinGreen = 9;
int pinBlue = 10;
String inputUser;
String message = "Write a color: ";

void setup() {
  Serial.begin(9600);
  pinMode(pinRed, OUTPUT);
  pinMode(pinYellow, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinBlue, OUTPUT);
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
    digitalWrite(pinBlue, LOW);
  }else if(inputUser == "verde"){
    digitalWrite(pinRed, LOW);
    digitalWrite(pinYellow, LOW);
    digitalWrite(pinGreen, HIGH);
    digitalWrite(pinBlue, LOW);
  }else if(inputUser == "amarillo"){
    digitalWrite(pinRed, LOW);
    digitalWrite(pinYellow, HIGH);
    digitalWrite(pinGreen, LOW);
    digitalWrite(pinBlue, LOW);
  }else if(inputUser == "azul"){
    digitalWrite(pinRed, LOW);
    digitalWrite(pinYellow, LOW);
    digitalWrite(pinGreen, LOW);
     digitalWrite(pinBlue, HIGH);
  }
}

