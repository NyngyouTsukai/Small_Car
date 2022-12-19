#include "Sensors.h"


void GetSensorsData(void)
{
    Potensiometer = ADC1_Data[0];
    SetMultiplexerState(0);
        ADCDataTop[0] = ADC1_Data[1];
    ADCDataBottom[0] = ADC1_Data[2];
    SetMultiplexerState(1);
    ADCDataBottom[4] = ADC1_Data[2];
    SetMultiplexerState(2);
        ADCDataTop[1] = ADC1_Data[1];
    ADCDataBottom[2] = ADC1_Data[2];
    SetMultiplexerState(4);
    ADCDataBottom[1] = ADC1_Data[2];
    SetMultiplexerState(6);
    ADCDataTop[2] = ADC1_Data[1];
    ADCDataBottom[3] = ADC1_Data[2];
}

