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
     // Convert user arguments to integer
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
     // Once reodered, check that n is not equal
     while (n == 0)
     {
          cout << "Undefined: no GCD exists while the divisor equals 0. \n"
               << "Please choose again. " << endl;
          cout << "m = " << m 
               << endl;
          cout << "n = ";
          cin >> n;
          if (n > m)
          {
               int temp = m;
               m = n;
               n = temp;
          }
     }

     // Restate the user's input
     cout << endl << endl;
     cout << "Input received: " << m << ", " << n 
          << endl << endl;
     cout << "=============================" 
          << endl << endl;

     // Part 1: extended Euclid's Algorithm
     int eegcd = extendedEuclidGCD(m, n, x, y);
     cout << "Extended Euclid Algorithm:" 
          << endl << endl;
     cout << "Finds the greatest common denominators for 2 integers,"
          << endl;
     cout << "a and b, and provides x and y such that ax + by = gcd(a,b). "
          << endl << endl;
     cout << "gcd(" << m << ", " << n << ") = " << eegcd 
          << endl;
     cout << "a = " << m << ", b = " << n 
          << endl;
     cout << "x = " << x << ", y = " << y 
          << endl << endl;
     cout << "ax + by = gcd(a,b)" 
          << endl;
     cout << m << "(" << x << ")"
          << " + " << n << "(" << y << ") = " << eegcd 
          << endl;
     cout << "=============================" 
          << endl << endl;

     // Part 2: Consecutive Integer Checking
     int cicgcd = consecutiveIntegerCheckingGCD(m, n);
     cout << "Consecutive Integer Checking Algorithm:" 
          << endl << endl;
     cout << "Finds the greatest common denominators for 2 integers, a and b,"
          << endl;
     cout << "by checking every integer from one to the smaller input. "
          << endl << endl;
     cout << "gcd(" << m << ", " << n << ") = " << cicgcd 
          << endl;
     cout << "=============================" 
          << endl << endl;

     // Part 3: Middle School Method
     int msmgcd = middleSchoolMethodGCD(m, n);
     cout << "Middle School Method Algorithm:" 
          << endl << endl;
     cout << "Finds the greatest common denominators for 2 integers, a and b," 
          << endl;
     cout << "by finding the prime factors of each input and then combining the" 
          << endl;
     cout << "common factors via multiplication. " 
          << endl << endl;
     cout << "gcd(" << m << ", " << n << ") = " << msmgcd 
          << endl;
     cout << "=============================" 
          << endl << endl;
     return 0;
}