/****************************************************
 *    Title:      SLColson21 CSC2400:Program 1      *
 *    Author:     Sharon Colson                     *
 *    Date:       August 2023                       *
 *    Purpose:    Calculate Greatest Common Divisor *
 *                Using Various Algorithms          *
 ****************************************************/

#include <iomanip>
#include "GCD.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Convert user arguements to integer
    int m = atoi(argv[1]);
    int n = atoi(argv[2]);
    // Declare additional variables
    int x(1), y(0);

    // GCD naturally reorders the user's input
    // however, reordering before feeding to the 
    // gcd functions causes the x and y variables 
    // to be ordered in a more logical fashion. 
    if (n > m)
    {
        int temp = m;
        m = n;
        n = temp;
    }

    // Restate the user's input
    cout << endl << endl;
    cout << "Input received: " << m << ", " << n << endl;
    cout << endl;
    cout << "=============================" << endl;

    // Part 1: extended Euclid's Algorithm
    int eegcd = extended_euclidgcd(m, n, x, y);
    cout << "Extended Euclid Algorithm:" << endl;
    cout << "Finds the greatest common denominators for 2 integers," << endl; 
    cout << "a and b, and provides x and y such that ax + by = gcd(a,b). " << endl << endl;
    cout << "gcd(" << m << ", " << n << ") = " << eegcd << endl;
    cout << "a = " << m << ", b = " << n << endl;
    cout << "x = " << x << ", y = " << y << endl << endl;
    cout <<  m << "(" << x << ")" << " + " << n <<"(" << y <<") = " << eegcd << endl;
    cout << "=============================" << endl << endl;
    
    
    consecutiveIntegerCheckingGCD(m, n);
    middleSchoolMethodGCD(m, n);
    return 0;
}