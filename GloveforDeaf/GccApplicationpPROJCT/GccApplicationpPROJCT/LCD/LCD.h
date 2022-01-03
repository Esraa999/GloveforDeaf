

#ifndef LCD_H
#define	LCD_H


#define lcd_data_Dir        _PD
#define lcd_data            _PD

#define lcd_cotrol          _PC
#define lcd_cotrol_Dir      _PC
#define RS                  PC0
#define RW                  PC1
#define EN                  PC2


#define _ROW0              0
#define _ROW1              1

void LCD_Init();
void LCD_Send_Data(char data);
void LCD_String(char * str);
void LCD_Numbers(int  num);
void LCD_Send_Command(char cmd);
void LCD_Alter_Enable_Bit();

void LCD_XY(int ROW ,int column);
#endif	

