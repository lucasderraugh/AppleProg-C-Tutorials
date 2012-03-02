#include <stdio.h>
#include <string.h>

#define myMax 50

int main (int argc, const char * argv[]) {
	char myArray[myMax];
	int length = 0;
	printf("Please enter your full name: ");
	fgets(myArray, myMax, stdin);
	length = strlen(myArray);
	myArray[ length - 1 ] = 0;
	printf("Welcome %s.", myArray);
	return 0;
}