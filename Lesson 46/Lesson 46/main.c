//
//  main.c
//  Lesson 46
//
//  Created by Lucas Derraugh on 6/1/13.
//  Copyright (c) 2013 Lucas Derraugh. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>

void printIntList(int count, ...) {
    // ... = 8, 2, 1, 5
    va_list list;
    va_start(list, count);
    for (int i = 1; i <= count; i++) {
        int num = va_arg(list, int);
        printf("%d: %d\n", i, num);
    }
    va_end(list);
}

void printUntilZero(int first, ...) {
    va_list list;
    va_start(list, first);
    int num = first;
    while (num != 0) {
        printf("%d\n", num);
        num = va_arg(list, int);
    }
    va_end(list);
}

int main(int argc, const char * argv[])
{
    printIntList(4, 6, 2, 1, 7);
    printUntilZero(9, 2, 1, 5, 2, 0);
    return 0;
}

