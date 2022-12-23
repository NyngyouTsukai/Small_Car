#include "Regulator.h"
#include "Engine.h"



/// Расчет скорости
void TIM2_IRQHandler(void)
{
PID_Calc(0);
PID_Calc(1);

SetVoltageRight(PID_regulator[1].output);
SetVoltageLeft(PID_regulator[0].output);


ResetTimSR(TIM2);
}

float speed[2];
int16_t EncData[2];
float angle[2];
float line[2];
//float distance[2];
float GlobalDist = 0.0;

void distancePT(void);

#define Time 0.01
#define Length 0.1256628
#define Oborot 3200.0
///Расчет регулятора
void TIM4_IRQHandler(void)
{
    EncData[0] = TIM3->CNT;

    angle[0] = ((float)EncData[0] * 360.0) / Oborot;

    line[0] = (angle[0] * Length) / 360.0;
    line[0] *= 0.8683;

    speed[0] = line[0] / Time;

    PID_regulator[0].current = speed[0];

EncData[1] = TIM5->CNT;

    angle[1] = (-(float)EncData[1] * 360.0) / Oborot;

    line[1] = (angle[1] * Length) / 360.0;

    speed[1] = line[1] / Time;

    PID_regulator[1].current = speed[1];

    GlobalDist += line[0];

    distancePT();

    TIM3->CNT = 0;
    TIM5->CNT = 0;
ResetTimSR(TIM4);
}
#define dist_PT     1.0
void distancePT(void)
{
    if(GlobalDist < dist_PT)
    {
        PID_regulator[0].goal = 0.2;
        PID_regulator[1].goal = 0.2;
    }
    else {
        PID_regulator[0].goal = 0.0;
        PID_regulator[1].goal = 0.0;
        //GlobalDist = 0.0;
    }

}


