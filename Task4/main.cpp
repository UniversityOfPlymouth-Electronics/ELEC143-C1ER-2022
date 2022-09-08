#include "mbed.h"
#include "uop_msb.h"
using namespace uop_msb;

// You are to the following PortIn oject to read both the switch inputs
BusIn sw(BTN1_PIN, BTN2_PIN);

// You are to use this object to control the LEDs
BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);

int main()
{
    while (true)
    {
    // ***** MODIFY THE CODE BELOW HERE *****
    // For full marks, debounce the switches with suitable delays

    // 1. Wait for EITHER or BOTH switches to be pressed and released

    // 2. Wait until BOTH switches are released

    while (true) {

        // 3. Inside this loop, if either switch is pressed and released, toggle the RED LED

    }


    // ***** MODIFY THE CODE ABOVE HERE *****
    }
}


