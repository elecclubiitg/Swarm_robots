#define RIGHT_MOTOR_PIN1  D8                 // pin 1 of right motor (D2)
#define RIGHT_MOTOR_PIN2  D7                  // pin 2 of right motor (D1)
#define LEFT_MOTOR_PIN1   D6                  // pin 1 of left motor (D6)
#define LEFT_MOTOR_PIN2   D5                // pin 2 of left motor (D5)
#define RIGHT_MOTOR_SPEED 1023                // speed for right motor (0-1023)
#define LEFT_MOTOR_SPEED  1023 

void setup() {
   Serial.begin(115200);
   pinMode(RIGHT_MOTOR_PIN1, OUTPUT);
  pinMode(RIGHT_MOTOR_PIN2, OUTPUT);
  pinMode(LEFT_MOTOR_PIN1, OUTPUT);
  pinMode(LEFT_MOTOR_PIN2, OUTPUT);

}

void loop() {
     analogWrite(RIGHT_MOTOR_PIN1, RIGHT_MOTOR_SPEED);
      digitalWrite(RIGHT_MOTOR_PIN2, LOW);
      analogWrite(LEFT_MOTOR_PIN1, LEFT_MOTOR_SPEED);
      digitalWrite(LEFT_MOTOR_PIN2, LOW);
      

      digitalWrite(RIGHT_MOTOR_PIN1, LOW);
      analogWrite(RIGHT_MOTOR_PIN2, RIGHT_MOTOR_SPEED);
      analogWrite(LEFT_MOTOR_PIN1, LEFT_MOTOR_SPEED);
      digitalWrite(LEFT_MOTOR_PIN2, LOW);
      
   
     analogWrite(RIGHT_MOTOR_PIN1, RIGHT_MOTOR_SPEED);
      digitalWrite(RIGHT_MOTOR_PIN2, LOW);
      digitalWrite(LEFT_MOTOR_PIN1, LOW);
      analogWrite(LEFT_MOTOR_PIN2, LEFT_MOTOR_SPEED);
       
     
      analogWrite(RIGHT_MOTOR_PIN1, RIGHT_MOTOR_SPEED);
      digitalWrite(RIGHT_MOTOR_PIN2, LOW);
      analogWrite(LEFT_MOTOR_PIN1, LEFT_MOTOR_SPEED);
      digitalWrite(LEFT_MOTOR_PIN2, LOW);
       

}
