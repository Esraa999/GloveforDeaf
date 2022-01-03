
#include <avr/io.h>
#include "NeededDIO/config.h"
#include "Logic/Logic.h"
int main(void) {
    ADC_init(_VCC, _prescaler_128);
    LCD_Init();
    while (1) {
        ADC_Channel_Increment();
        ADC_Save_Read();
        SensorOnFingers();
    }
    return 0;
}
