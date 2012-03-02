#include <stdio.h>
#include <string.h>

#define kMaxLength 30

void ReplaceReturn(char *myString);

int main (int argc, const char * argv[]) {
	char a[kMaxLength];
	do {
		printf("Enter the exit command: ");
		fgets(a, kMaxLength, stdin);
		ReplaceReturn(a);
	} while (strcmp(a, "exit") != 0);
    return 0;
}

/***********************************> ReplaceReturn <*/
void ReplaceReturn(char *myString) {
	int length = strlen(myString);
	
	myString[ length - 1 ] = '\0';
}