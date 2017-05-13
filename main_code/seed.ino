void seedside()
{
insert_seed();
analogWrite(pwm_1,0);
myStepper1.step(250);
analogWrite(pwm_1, 255);
insert_seed();
analogWrite(pwm_1,0);
myStepper1.step(-250);
analogWrite(pwm_1, 255);
analogWrite(pwm_2,0);
myStepper2.step(325);
analogWrite(pwm_2, 255);
}
void irrigateside()
{
pour();
analogWrite(pwm_1,0);
myStepper1.step(250);
analogWrite(pwm_1, 255);
pour();
analogWrite(pwm_1,0);
myStepper1.step(-250);
analogWrite(pwm_1, 255);
analogWrite(pwm_2,0);
myStepper2.step(325);
analogWrite(pwm_2, 255);  }

