#include <stdio.h>
#include "MyHeader.h"

int main (int argc, const char * argv[]) {
    // insert code here...
    printf("%d\n", kMaxLength);
    MyFunction();
    return 0;
}

void MyFunction() {
    printf("Can run because of the header");
}