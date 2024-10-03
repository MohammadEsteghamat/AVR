/*
 * lcd.c
 *
 * Created: 7/4/2024 3:05:16 AM
 * Author : moham
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include "lib/lcd.h"
#include "lib/lcd.c"
int main(void)
{
    /* Replace with your application code */
	char mohammad[]= "mohammad \nesteghamat"; 
    	lcd_init(LCD_DISP_ON_CURSOR_BLINK);
		/*
		lcd_clrscr();
		lcd_puts(mohammad);
		lcd_gotoxy(2,2);
		lcd_command(0x0F);
		*/

    while (1) 
    {

    }
}

