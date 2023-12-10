int redPin = 9;
int bluePin = 10;
int greenPin = 11;
int colorArray[3];
String colorString;

void setup() {
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin,OUTPUT);
}

void loop() {
  Serial.println();
  Serial.println("Escribe un color según rba: ");
  while (Serial.available() == 0){

  }
  colorString = Serial.readString();
  
  parseRGB(colorString, colorArray);
  analogWrite(redPin, colorArray[0]);
  analogWrite(greenPin, colorArray[1]);
  analogWrite(bluePin, colorArray[2]);

}


void parseRGB(String colorString, int colorArray[]) {
  int startIndex = colorString.indexOf('(') + 1;
  int endIndex = colorString.indexOf(')');
  int commaIndex1 = colorString.indexOf(',');
  int commaIndex2 = colorString.lastIndexOf(',');
  colorArray[0] = colorString.substring(startIndex, commaIndex1).toInt();
  colorArray[1] = colorString.substring(commaIndex1 + 1, commaIndex2).toInt();
  colorArray[2] = colorString.substring(commaIndex2 + 1, endIndex).toInt();
}
