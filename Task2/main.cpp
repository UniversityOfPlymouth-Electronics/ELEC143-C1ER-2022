#include "mbed.h"
#include "uop_msb.h"
using namespace uop_msb;


// This clears out the serial interface - reccomended before reading the keyboard
void flushInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int main()
{

    // ***** MODIFY THE CODE BELOW HERE *****

    // 1. Using a while-loop, count from 0 to 99 in steps of 3 - print the results to the serial terminal


    // 2. The code below asks the user to enter a number between 0 and 99.
    //    Add code to read the keyboard 
    //    Add a a do-while-loop to repeat until the correct value is added
    //    Print the entered value to the terminal

    //Prompt user
    printf("\nEnter a value (0..99)\n");
    //Clear out the serial interface (in case any old characters are still there)
    flushInputBuffer();
        
    // ***** MODIFY THE CODE ABOVE HERE *****

    while (true) {

    }
}

