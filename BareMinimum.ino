int LED_GREEN = 9;
int LED_YELLOW = 8;
int LED_RED = 12;
int BUTTON_PIN1 = 2;
int BUTTON_PIN2 = 3;
int BUTTON_PIN3 = 4;
int buttonState = 0;
//int ledValue3 = 0;
//int ledValue2 = 0;
int readValue = 0;
void setup() {
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(BUTTON_PIN1, INPUT_PULLUP);
  pinMode(BUTTON_PIN2, INPUT_PULLUP);
  pinMode(BUTTON_PIN3, INPUT_PULLUP);
  Serial.begin(9600);
}
void loop() {
  buttonState = digitalRead(BUTTON_PIN1);{
  if (digitalRead(BUTTON_PIN1)== LOW) {
    digitalWrite(LED_YELLOW, HIGH);
    Serial.println("Zayed IS AWAY FROM BED");
    delay(1000);
  }
  else {
    digitalWrite(LED_YELLOW, LOW);
    Serial.println("Zayed IS IN BED");
    delay(1000);
  }
  buttonState = digitalRead(BUTTON_PIN2);{
    if (digitalRead(BUTTON_PIN2)== LOW) {
      digitalWrite(LED_GREEN, HIGH);
      Serial.println("Marcus IS AWAY FROM BED");
      delay(1000);
    }
    else {
      digitalWrite(LED_GREEN, LOW);
      Serial.println("Marcus IS IN BED");
      delay(1000);
    }
  }
  buttonState = digitalRead(BUTTON_PIN3);{
    if (digitalRead(BUTTON_PIN3)== LOW) {
      digitalWrite(LED_RED, HIGH);
      Serial.println("Yanxi IS AWAY FROM BED");
      delay(1000);
    }
    else {
      digitalWrite(LED_RED, LOW);
      Serial.println("Yanxi IS IN BED");
      delay(1000);
    }
  }
  }
}
