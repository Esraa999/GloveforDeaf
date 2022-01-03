#include <avr/io.h>
#include "../NeededDIO/config.h"

void Good_Job(){
	char sentences[] = "Good Job";
	LCD_XY(_ROW0, 1);
	LCD_String(sentences);
	_delay_ms(1000);
	LCD_Send_Command(0x01); //Clear LCD
	_delay_ms(9);
}

void I_am_Watching(){
   char sentences[] = "I am Watching";
            LCD_XY(_ROW0, 1);
            LCD_String(sentences);
            _delay_ms(500);
			LCD_Send_Command(0x01); //Clear LCD
			_delay_ms(3); 		
}

void You() {
	char sentences[] = "You";
	LCD_XY(_ROW0, 5);
	LCD_String(sentences);
	_delay_ms(500);
	LCD_Send_Command(0x01); //Clear LCD
	_delay_ms(3);
}
void Really_I_love_you(){
   char sentences[] = "Really ";
            LCD_XY(_ROW0, 6);
            LCD_String(sentences);
            char sentence1[] = "I love you";
            LCD_XY(_ROW1, 4);
            LCD_String(sentence1);
            _delay_ms(1000); 
			LCD_Send_Command(0x01); //Clear LCD
			_delay_ms(10);
}
void I_love_you(){
    char sentences[] = "I love you";
            LCD_XY(_ROW1, 1);
            LCD_String(sentences);
            _delay_ms(500);
			LCD_Send_Command(0x01); //Clear LCD
			_delay_ms(3);
}
void This_is_Awesome(){
    char sentences[] = "This is Awesome";
            LCD_XY(_ROW0, 1);
            LCD_String(sentences);
            _delay_ms(500);
			LCD_Send_Command(0x01); //Clear LCD
			_delay_ms(3);
}
void I_hope_you_a_happy_life(){
     char sentences[] = "I hope you";
            LCD_XY(_ROW0, 3);
            LCD_String(sentences);
            char sentences1[] = "a happy life";
            LCD_XY(_ROW1, 2);
            LCD_String(sentences1);
            _delay_ms(500);
			LCD_Send_Command(0x01); //Clear LCD
			_delay_ms(6);
}
