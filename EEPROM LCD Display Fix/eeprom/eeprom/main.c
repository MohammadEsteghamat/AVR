/*
 * eeprom.c
 *
 * Created: 7/4/2024 5:23:28 AM
 * Author : moham
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include "lib/lcd.h"
#include "lib/lcd.c"
#include <avr/eeprom.h>

// EEPROM space to store the string
char EEMEM mohammad[10];

int main(void) {
    // String to write to EEPROM
    char m[] = "mohammad";
    // Buffer to read the string from EEPROM
    char v[10];
    
    // Write the string to EEPROM
    eeprom_update_block(m, &mohammad, 10);
    
    // Initialize the LCD display
    lcd_init(LCD_DISP_ON_CURSOR_BLINK);

    while (1) {
        // Read the string from EEPROM
        eeprom_read_block((void*)v, (const void*)mohammad, 10);
        
        // Clear the LCD screen before writing the new data
        lcd_clrscr();
        
        // Display the string read from EEPROM
        lcd_puts(v);
        
        // Wait for 1 second before updating again
        _delay_ms(1000);
    }
}
