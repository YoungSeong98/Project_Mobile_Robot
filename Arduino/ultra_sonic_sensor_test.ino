// 150~200mm 


#define TRIG 11
#define ECHO 12
unsigned long sonicval = 0;
int dist = 0;

void setup() {
  pinMode(13,OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  digitalWrite(ECHO, HIGH);
  Serial.begin(57600);
}

void loop() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(5);   
  digitalWrite(TRIG, LOW);
  
  sonicval = pulseIn(ECHO ,HIGH);
  dist = sonicval/29/2;

  Serial.print("Distance : ");
  Serial.print(dist);
  Serial.println("cm");
}
