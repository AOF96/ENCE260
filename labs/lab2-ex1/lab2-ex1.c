#include <avr/io.h>
#include "system.h"
#include "led.h"


int main (void)
{
    system_init ();
    led_init ();

    TCCR1A=0x00;
    TCCR1B=0x05;
    TCCR1C=0x00;
    DDRC |= (1 << 2);
    /* TODO: Initialise timer/counter1.  */
    void timer_delay(uint16_t ticks)
    {
        TCNT1 = 0;

        while (TCNT1 < ticks) {
            continue;
        }
    }


    uint16_t resolution = 0.5 / 0.000128;
    while (1)
    {

        /* Turn LED on.  */
        led_set (LED1, 1);

        /* TODO: wait for 500 milliseconds.  */
        timer_delay(resolution);
        /* Turn LED off.  */
        led_set (LED1, 0);

        /* TODO: wait for 500 milliseconds.  */
        timer_delay(resolution);
    }

}
