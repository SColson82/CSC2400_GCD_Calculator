/****************************************************
 *    Title:      SLColson21 CSC2400:Program 1      *
 *    Author:     Sharon Colson                     *
 *    Date:       August 2023                       *
 *    Purpose:    Calculate Greatest Common Divisor *
 *                Using Various Algorithms          *
 ****************************************************/
#include "GCD.h"

int extendedEuclidGCD(int a, int b, int &x, int &y)
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
    int gcd = extendedEuclidGCD(b, a%b, xi, yi);
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

int middleSchoolMethodGCD(int a, int b)
{
    // Prime Factors of m
    vector<int> factors_a = factor(a);

    // Prime Factors of n
    vector<int> factors_b = factor(b);

    // Common Elements of the 2 Prime Factor vectors
    vector<int> factors_common = commonElements(factors_a, factors_b);

    // Greatest Common Divisor (multiply all of the elements of the Common Elements vector.)
    int gcd = GCD(factors_common);

    return gcd;
};


vector<int> factor(int num)
{   
    // Every integer can be divided by itself and one. 
    // We set t = 2 to begin the check for prime factors. 
    int t = 2;

    // Create a vector to hold any prime factors. 
    vector<int> factors;

    while (num > 1)
    {
        // Check for prime. 
        if (num % t == 0)
        {
            // Add the factor to the vector.
            factors.push_back(t);
            // Reduce the input. 
            num = num/t;
        }
        else
        {
            // Move to the next integer. 
            t += 1;
        }
    }
    // Return the assembled vector.
    return factors;
};

vector<int> commonElements(const vector<int>vector1, const vector<int>vector2)
{   
    // Create vector to the common elements. 
    vector<int> C;
    // Set the index for the first vector.
    int i = 0;
    // Set the index for the second vector. 
    int j = 0;

    // While we haven't gotten to the end of one of the vectors...
    while (i < vector1.size() && j < vector2.size())
    {
        // If the values in each vector are the same:
        if (vector1[i] == vector2[j])
        {
            // Add them to the common elements vector,
            C.push_back(vector1[i]);
            // Move to the next value in vector 1,
            i++;
            // And move to the next value in vector 2.
            j++;
        }
        // If the value in vector 1 is less than that of vector 2. 
        else if (vector1[i] < vector2[j])
        {
            // Move to the next value in vector 1.
            i++;
        }
        else
        {
            // Otherwise move to the next value in vector 2.
            j++;
        }
    }
    // Return the vector of common elements. 
    return C;
};

int GCD(const vector<int> &commonFactors)
{   
    // Default the gcd to 1.
    int gcd = 1;

    // Loop over every element in the commonFactors vector.
    for (int element : commonFactors)
    {
        // Find the product of all. 
        gcd *= element;
    }
    // Return the calculated product. 
    return gcd;
};