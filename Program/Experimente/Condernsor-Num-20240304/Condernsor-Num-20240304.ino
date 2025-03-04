auto pin = D0;

void setup() {
  Serial.begin(115200);
  Serial.println("Kicker Power Test 2025-03-04");
  pinMode(pin, OUTPUT);
}

void loop() {
  Serial.println("kick!");
  digitalWrite(pin, HIGH);
  delay(60);
  digitalWrite(pin, LOW);
  delay(6000);
}