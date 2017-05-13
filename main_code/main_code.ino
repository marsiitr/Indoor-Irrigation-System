
#include <Stepper.h>
#include <Servo.h>

//#define water 7
int pwm_1 = 9;              
int pwm_2 = 5;
int pwm_3 = A1;
int water =7;           //For Solenoidal valve
int count = 0;
int steps = 200;
int pos = 120; 
const int stepsPerRevolution = 200;
Stepper myStepper1(stepsPerRevolution, 10, 11, 12, 13);//For horizontal movement
Stepper myStepper2(stepsPerRevolution, 8, 2, 3, 4);//For circular movement
Stepper myStepper3(stepsPerRevolution, A2, A3, A4, A5);//For vertical movement
void seedside();
void irrigateside();
void insert_seed();
void pour();
Servo myservo;
void setup() {
  myStepper1.setSpeed(60);
  myStepper2.setSpeed(60);
  myStepper3.setSpeed(60);
    
analogWrite(pwm_1,0);
  myStepper1.step(100);
  analogWrite(pwm_1, 255); 
  myservo.attach(6); 
    Serial.begin(9600);
  myservo.write(120);

  pinMode(pwm_1, OUTPUT);
  pinMode(pwm_2, OUTPUT);
  pinMode(water, OUTPUT);

}

int counter = 0;
void loop() {  
counter++;
if(counter<5)                   //both sow seed and pour water it in half side of land
{
seedside();
}
else if(counter<9)              //only pour water in the another half side of land
{
irrigateside();
}
else                            //To bring arm back to its initial position
{
  counter = 0;
analogWrite(pwm_2,0);
  myStepper2.step(-2680);
  analogWrite(pwm_2, 255);}
}

