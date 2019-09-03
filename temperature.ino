int tempsense;
void setup() {
  pinMode(tempsense,INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(tempsense);
  float mvvalue = ((float)value/1024)*5000;
  float temp_in_c = mvvalue/10;
  Serial.print("temp in c:");
  Serial.println(temp_in_c);
  delay(500);
}
