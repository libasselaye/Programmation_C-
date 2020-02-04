//Fibonacci.cpp
#include "Fibonacci.hpp"

float fibonacciRecursif(float x){
	if (x<=1) 
	   return x;
	else 
	   return fibonacciRecursif(x-1) + fibonacciRecursif(x-2);
}

float fibonacciIteratif(float x){
	float a = 0;
    float b = 1;
    int i, t;
 
    for(i = 2; i <= x; i++) {
       t = a + b;
       a = b;
       b = t;
    }
  return b;	
}
