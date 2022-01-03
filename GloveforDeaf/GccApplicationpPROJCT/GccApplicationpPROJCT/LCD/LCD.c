#include <avr/io.h>
#include "../NeededDIO/config.h"
#include <stdlib.h>

void LCD_Init() {
    Set_Port_Direction(lcd_data_Dir, OUT);
    Set_Pin_Direction(lcd_cotrol_Dir, RS, OUT);
    Set_Pin_Direction(lcd_cotrol_Dir, RW, OUT);
    Set_Pin_Direction(lcd_cotrol_Dir, EN, OUT);
    Set_Pin_Data(lcd_cotrol, RW, OFF);

    _delay_ms(10);
    LCD_Send_Command(0x01); //Clear LCD
    _delay_ms(1);
    LCD_Send_Command(0x38);
    _delay_ms(50);
    LCD_Send_Command(0x0c);
    _delay_ms(50);
    LCD_Send_Command( 0x06);
    _delay_ms(50);
    LCD_Send_Command(0x02);
    _delay_ms(50);

}

void LCD_Alter_Enable_Bit() {
    Set_Pin_Data(lcd_cotrol, EN, ON);
    _delay_ms(1);
    Set_Pin_Data(lcd_cotrol, EN, OFF);

}

void LCD_Send_Data(char data) {
    Set_Pin_Data(lcd_cotrol, RS, ON);
    setPortData(lcd_data, data);
    LCD_Alter_Enable_Bit();
}

void LCD_Send_Command(char cmd) {
    Set_Pin_Data(lcd_cotrol, RS, OFF);
    setPortData(lcd_data, cmd);
    LCD_Alter_Enable_Bit();

}



void LCD_String(char * str) {
    for (int i = 0; str[i] != '\0'; i++) {

        LCD_Send_Data(str[i]);

    }


}

void LCD_Numbers(int num) {
    char buffer[11];
    itoa(num, buffer, 10);
    LCD_String(buffer);

}

void LCD_XY(int ROW, int column) {
    switch (ROW) {
        case _ROW0:
            LCD_Send_Command(0x80 | column);
            break;
        case _ROW1:
            LCD_Send_Command(0xC0 | column);
            break;

    }


}
