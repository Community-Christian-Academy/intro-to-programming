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
    printf("What's up?\n");
    
    int x = 41;
    printf("the number is:  %d\n", x);
    printf("half that is %d\n", half(x));
   
/////////// 
    
    int y = timesTwo( half(x) );
    printf("twice half is %d\n", y);

///////////
    
    int fibIndex = 15;
    printf("fib%d is %d\n", fibIndex, recursiveFibonacci(fibIndex));
    printf("fib%d is %d\n",
           fibIndex, iterativeFibonacci(fibIndex));
    
///////////
    
    int numberToSum = 25;
    int gaussianSum = gaussianSumFrom(numberToSum);
    int recursiveSum = recursiveSumFrom(numberToSum);
    int iterativeSum = iterativeSumFrom(numberToSum);
    
    printf("Sum of First %d numbers is exactly %d\n",
           numberToSum, gaussianSum);
    
    printf("Sum of First %d numbers is also exactly %d\n",
           numberToSum, recursiveSum);
    
    printf("Sum of First %d numbers is also exactly %d\n",
           numberToSum, iterativeSum);
   
///////////
 
    return 0;
}
