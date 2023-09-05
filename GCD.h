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
#include <vector>
using namespace std;
/*------------------------------------------------------------------------
      Calculates the greatest common denominator of two integers as well 
      as the coefficients of Bézout's identity, which are integers x and y 
      such that:
                  ax+by=gcd(a,b).

      Precondition:  Two integers which are the input from the user and 
      two integers which are passed by reference. 
      Postcondition: Three integers, the gcd of the user's input and the 
      calculated coefficients x and y. 
     -----------------------------------------------------------------------*/
int extended_euclidgcd(int a, int b,int &x, int &y);

/*------------------------------------------------------------------------
      Calculates the greatest common denominator of two integers by checking
      all integer values from one to the minimum of the outputs. 

      Precondition:  Two integers which are the input from the user. 
      Postcondition: One integer, the greatest common denominator for the two 
      input values. 
     -----------------------------------------------------------------------*/
int consecutiveIntegerCheckingGCD(int a, int b);

/*------------------------------------------------------------------------
      Calculates the greatest common denominator of two integers by creating 
      a list for each input containing that input's prime factors then 
      comparing the two lists for common elements. This function utilizes the 
      factor, commonElements, and GCD functions.

      Precondition: Two integers which are the input from the user. 
      Postcondition: One integer, the greatest common denominator for the two 
      input values. 
     -----------------------------------------------------------------------*/
int middleSchoolMethodGCD(int a, int b);

/*------------------------------------------------------------------------
      Finds the prime factors for an integer.

      Precondition:  One integer is given as an argument.  
      Postcondition: A vector containing the prime factors for the input.  
     -----------------------------------------------------------------------*/
vector<int> factor(int num);

/*------------------------------------------------------------------------
      Finds the common elements in two ordered lists. 

      Precondition:  Two ordered vectors.   
      Postcondition: A vector containing the common elements from both input 
      vectors.  
     -----------------------------------------------------------------------*/
vector<int> commonElements(const vector<int>vector1, const vector<int>vector2);

/*------------------------------------------------------------------------
      Calculates the product of a vector of integers. 

      Precondition:  One vector.   
      Postcondition: An integer product of a vector of integers is returned.   
     -----------------------------------------------------------------------*/
int GCD(const vector<int> &commonFactors);

#endif