//Fibonacci.cpp
#include "Fibonacci.hpp"

int fibonacciRecursif(int x){
	if (x<=1) 
	   return x;
	else 
	   return fibonacciRecursif(x-1) + fibonacciRecursif(x-2);
}

int fibonacciIteratif(int x){
    int a = 0;
    int b = 1,t;
    int i;
 
    for(i = 2; i <= x; i++) {
       t = a + b;
       a = b;
       b = t;
    }
  return b;	
}
