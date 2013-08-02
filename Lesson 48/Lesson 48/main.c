//
//  main.c
//  Lesson 48 - basicPrint
//
//  Created by Lucas Derraugh on 6/14/13.
//  Copyright (c) 2013 Lucas Derraugh. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>

void printInt(int n) {
    if (n >= 10) {
        int lastDigit = n % 10;
        printInt(n/10);
        putchar('0'+lastDigit);
    } else {
        putchar('0'+n);
    }
}

void basicPrint(const char *str, ...) {
    va_list args;
    va_start(args, str);
    
    while (*str != '\0') {
        if (*str == '%') {
            str++;
            if (*str == 'd' || *str == 'i') {
                int integer = va_arg(args, int);
                printInt(integer);
            }
        } else {
            putchar(*str);
        }
        str++;
    }
    
    va_end(args);
}

int main(int argc, const char * argv[])
{
    basicPrint("I love this series\n, don't you! %d\t%i", 20, 13);
    return 0;
}














