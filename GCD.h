/****************************************************
 *    Title:      SLColson21 CSC2400:Program 1      *
 *    Author:     Sharon Colson                     *
 *    Date:       August 2023                       *
 *    Purpose:    Calculate Greatest Common Divisor *
 *                Using Various Algorithms          *
 ****************************************************/
#ifndef GCD_H
#define GCD_H

#include <iostream>
using namespace std;
/*------------------------------------------------------------------------
      Calculates the greatest common denominator of two integers as well 
      as the coefficients of Bézout's identity, which are integers x and y 
      such that:
                  ax+by=gcd(a,b).

      Precondition:  two integers which are the input from the user and 
      two integers which are passed by reference. 
      Postcondition: Three integers, the gcd of the user's input and the 
      calculated coefficients x and y. 
     -----------------------------------------------------------------------*/
int extended_euclidgcd(int a, int b,int &x, int &y);

/*------------------------------------------------------------------------
      Calculates the greatest common denominator of two integers by checking
      all integer values from one to the minimum of the outputs. 

      Precondition:  two integers which are the input from the user. 
      Postcondition: One integer, the greatest common denominator for the two 
      input values. 
     -----------------------------------------------------------------------*/
int consecutiveIntegerCheckingGCD(int a, int b);
void middleSchoolMethodGCD(int a, int b);

#endif