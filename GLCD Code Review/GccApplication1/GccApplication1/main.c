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
#include "lib/glcd.c"  // Consider moving implementation to the .h file to avoid potential redefinition issues

int main(void)
{
    // Initialize the GLCD
    glcd_init(0);
    
    // Display character 'A' at coordinates (40, 0)
    glcd_putchar('B', 40, 0, 0, 1, 0);
    
    // Draw a cuboid with specified coordinates
    cuboid(0, 0, 20, 20, 10, 10, 30, 30, 0, 1);
    
    // Draw a circle at (20, 20) with radius 10
    circle(20, 20, 10, 0, 1);

    // Draw a series of lines with delay
    for (int i = 0; i < 10; i++) {
        line(2 + i, 1 + i, 20 + i, 1 + i, 0, 1);  // Draw lines from (2+i, 1+i) to (20+i, 1+i)
        _delay_ms(200);  // Delay for 200 ms
    }

    // Draw another series of lines with delay
    for (int i = 0; i < 10; i++) {
        line(1 + i, 2 + i, 1 + i, 20 + i, 0, 1);  // Draw lines from (1+i, 2+i) to (1+i, 20+i)
        _delay_ms(200);  // Delay for 200 ms
    }

    // Infinite loop to keep the program running
    while (1) 
    {
    }
}
