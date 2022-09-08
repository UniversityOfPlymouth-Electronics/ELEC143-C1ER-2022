#include "mbed.h"
#include "uop_msb.h"
#include <cstdint>
#include <string.h>
using namespace uop_msb;

//Decorates a string with a top and bottom banner
void decorate(const char str[], char c)
{
    //Print the top banner 
    for (uint16_t n=0; n<strlen(str); n++) {
        printf("%c", c);
    }
    printf("\n\r");

    //Print the string
    printf("%s\n\r", str);

    //Print the bottom banner (repeat of the above - this needs addressing)
    for (uint16_t n=0; n<strlen(str); n++) {
        printf("%c", c);
    }
    printf("\n\r");
}

Buttons btn;

int main()
{
    char bannerChar = '*';

    while (true)
    {
        if (btn.Button1 == 1) {
            bannerChar = '*';
        } else if (btn.Button2 == 1) {
            bannerChar = '%';
        }
        decorate("Hello World", bannerChar);
        wait_us(1000000);
    }
}

// TASKS
//
// a. Modify the code such that if button 3 is pressed, the banner character is a # symbol
// b. Inside the function decorate(), the code to draw the top and bottom banners are identical
//    Remove this unnecessary repetition by writing another function banner() to contain the repeated code
//    Make sure you call banner() from within decorate()
// c. Create another cpp file, name it utils.cpp. 
//    Move the functions banner() and decorate() to this file
//    Make the necessary changes so that you can still call decorate() from main.
// d. Make the necessary changes to prevent banner() from being called directly from main

