
#ifndef ADC_H
#define	ADC_H


#define _Channel_0  PA0
#define _Channel_1  PA1
#define _Channel_2  PA2
#define _Channel_3  PA3
#define _Channel_4  PA4
#define _Channel_5  PA5
#define _Channel_6  PA6
#define _Channel_7  PA7

#define _AREF       0
#define _VCC        1



#define _prescaler_128  7

//int _channel ,

void ADC_init(   int Reference ,int prescaler);
void ADC_channel(int _channel);
int  ADC_read();

#endif	

