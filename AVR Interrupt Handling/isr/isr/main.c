#include <avr/io.h>
#include <avr/interrupt.h>

// Interrupt Service Routine for INT0
ISR(INT0_vect) {
	PORTA = ~PORTA;  // Toggle the state of PORTA
}

int main(void) {
	DDRA = 0xFF;    // Configure PORTA as output
	PORTA = 0x00;   // Set all pins of PORTA to low
	DDRD = 0x00;    // Configure PORTD as input
	PORTD = 0xFF;   // Enable internal pull-up resistors for PORTD

	GICR = (1<<INT0);   // Enable INT0 external interrupt
	MCUCR = (1<<ISC01); // Set INT0 to trigger on falling edge
	sei();              // Enable global interrupts

	while (1) {
		
	}
}
