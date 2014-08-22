//
//  IntegerFun.c
//  Basics
//
//  Created by Jay Campbell on 8/18/14.
//  Copyright (c) 2014 Jay Campbell. All rights reserved.
//

#include "IntegerFun.h"

int recursiveFibonacci(int anInteger) {
    // recursive implementation
    if (anInteger == 1) {
        return 0;
    }
    
    if (anInteger == 2) {
        return 1;
    }
    
    // Look, right here!  It's recursion!
    return recursiveFibonacci(anInteger-1) + recursiveFibonacci(anInteger - 2);
}


int iterativeFibonacci(int x) {
    int y = 0;
    int previousNumber = 1;
    int otherPreviousNumber = 0;
    
    for (int i = 3; i <= x; i++) {
        y = otherPreviousNumber + previousNumber;
        otherPreviousNumber = previousNumber;
        previousNumber = y;
    }
    return y;
    
}


int half(int a) {
    return a/2;
}



int timesTwo(int b) {
    return b+b;
}

