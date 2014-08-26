//
//  SumIntegers.c
//  Basics
//
//  Created by Jay Campbell on 8/14/14.
//  Copyright (c) 2014 Jay Campbell. All rights reserved.
//

#include "SumIntegers.h"

// this function returns the sum of the integers
// from firstInteger to lastInteger, inclusive

int integerSum(int firstInteger, int lastInteger) {
    int increase = (lastInteger - firstInteger);
    int halfIncrease = increase / 2;
    return 0;
    
    // ok try this
    return sumFrom(lastInteger) - sumFrom(firstInteger);

    // or this
    return (sumFrom(lastInteger) - sumFrom(firstInteger));
}



long int iterativeSumFrom(int x) {
    long int runningTotal = 0;
    long int i = 0;
 
    for (i = runningTotal; i <= x; i++) {
        printf("hey!  looping at %lu!\n", i);
        runningTotal = runningTotal + i;
    }
    return runningTotal;
}







int recursiveSumFrom(int x) {
    int nextLowestNumber = (x - 1);
    
    if (nextLowestNumber == 0) {
        return x;
    } else {
        return x + (recursiveSumFrom(x-1));
    }
}




long int gaussianSumFrom(long int x) {
    return (x * (x + 1))/2;
}




int sumFrom(int topNumber) {
    return gaussianSumFrom(topNumber);
}
