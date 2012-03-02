#include <stdio.h>

int main (int argc, const char * argv[]) {
	int num = 5;
	do {
		printf("Went through loop\n");
		num++;
	} while (num < 7);
    return 0;
}