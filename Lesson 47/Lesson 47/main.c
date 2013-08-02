//
//  main.c
//  Lesson 47 - Recursion
//
//  Created by Lucas Derraugh on 6/7/13.
//  Copyright (c) 2013 Lucas Derraugh. All rights reserved.
//

#include <stdio.h>

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n-1);
}

void printInt(int n) {
    if (n >= 10) {
        int lastDigit = n % 10;
        printInt(n/10);
        putchar('0'+lastDigit);
    } else {
        putchar('0'+n);
    }
}

int main(int argc, const char * argv[])
{
    printf("%d\n", factorial(5));
    printInt(123);
    return 0;
}








