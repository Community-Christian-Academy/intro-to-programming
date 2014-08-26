//
//  SumIntegers.h
//  Basics
//
//  Created by Jay Campbell on 8/14/14.
//  Copyright (c) 2014 Jay Campbell. All rights reserved.
//

// this function returns the sum of the integers
// from firstInteger to lastInteger, inclusive
int integerSum(int firstInteger, int lastInteger);

// this function returns the sum of the integers from 0 through x
int sumFrom(int x);

// these three functions do the math backing the for sumFrom(int) function above,
// each calculates sumFrom in is own way, as named
long int gaussianSumFrom(long int x);
long int iterativeSumFrom(int x);
int recursiveSumFrom(int x);
