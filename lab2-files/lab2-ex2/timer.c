#include <avr/io.h>
#include "timer.h"
#define TIMER1_PRESCALE 1024

/* Initialise timer.  */
void timer_init (void)
{
    /* TODO */
    TCCR1A=0x00;
    TCCR1B=0x05;
    TCCR1C=0x00;

}

/* Wait for the specified length of time.  */
void timer_delay_ms (uint16_t milliseconds)
{

    /* TODO: Calculate the timer/counter value needed
       for the given number of milliseconds. */
    uint16_t delay =  milliseconds * (F_CPU / TIMER1_PRESCALE / 1000);
    TCNT1 = 0;

    while (TCNT1 < delay) {
        continue;
    }
    /* TODO: Wait for the timer/couter to reach the
       value calculated above.  */

}
