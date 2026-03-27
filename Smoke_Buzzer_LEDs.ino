// Smoke Detection System with Buzzer and LED Indicators

int smokePin = A0;          // Analog pin connected to smoke sensor
int buzzer = 6;             // Digital pin connected to buzzer
int leds[6] = {30,31,32,33,34,35}; // Array of LED pins

void setup() {
  // Set buzzer pin as OUTPUT
  pinMode(buzzer, OUTPUT);

  // Set all LED pins as OUTPUT
  for(int i = 0; i < 6; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Read smoke sensor value
  int smoke = analogRead(smokePin);

  // If smoke level exceeds threshold
  if(smoke > 500) {

    digitalWrite(buzzer, HIGH); // Turn on buzzer

    // Turn on LEDs sequentially as visual alert
    for(int i = 0; i < 6; i++) {
      digitalWrite(leds[i], HIGH);
      delay(200);
      digitalWrite(leds[i], LOW);
    }

  } else {
    digitalWrite(buzzer, LOW); // Turn off buzzer if no smoke
  }
}