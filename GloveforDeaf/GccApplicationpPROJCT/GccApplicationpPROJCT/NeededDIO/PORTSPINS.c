#include <avr/io.h>
#include "config.h"
void Set_Port_Direction(int portNum, int state) {
    switch (portNum) {
        case _PA:
            DDRA = state ? 0xFF : 0x00;
            break;
        case _PB:
            DDRB = state ? 0xFF : 0x00;
            break;
        case _PC:
            DDRC = state ? 0xFF : 0x00;
            break;
        case _PD:
            DDRD = state ? 0xFF : 0x00;
            break;
        default:
            ;
    }
}

void setPortData(int portNum, int data) {
    switch (portNum) {
        case _PA:
            PORTA = data;
            break;
        case _PB:
            PORTB = data;
            break;
        case _PC:
            PORTC = data;
            break;
        case _PD:
            PORTD = data;
            break;
    }
}

void togglePortData(int portNum) {
    switch (portNum) {
        case _PA:
            PORTA ^= 0xFF;
            break;
        case _PB:
            PORTB ^= 0xFF;
            break;
        case _PC:
            PORTC ^= 0xFF;
            break;
        case _PD:
            PORTD ^= 0xFF;
            break;
        default:
            ;
    }
}

void Set_Pin_Direction(int portNum, int pinNum, int state) {
    if (state) {
        switch (portNum) {
            case _PA:
                DDRA |= (1 << pinNum);
                break;
            case _PB:
                DDRB |= (1 << pinNum);
                break;
            case _PC:
                DDRC |= (1 << pinNum);
                break;
            case _PD:
                DDRD |= (1 << pinNum);
                break;
        }
    } else {
        switch (portNum) {
            case _PA:
                DDRA &= ~(1 << pinNum);
                break;
            case _PB:
                DDRB &= ~(1 << pinNum);
                break;
            case _PC:
                DDRC &= ~(1 << pinNum);
                break;
            case _PD:
                DDRD &= ~(1 << pinNum);
                break;
            default:
                ;
        }
    }
}

void Set_Pin_Data(int portNum, int pinNum, int data) {
    if (data) {
        switch (portNum) {
            case _PA:
                PORTA |= (1 << pinNum);
                break;
            case _PB:
                PORTB |= (1 << pinNum);
                break;
            case _PC:
                PORTC |= (1 << pinNum);
                break;
            case _PD:
                PORTD |= (1 << pinNum);
                break;
        }
    } else {
        switch (portNum) {
            case _PA:
                PORTA &= ~(1 << pinNum);
                break;
            case _PB:
                PORTB &= ~(1 << pinNum);
                break;
            case _PC:
                PORTC &= ~(1 << pinNum);
                break;
            case _PD:
                PORTD &= ~(1 << pinNum);
                break;
        }

    }


}
void togglePinData(int portnum ,int pinNum){
    switch(portnum){
        case _PA:
            PORTA ^=(1<<pinNum);
            break;
            case _PB:
                PORTB ^=(1<<pinNum);
                
            break;
            case _PC:
                PORTC ^=(1<<pinNum);
            break;
            case _PD:
                PORTD ^=(1<<pinNum);
            break;
        default:
            ;
        
    }
            
}