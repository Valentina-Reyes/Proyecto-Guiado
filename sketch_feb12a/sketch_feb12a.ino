int sensorPin =5;

int ledPin = 2;



void setup() {
    pinMode(sensorPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    if (digitalRead(sensorPin)== HIGH){
      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
    }
}
