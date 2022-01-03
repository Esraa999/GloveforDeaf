#include <avr/io.h>
#include "../NeededDIO/config.h"
int Finger[5];

void ADC_Channel_Increment(){
    int counter = 0;
        ADC_channel(counter++);   
        _delay_ms(200);
        if (counter == 5) {
            counter = 0;
            LCD_Send_Command(0x01); //Clear LCD
            _delay_ms(1);
        }
}
void ADC_Save_Read(){
    
        for (int i = 0; i < 5; i++) {
            ADC_channel(i);
            Finger[i] = ADC_read();
            LCD_Send_Command(0x01); //Clear LCD
            _delay_ms(1);
        }
}
void SensorOnFingers(){
	//FINGER[0] THUMBS
	//FINGER[1] INDEX
	//FINGER[2] MIDDLE
	//FINGER[3] RING
	//FINGER[4] PINKY
     if (Finger[0] == NINETY_DEGREE_COMPLETE_BEND && Finger[1] == FORTY_FIVE_DEGREE_BEND && Finger[2] == NINETY_DEGREE_COMPLETE_BEND && Finger[3] == NINETY_DEGREE_COMPLETE_BEND &&Finger[4] == NINETY_DEGREE_COMPLETE_BEND)
	  {
            You();
        } 
		else if (Finger[0] == NINETY_DEGREE_COMPLETE_BEND && Finger[1] == FORTY_FIVE_DEGREE_BEND && Finger[2] == FORTY_FIVE_DEGREE_BEND && Finger[3] == NINETY_DEGREE_COMPLETE_BEND && Finger[4] == NINETY_DEGREE_COMPLETE_BEND) {
            I_am_Watching();
        } else if (Finger[0] == AT_REST_NO_BEND && Finger[1] == AT_REST_NO_BEND && Finger[2] ==AT_REST_NO_BEND && Finger[3] == NINETY_DEGREE_COMPLETE_BEND && Finger[4] == AT_REST_NO_BEND) {
            Really_I_love_you();
        } else if (Finger[0] == AT_REST_NO_BEND && Finger[1] == AT_REST_NO_BEND && Finger[2] == NINETY_DEGREE_COMPLETE_BEND && Finger[3] == NINETY_DEGREE_COMPLETE_BEND && Finger[4] == AT_REST_NO_BEND) {
            I_love_you();
        } else if (Finger[0] == NINETY_DEGREE_COMPLETE_BEND && Finger[1] == AT_REST_NO_BEND && Finger[2] == NINETY_DEGREE_COMPLETE_BEND && Finger[3] == NINETY_DEGREE_COMPLETE_BEND && Finger[4] == AT_REST_NO_BEND) {
            This_is_Awesome();
        } else if (Finger[0] == AT_REST_NO_BEND && Finger[1] == AT_REST_NO_BEND && Finger[2] == AT_REST_NO_BEND && Finger[3] == AT_REST_NO_BEND && Finger[4] == AT_REST_NO_BEND) {
            I_hope_you_a_happy_life();
        } else if (Finger[0] == AT_REST_NO_BEND && Finger[1] == NINETY_DEGREE_COMPLETE_BEND && Finger[2] == NINETY_DEGREE_COMPLETE_BEND && Finger[3] == NINETY_DEGREE_COMPLETE_BEND && Finger[4] == NINETY_DEGREE_COMPLETE_BEND) {
            Good_Job();
        }
}