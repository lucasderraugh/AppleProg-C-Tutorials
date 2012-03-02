#include <stdio.h>

void Square(int num, int *myPointer);

int main (int argc, const char * argv[]) {
    int originalNum = 5;
	Square(originalNum, &originalNum);
	printf("The squared value is %d", originalNum);
    return 0;
}

void Square(int num, int *myPointer) {
	*myPointer = num * num;
}