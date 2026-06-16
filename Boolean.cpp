// Define the pin numbers
const int pinU = 2;    // Input u
const int pinW = 3;    // Input w
const int pinF = 13;   // Output f (LED)

void setup() {
  // Configure input pins
  pinMode(pinU, INPUT);
  pinMode(pinW, INPUT);
  
  // Configure output pin
  pinMode(pinF, OUTPUT);
}

void loop() {
  // Read the current state of the inputs (HIGH or LOW)
  bool u = digitalRead(pinU);
  bool w = digitalRead(pinW);

  // Compute the simplified Boolean function: f = !u OR !w
  bool f = !u || !w;

  // Output the result to the LED
  digitalWrite(pinF, f);
}