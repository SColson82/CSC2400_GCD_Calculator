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
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    if (num2 > num1)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    return 0;
}