#include <StepMotor.h>
#include <ControlButton.h>

//Intance motor
StepMotor motor(10, 9, 8, 12, "m");

//Instance Button
ControlButton botao(7,200,true);

//steps Counter
unsigned int counter;

void setup()
{
  Serial.begin(9600);
  counter = 0;
}

void loop()
{
  if (botao.noDebounce() == 1)
  {
    motor.onlyMove(1);
    counter++;
    Serial.print("O numero de passos é:");
    Serial.println(counter);
  }
  
}
