
void insert_seed()
{
  analogWrite(pwm_3,0);       
  myStepper3.step(-300); //move the sowing arm down
  analogWrite(pwm_3, 255);
  myservo.write(150);    //open the seed valve
  delay(10);
  analogWrite(pwm_3,0);
  myStepper3.step(+10);  //to shake the sowing arm 
  analogWrite(pwm_3, 255);
  delay(10);
  analogWrite(pwm_3,0);
  myStepper3.step(-10);
  analogWrite(pwm_3, 255);  
  delay(10);
  analogWrite(pwm_3,0);
  myStepper3.step(10);
  analogWrite(pwm_3, 255);
  delay(10);
  analogWrite(pwm_3,0);
  myStepper3.step(-10);
  analogWrite(pwm_3, 255);
  myservo.write(120);
  delay(20);  
  digitalWrite(water,HIGH);   //turn on the solenoidal valve
  delay(2000);
  digitalWrite(water,LOW);    //turn off the solenoidal value
  analogWrite(pwm_3,0);
  myStepper3.step(300);
  analogWrite(pwm_3, 255);
}
void pour()
{
  digitalWrite(water,HIGH);
  delay(1500);
  digitalWrite(water,LOW);
}
void rotate_clock(int n)    // to rotate the horizontal arm in clockwise direction 
{
  analogWrite(pwm_1,0);
  myStepper1.step(n);
  analogWrite(pwm_1, 255);
}
void anti_rotate_clock(int n)  // to rotate the horizontal arm in clockwise direction 
{
  analogWrite(pwm_1,0);
  myStepper1.step(-n);
  analogWrite(pwm_1, 255);
}

