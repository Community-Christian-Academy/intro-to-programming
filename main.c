//
//  main.c
//  Basics
//
//  Created by Jay Campbell on 8/14/14.
//  Copyright (c) 2014 Jay Campbell. All rights reserved.
//

#include <stdio.h>
#include "IntegerFun.h"
#include "SumIntegers.h"

int main() {
    printf("Hello y'all\n");
    
    int x = 141;
    printf("the number is:  %d\n", x);
    printf("half that is %d\n", half(x));
   
/////////// 
    
    int y = timesTwo( half(x) );
    printf("twice half is %d\n", y);

///////////
    
    int fibIndex = 10;
    printf("fib%d is %d\n", fibIndex, recursiveFibonacci(fibIndex));
    printf("fib%d is %d\n",
           fibIndex, iterativeFibonacci(fibIndex));
    printf("hello!");
///////////
    
    printf("beginning the debug stuff!\n");
    int numberToSum = 1000;
    printf("hey!\n");
    long int gaussianSum = gaussianSumFrom(numberToSum);

    printf("woah!\n");
    int recursiveSum = recursiveSumFrom(numberToSum);

    printf("hello!\n");
    long int iterativeSum = iterativeSumFrom(numberToSum);
    
    printf("Sum of First %d numbers is exactly %lu\n",
           numberToSum, gaussianSum);
    
    printf("Sum of First %d numbers is also exactly %d\n",
           numberToSum, recursiveSum);
    
    printf("Sum of First %d numbers is also exactly %lu\n",
           numberToSum, iterativeSum);
   
///////////
 
    return 0;
}
