#include <stdio.h>

int main (int argc, const char * argv[]) {
    char myArray[10];
    printf("Enter your name: ");
	scanf("%s", myArray);
	printf("Welcome, %s!\n", myArray);
    return 0;
}
