#include <stdio.h>

int Square(int num1);

int main (int argc, const char * argv[]) {
	printf("4 squared is equal to %d", Square(4));
    return 0;
}

int Square(int num1) {
	int sum;
	sum = num1 * num1;
	return sum;
}