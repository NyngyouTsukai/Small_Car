#include "main.h"
#include "TCS3472.h"

/// от 0 - до 7
void SetMultiplexerState(uint8_t state)
{
    ResetPin(MULPLXA_PIN);
    ResetPin(MULPLXB_PIN);
    ResetPin(MULPLXC_PIN);

    if(((state >> 2)&0x1) == 1) SetPin(MULPLXA_PIN);
    if(((state >> 1)&0x1) == 1) SetPin(MULPLXB_PIN);
    if((state&0x1) == 1) SetPin(MULPLXC_PIN);
    delay_ms(3);
}

//uint16_t ADCData[2];
bool status;
float distance = 0.0;
int main(void)
{
Board_Config;
PID_Init();
NVIC_EnableIRQ(TIM4_IRQn);
NVIC_EnableIRQ(TIM2_IRQn);
ADCAddChannel(8,REGULAR,ADC_480_CYCLES);
ADCAddChannel(9,REGULAR,ADC_480_CYCLES);
ConnectADCTODMA(HIGH_P, ADC1_Data, 0);
ADC_Init();

I2CSimpleConfigure(I2C1, I2C_Fast);
TCS3472_Init();
    while(1)
    {
        TCS3472_GetRGB();
        delay_ms(50);

//    ADCData[0] = ADC1 -> DR;
//    ADCData[1] = ADC2 -> JDR1;
    }

}



