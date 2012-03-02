#include <stdio.h>

int main (int argc, const char * argv[]) {
    int *myPointer, myVar;
	myVar = 5;
	myPointer = &myVar;
	*myPointer = 10;
	printf("%d", myVar);
    return 0;
}
