/*
 * GccApplication1.c
 *
 * Created: 7/4/2024 6:37:43 PM
 * Author : moham
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include "lib/global.h"
#include "lib/glcd.h"
#include "lib/glcd.c"
#include "lib/camera.h"


int main(void)
{
    /* Replace with your application code */

	glcd_init(0);
	bmp_disp(page,0,0,128,64);


    while (1) 
    {
    }
}

