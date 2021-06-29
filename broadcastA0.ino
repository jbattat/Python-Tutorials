int val;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  val = analogRead(0);
  Serial.println(val);
  delay(500);
}
