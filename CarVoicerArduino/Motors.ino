#define enA 9
#define in1 6
#define in2 7

void setupDriveMotor() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  // Set initial rotation direction
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  
}

void GoStraight(int speed){
  analogWrite(enA, speed); // Send PWM signal to L298N Enable pin
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);   
  }
  
  void GoBack(int speed){
  analogWrite(enA, speed); // Send PWM signal to L298N Enable pin
    digitalWrite(in1, LOW );
    digitalWrite(in2, HIGH);   
  }
