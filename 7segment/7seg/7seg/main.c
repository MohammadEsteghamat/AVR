#include <avr/io.h>
#include <util/delay.h>

char B[7] = {0, 0, 0, 0, 1, 1, 1};

void update_segment(uint8_t bit_value) {
	if (bit_value == 0) {
		PORTC &= ~(1 << 0); // Clear bit 0 (cbi equivalent)
		} else {
		PORTC |= (1 << 0);  // Set bit 0 (sbi equivalent)
	}
	
	// Create clock pulse on PORTC1 (used for strobing/latching)
	PORTC |= (1 << 1);  // Set bit 1
	PORTC &= ~(1 << 1); // Clear bit 1
}

int main(void) {
	// Configure PC0 and PC1 as output
	DDRC |= (1 << 0) | (1 << 1);
	
	// Clear PORTC to ensure initial state
	PORTC = 0x00;

	// Update 7-segment display based on array B
	for (int i = 0; i < 7; i++) {
		update_segment(B[i]);
		_delay_ms(10);
	}

	// Keep the final state
	PORTC |= (1 << 1); // Ensure last clock pulse is high

	while (1) {
		// Infinite loop to keep the program running
	}

	return 0;
}
