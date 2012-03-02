#include <stdio.h>
#include <string.h>

#define myMax 11

int main (int argc, const char * argv[]) {
	char myArray[myMax];
	printf("Please enter your first name: ");
	fgets(myArray, myMax, stdin);
	printf("Welcome %s\n", myArray);
    
    for (int i = 0; i < myMax; i++)
        printf("%c", myArray[i]);
    return 0;
}