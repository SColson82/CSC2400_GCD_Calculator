# Calculating Greatest Common Divisor

Using C++, this program explores various algorithms for calculating the Greatest Common Divisor of two integers.

## Part I:
The extended Euclid’s algorithm determines not only the greatest common divisor, d, of two integers m and n, but also integers x and y, such that: 


> ```mx + ny = d.```
 

## Part II: Consecutive Integer Checking Algorithm
The Consecutive Integer Checking Algorithm calculates the greatest common divisor by dividing both inputs from the user by every integer between one and the minimum of the two inputs. 

## Part III: Middle-school Implementation
The Middle School Method algorithm calculates the greatest common divisor by utilizing the method most students learned in middle school. Each input is factored and prime factors are placed in separate vectors for each input. The two resulting vectors are compared, creating a third vector of the common elements of each of the input vectors. The product of the elements of the third vector is then calculated, resulting in the greatest common divisor for both input integers. 

## How to utilize this program.

- From CLI

> ```g++ -o gcd *.cpp```

- Input the executable name and two integers.

> ```./gcd.exe 254 32```

* Output - the result obtained using the three algorithms listed above.
* Displays:
  - Input received from user
  - Explaination of how each algorithm should calculate it's output.
  - algorithm(m,n)=v where m and n are the inputs and v is the calculated gcd
  - Bezout's Identity for the first algorithm.
* Additionally, this program accounts for:
  - Undefined case of (0,0): requires user supply new input.
  - Negative inputs.
  - Inputs received "out of order" such as (0,13).

 <hr>

Contact:

Sharon Colson:
* https://www.linkedin.com/in/sharon-colson
* sharon.colson@gmail.com

