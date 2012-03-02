#include <stdio.h>

void MakeStars(int stars);

int main (int argc, const char * argv[]) {
    int myInt = 50;
	MakeStars(myInt);
    return 0;
}

void MakeStars(int stars) {
	int i;
	for (i = 1; i <= stars; i++) {
		printf("*");
	}
}