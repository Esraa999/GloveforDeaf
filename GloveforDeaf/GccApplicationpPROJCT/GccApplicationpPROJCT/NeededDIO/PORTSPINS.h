

#ifndef IO_H
#define	PORTSPINS_H




void Set_Port_Direction ( int portNum , int state);    
void setPortData ( int portNum , int data);    



//PIN LEVEL

void Set_Pin_Direction ( int portNum , int pinNum, int state);    
void Set_Pin_Data ( int portNum , int pinNum, int data);    

#endif	

