

#ifndef CONFIG_H
#define	CONFIG_H

#define F_CPU 16000000UL
#include <util/delay.h>

#define ON     1
#define OFF    0

#define _PA    0
#define _PB    1
#define _PC    2
#define _PD    3


#define IN     0
#define OUT    1
#include "NeededDIO/PORTSPINS.h"
#include "LCD/LCD.h"
#include "ADC/ADC.h"
#include <avr/interrupt.h>
#include "Statements_print/Statements.h"
#include"loop.h"
#endif	/* CONFIG_H */

