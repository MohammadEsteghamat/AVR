/*
 * STEPPER2.c
 *
 * Created: 7/4/2024 3:43:31 PM
 * Author : moham
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{   int step[]={2,4,1,8};			//full step 1
	int step1[]={6,5,9,10};			//full step 2
	int step2[]={2,6,4,5,1,9,8,10};	//half step 
	int i;
	DDRC = 0X0F; 
    while (1) 
    {
		for (i=0;i<8;i++)
		{
			PORTC = step2[i];
			_delay_ms(1000);
		}
    }
}

