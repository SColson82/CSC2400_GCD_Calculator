# Calculating Greatest Common Divisor

Using C++, this program explores various algorithms for calculating the Greatest Common Divisor of two integers.

## Part I:
The extended Euclid’s algorithm determines not only the greatest common divisor, d, of two positive integers m and n, but also integers (not necessarily positive) x and y, such that: 


> ```mx + ny = d.```
 

## Part II: Consecutive Integer Checking Algorithm
The Consecutive Integer Checking Algorithm calculates the greatest common denominator by dividing both inputs from the user by every integer between one and the minimon of the two inputs. 

## Part III: Middle-school Implementation

## How to utilize this program.

- From CLI

> ```g++ -o gcd *.cpp```

- Input the executable name and two integers.

> ```gcd.exe 254 32```

* Output - the result obtained using the three algorithms listed above.
* Displays - algorithm(m,n)=v where m and n are the inputs and v is the calculated gcd
  - Undefined - appears if no gcd exists.
