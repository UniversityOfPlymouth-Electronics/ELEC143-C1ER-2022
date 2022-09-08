#include "mbed.h"
#include "uop_msb.h"
using namespace uop_msb;

// 4x4 Array
double P[4][4] = {
    {1.0, 2.0, 3.0, 4.0},
    {-3.0, -4.0, -5.0, -6.0},
    {10.0, 11.0, 12.0, 13.0},
     {4.0, 3.0, 2.0, 1.0}
};

double Q[4][4] = {
    {1.0, 1.0, 1.0, 1.0},
    {-1.0, -2.0, -1.0, -2.0},
    {10.0, 10.0, 10.0, 10.0},
    {-10.0, -5.0, -1.0, 0.0}
};


void display44Array(const double U[4][4])
{
    for (unsigned row=0; row<4; row++) {
        for (unsigned col=0; col<4; col++) {
            printf("%8.1f\t", U[row][col]);
        }
        printf("\n");
    }
    printf("\n");
}

// ***** WRITE YOUR FUNCTIONS HERE *****

// U is the input matrix
// Y is the output matrix
void transpose(const double U[4][4], double Y[4][4])
{
    //YOUR CODE HERE
}

// *****  END YOUR FUNCTIONS HERE  *****

int main()
{
    display34Array(P);
    display34Array(Q);

    // ***** MODIFY THE CODE BELOW HERE *****

    // 1. Create another 4x4 Array Y

    // 2. Write a nested loop to add matrix P to Matrix Q, such that Y[i][j]=P[i][j]+Q[i][j]
 
    // 3. Complete the function transpose (above) to transpose an array, such that Qt[i][j]=Q[j][i], where Qt is the transpose of Q. 
    //    Write another function to display the result
    //    Note that the dimensions of Qt will be 4x4
    double Qt[4][4];

    // ***** MODIFY THE CODE ABOVE HERE *****


    while (true) {
    }
}

