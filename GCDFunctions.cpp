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

int consecutiveIntegerCheckingGCD(int a, int b)
{   
    // b will always be the min value because the inputs have been 
    // compared before feeding them to the algorithms. 
    int t = b;
    int gcd = 1;

    // Check every integer from one to b
    for (int i = 1; i <= t; i++)
    {
        // If that integer is a divisor for both a and b
        if (a % i == 0 && b % i == 0)
        {
            // Save that value
            gcd = i;
        }
    }
    // Return the calculated gcd. 
    return gcd;
};

void middleSchoolMethodGCD(int a, int b)
{
cout << "Middle-school Method: " << a << ", " << b <<endl;
};