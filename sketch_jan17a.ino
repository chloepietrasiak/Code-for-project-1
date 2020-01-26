#define trigPin 7
#define echoPin 6
#define led 13
#define led2 12
#define led3 11



void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
 

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;


  if (distance > 5) {
    digitalWrite(led, HIGH);
    Serial.print("ITEM:");
    Serial.println("Apple");
    Serial.print("EXPIRES: February 14th , 2020");
    delay(1000);
  
}
  else {
    digitalWrite(led,LOW);
  }
  if (distance < 5 ) {
      digitalWrite(led2, HIGH);
       digitalWrite(led, HIGH);
    Serial.print("ITEM:");
    Serial.println("Milk ");
    delay(1000);
     
}
