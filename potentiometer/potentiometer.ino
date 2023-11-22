float watchVal;
int light;

void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
pinMode(A1, INPUT);
Serial.begin(9600);
}

void loop() {
  watchVal = analogRead(A1);
  Serial.println(watchVal);
  light = map(watchVal, 0, 1023, 0, 255);
  analogWrite(9, light);
}
