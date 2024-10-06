/*
 * setpper.c
 *
 * Created: 7/4/2024 1:37:00 PM
 * Author : moham
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{   int step[]={1,2,4,8};
	int step1[]={3,6,12,9};
	int step2[]={1,3,2,6,4,12,8,9};	
	
	int i;
	DDRC = 0x0f;
    /* Replace with your application code */
    while (1) 
    {
	for (i=0;i<4;i++)
	{
		PORTC = step[i];
		_delay_ms(150);
	}
		
    }
}

