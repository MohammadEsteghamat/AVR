/*
 * keypad.c
 *
 * Created: 6/11/2024 11:19:44 AM
 * Author : moham
 */ 

#include <avr/io.h>
#include "lib/KeyPad.h"

int main(void)
{  
   KeyPadInit();
   DDRC =0XFF;
   while (1)
   {
	   if (CheckPad())
	   {   
		   PORTC = SearchPad();
		
	   }
	   else
	   {
		   PORTC = 0X00;
	   }
   }
}



