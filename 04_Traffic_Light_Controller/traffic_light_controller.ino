// Define the pin numbers for each LED
int red = 10;
int yellow = 8;
int green = 6;
void setup() {
  // Set the LED pins as outputs
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}
void loop() {
  // 1. GREEN light on for 5 seconds
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  delay(6000);
  // 2. YELLOW light on for 2 seconds
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(red, LOW);
  delay(2000);
  // 3. RED light on for 5 seconds
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(5000);
}

