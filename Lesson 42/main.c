#include <stdio.h>
#include "enum_types.h"

int main (int argc, const char * argv[]) {
	
	enum Placement p1 = First;
	enum Placement p2 = Second;
	
	if (p1 < p2) {
		printf("Person 1 is better than person 2.\n");
	}
	
	if (Second < Third) {
		printf("Second is better than third.");
	}
	
    return 0;
}
