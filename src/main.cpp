#include <Arduino.h>
#include <StepMotor.h>
#include <ControlButton.h>

//Intance motor
StepMotor motor(10, 11, 12, 13, "m");

//Instance Button
ControlButton botao(2,200,true);

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
