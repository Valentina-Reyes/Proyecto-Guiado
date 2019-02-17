const int trigPin =3;
const int echoPin =2;
int Pin = 4;
int Pin2 = 5;
int Pin3 = 6;
int Pin4 = 7;
long duration;
 int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(Pin, OUTPUT);
  pinMode(Pin2, OUTPUT);
  pinMode(Pin3, OUTPUT);
  pinMode(Pin4, OUTPUT);

  Serial.begin(9600); //inicia comunicacion serial
}

void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

if (digitalRead(echoPin)== distance){
      digitalWrite(Pin, HIGH);
    } else {
      digitalWrite(Pin, LOW);
    }

if (digitalRead(echoPin)== distance/2 ){
      digitalWrite(Pin2, HIGH);
    } else {
      digitalWrite(Pin2, LOW);
    }    

if (digitalRead(echoPin)== distance/3){
      digitalWrite(Pin3, HIGH);
    } else {
      digitalWrite(Pin3, LOW);
    }
if (digitalRead(echoPin)== distance/4){
      digitalWrite(Pin4, HIGH);
    } else {
      digitalWrite(Pin4, LOW);
    }
    
duration = pulseIn(echoPin, HIGH);
distance = 0.014 *duration / 2;

Serial.print("distancia: ");
Serial.println(distance);

}
