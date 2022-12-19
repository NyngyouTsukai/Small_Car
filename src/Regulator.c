#include "Regulator.h"



void PID_Init(void)
{
    PID_regulator[0].K_p = 1.0;
    PID_regulator[0].I_p = 0.0;
    PID_regulator[0].D_p = 0.0;
    PID_regulator[0].current = 0.0;
    PID_regulator[0].goal = 0.0;
    PID_regulator[0].error = 0.0;
    PID_regulator[0].Max_output = 1.0;
    PID_regulator[0].Min_output = 0.01;
    PID_regulator[0].Max_sum_error = 5.0;
    PID_regulator[0].prev_error = 0.0;
    PID_regulator[0].sum_error = 0.0;

    PID_regulator[1].K_p = 1.0;
    PID_regulator[1].I_p = 0.0;
    PID_regulator[1].D_p = 0.0;
    PID_regulator[1].current = 0.0;
    PID_regulator[1].goal = 0.0;
    PID_regulator[1].error = 0.0;
    PID_regulator[1].Max_output = 1.0;
    PID_regulator[1].Min_output = 0.01;
    PID_regulator[1].Max_sum_error = 5.0;
    PID_regulator[1].prev_error = 0.0;
    PID_regulator[1].sum_error = 0.0;

}


void PID_Calc(int number)
{
    PID_regulator[number].error = PID_regulator[number].goal - PID_regulator[number].current;
    PID_regulator[number].sum_error += PID_regulator[number].error;
    if(PID_regulator[number].sum_error > PID_regulator[number].Max_sum_error)
        PID_regulator[number].sum_error = PID_regulator[number].Max_sum_error;
    if(PID_regulator[number].sum_error <- PID_regulator[number].Max_sum_error)
        PID_regulator[number].sum_error =- PID_regulator[number].Max_sum_error;

    PID_regulator[number].output = (PID_regulator[number].K_p * PID_regulator[number].error) + (PID_regulator[number].I_p * PID_regulator[number].sum_error) + (PID_regulator[number].D_p * PID_regulator[number].prev_error);
    if (PID_regulator[number].output <= -PID_regulator[number].Max_output)
        PID_regulator[number].output = -1.0;
    if (PID_regulator[number].output > PID_regulator[number].Max_output)
        PID_regulator[number].output = 1.0;
    PID_regulator[number].prev_error = PID_regulator[number].error;

//    PID_regulator[1].error = PID_regulator[1].goal + PID_regulator[1].current;
//    PID_regulator[1].sum_error += PID_regulator[1].error;
//    if(PID_regulator[1].sum_error > PID_regulator[1].Max_sum_error)
//        PID_regulator[1].sum_error = PID_regulator[1].Max_sum_error;
//    if(PID_regulator[1].sum_error <- PID_regulator[1].Max_sum_error)
//        PID_regulator[1].sum_error =- PID_regulator[1].Max_sum_error;
//
//    PID_regulator[1].output = (PID_regulator[1].K_p * PID_regulator[1].error) + (PID_regulator[1].I_p * PID_regulator[1].sum_error) + (PID_regulator[1].D_p * PID_regulator[1].prev_error);
//    if (PID_regulator[1].output <= -PID_regulator[1].Max_output)
//        PID_regulator[1].output = -1.0;
//    if (PID_regulator[1].output > PID_regulator[1].Max_output)
//        PID_regulator[1].output = 1.0;
//    PID_regulator[1].prev_error = PID_regulator[1].error;
}
