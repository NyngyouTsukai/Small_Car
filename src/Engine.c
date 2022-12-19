#include "Engine.h"

void SetVoltageRight(float Duty)
{
    if(Duty >= 0.0)
    {
        ResetPin(BTN1_DIR_PIN);
        SetPWM(TIM1,1,Duty);
    }
    else
    {
        SetPin(BTN1_DIR_PIN);
        SetPWM(TIM1,1,Duty);
    }
}

void SetVoltageLeft(float Duty)
{
    if(Duty >= 0.0)
    {
        ResetPin(BTN2_DIR_PIN);
        SetPWM(TIM1,2,Duty);
    }
    else
    {
        SetPin(BTN2_DIR_PIN);
        SetPWM(TIM1,2,Duty);
    }
}
