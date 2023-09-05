/****************************************************
 *    Title:      SLColson21 CSC2400:Program 1      *
 *    Author:     Sharon Colson                     *
 *    Date:       August 2023                       *
 *    Purpose:    Calculate Greatest Common Divisor *
 *                Using Various Algorithms          *
 ****************************************************/
#include "GCD.h"

int extended_euclidgcd(int a, int b, int &x, int &y)
{
    // exit case, the input is in its reduced form. 
    if (b == 0){
        x = 1;
        y = 0;
        return a;
    }

    // Recursively calls the algorithm until the exit 
    // condition has been found. 
    int xi(0), yi(0);
    int gcd = extended_euclidgcd(b, a%b, xi, yi);
    x = yi;
    y = xi - (a/b) * yi;

    return gcd;
};

void consecutiveIntegerCheckingGCD(int a, int b)
{
    cout << "Consecutive Integer Method: " << a << ", " << b <<endl;
};

void middleSchoolMethodGCD(int a, int b)
{
cout << "Middle-school Method: " << a << ", " << b <<endl;
};