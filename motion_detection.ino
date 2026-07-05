#define PIR_SENSOR 27
#define RELAY_PIN 26

void setup() {
  Serial.begin(115200);

  pinMode(PIR_SENSOR, INPUT);
  pinMode(RELAY_PIN, OUTPUT);

  digitalWrite(RELAY_PIN, HIGH);
}

void loop() {
  int motion = digitalRead(PIR_SENSOR);

  if (motion == HIGH) {
    Serial.println("Motion Detected");
    digitalWrite(RELAY_PIN, LOW);   // Turn ON Light
    delay(5000);
  } else {
    Serial.println("No Motion");
    digitalWrite(RELAY_PIN, HIGH);  // Turn OFF Light
  }

  delay(500);
}
