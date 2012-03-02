#include <stdio.h>

void PrintMessage();

int main (int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
	PrintMessage();
	PrintMessage();
	PrintMessage();
    return 0;
}

void PrintMessage( void ) {
	printf("This is another function\n");
}