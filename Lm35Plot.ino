int a;

void setup() {
  Serial.begin(9600);
}

void loop() {
  a = analogRead(A0);
  Serial.print(a);
  Serial.println();
  delay(500);
  
  
}
