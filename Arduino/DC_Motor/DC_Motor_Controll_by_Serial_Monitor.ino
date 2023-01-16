int IN1Pin = 8;
int IN2Pin = 7;
int IN3Pin = 2;
int IN4Pin = 4;
int ENAPin = 6;
int ENBPin = 3;
void setup() {
  Serial.begin(9600);
  pinMode(IN1Pin, OUTPUT);
  pinMode(IN2Pin, OUTPUT);
  pinMode(IN3Pin, OUTPUT);
  pinMode(IN4Pin, OUTPUT);
  analogWrite(ENAPin, 255);
  analogWrite(ENBPin, 255);
}
void loop()
{
   if(Serial.available())  
  {
    char in_data;         
    in_data = Serial.read();  
     Serial.print("data : ");
     Serial.println(in_data);
     if(in_data == 's')
     {
     digitalWrite(IN1Pin, HIGH);
     digitalWrite(IN2Pin, LOW);
     digitalWrite(IN3Pin, HIGH);
     digitalWrite(IN4Pin, LOW);
     delay(1000);
     }
     else if(in_data == 'w')
     {
     digitalWrite(IN1Pin, LOW);
     digitalWrite(IN2Pin, HIGH);
     digitalWrite(IN3Pin, LOW);
     digitalWrite(IN4Pin, HIGH);
     delay(1000);
     }
     else if(in_data == 'd')
     {
     digitalWrite(IN1Pin, HIGH);
     digitalWrite(IN2Pin, LOW);
     digitalWrite(IN3Pin, LOW);
     digitalWrite(IN4Pin, HIGH);
     }
     else if(in_data == 'a')
     {
     digitalWrite(IN1Pin, LOW);
     digitalWrite(IN2Pin, HIGH);
     digitalWrite(IN3Pin, HIGH);
     digitalWrite(IN4Pin, LOW);
     }
     else if(in_data == 'x')
     {
     digitalWrite(IN1Pin, HIGH);
     digitalWrite(IN2Pin, HIGH);
     digitalWrite(IN3Pin, HIGH);
     digitalWrite(IN4Pin, HIGH);
     }
  }
}
