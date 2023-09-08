# /****************************************************
#  *    Title:      SLColson21 CSC2400:Program 1      *
#  *    Author:     Sharon Colson                     *
#  *    Date:       August 2023                       *
#  *    Purpose:    Calculate Greatest Common Divisor * 
#  *                Using Various Algorithms          *
#  ****************************************************/

all: gcd

gcd: GCDFunctions.cpp GCDDriver.cpp GCD.h
	g++ -Wall -o gcd GCDFunctions.cpp GCDDriver.cpp

clean:
	rm -f gcd