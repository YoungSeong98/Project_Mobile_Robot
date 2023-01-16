// Motor A Connection
const int enA = 9;
const int in1 = 5;
const int in2 = 6;

// Motor B Connection
const int enB = 10;
const int in3 = 7;
const int in4 = 8;

const int motorSpeed = 128;   // Set Speed (0 = off, 255 = max speed)

void setup(){
  // Set motor control pins to output
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // Turn off the motors : Initial State
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

  // Set motor Speed
  analogWrite(enA, motorSpeed);
  analogWrite(enB, motorSpeed); 
}

void loop(){
  // Command the motors to move 4 sides
  go_forward();
  delay(3000);

  go_backwards();
  delay(3000);

  go_right();
  delay(3000);

  go_left();
  delay(3000);

  stop_all();
  delay(3000);
}
  // Functions which command the motors to move
void go_forward(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);  
}
void go_backwards(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);  
}
void go_right(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);  
}
void go_left(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);  
}
  // Stop the motors
void stop_all(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);  
}
