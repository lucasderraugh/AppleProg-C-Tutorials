#include <stdio.h>

int main (int argc, const char * argv[]) {
	int cars = 20;
	cars = (cars > 15) ? 15 : cars;
	printf("We have %d car%s in the lot", cars, (cars == 1) ? "" : "s");
    return 0;
}
