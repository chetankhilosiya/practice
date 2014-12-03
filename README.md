practice
========

practice repository for codes.
There are code for same problems in C++ and python in there respective directories.

If you wish you can add any new language within its directory like java or C.

Running codes :
C++ - The codes in c++ can be compile using g++.
example : g++ store-credit.cpp
	
For some programs the GMP (GNU Multi Precision library) is used to do calculations in large numbers.
Check if gmp.h header file is included in code. Compile these codes as below
example : g++ minimum-scalar-product.cpp -lgmp -lgmpxx  this requires GMP library to be installed on your system.
GMP library is open source and you can download it from here https://gmplib.org/

Running code with codejam input as : ./a.out < A-small-practice.in > A-small-practice.out
	
Python - The codes in python are python version 3 codes.
example : python3 store-credit.py

Running code with codejam input as : python3 store-credit.py < A-small-practice.in > A-small-practice.out
