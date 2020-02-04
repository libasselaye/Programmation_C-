//Fibonacci_test.cpp
#include "Fibonacci.hpp"
#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(GroupFibonacci) { };

TEST(GroupFibonacci, test_fibonacciRecursif) {  // premier test
       int result = fibonacciRecursif(5);
       CHECK_EQUAL(5, result);   
}


TEST(GroupFibonacci, test_fibonacciIteratif) {  // deuxième test
    int result = fibonacciIteratif(11);
    CHECK_EQUAL(89, result);
}

