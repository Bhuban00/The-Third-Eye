#define trigPin 7

#define echoPin 8

#define buzzer 6

void setup()
{
  
pinMode(trigPin, OUTPUT);

pinMode(echoPin, INPUT);

pinMode(buzzer,OUTPUT);

}

void loop()

{
int height = 163; //user can set his or her height in cm
long duration;
long distance;

digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH); //To calculate the time the sound comes back

distance = (duration/2) / 29.1; //here 29.1 is the speed of sound

if ((distance < (height-10)) || (distance > (height+20)))     

{

digitalWrite(buzzer,HIGH);// When the distance below height length

} 
else

{

digitalWrite(buzzer,LOW);// when there is no obstacle

} delay(500);

}