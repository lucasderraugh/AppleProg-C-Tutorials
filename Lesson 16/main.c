#include <stdio.h>

int main (int argc, const char * argv[]) {
    int myList[50];
	int i = 0;
	while (i < 50) {
		myList[i] = 7;
		i++;
	}
	printf("%d", myList[34]);
	
    return 0;
}