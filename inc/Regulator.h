#pragma once
#include "main.h"

typedef struct
{
    float K_p;
    float I_p;
    float D_p;
    float Max_output;
    float Min_output;
    float Max_sum_error;
    float output;
    float current;
    float goal;
    float error;
    float prev_error;
    float sum_error;
} Reg;
Reg PID_regulator[2];


void PID_Init(void);

void PID_Calc(int number);
