const int trigPin = 11;
const int echoPin = 12;

int red = 5;
int yellow = 7;
int green = 6;

long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
  pinMode(red, OUTPUT);  
  pinMode(yellow, OUTPUT);  
  pinMode(green, OUTPUT);  
}

void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2000);


digitalWrite(trigPin, HIGH);
delayMicroseconds(10000);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = duration*0.034/2;

Serial.print("Distance: ");
Serial.println(distance);

if(distance <= 20){  
  digitalWrite(green, HIGH);  
digitalWrite(yellow, LOW);  
digitalWrite(red, LOW);  
}
else if(distance <= 40 && distance > 20){
  digitalWrite(yellow, HIGH);  
digitalWrite(green, LOW);   
digitalWrite(red, LOW);   
}
else if(distance > 70){
  digitalWrite(red, HIGH);    
digitalWrite(yellow, LOW);  
digitalWrite(green, LOW);   
}
}
