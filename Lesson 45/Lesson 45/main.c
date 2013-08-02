//
//  main.c
//  Lesson 45
//
//  Created by Lucas Derraugh on 5/24/13.
//  Copyright (c) 2013 Lucas Derraugh. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int num = 5;
    int num2 = 21;
    int * const pToNum = &num2;
    printf("%d\n", num);
    *pToNum = 11;
    printf("%d\n", num2);
    return 0;
}

