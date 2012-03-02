#include <stdio.h>

int main (int argc, const char * argv[]) {
    int i = 1;
	while (i <= 5) {
		printf("This is loop %d\n", i);
		i++;
	}
	
	int j;
	for (j = 1; j <= 5; j++)
		printf("This is loop %d\n", j);
    return 0;
}