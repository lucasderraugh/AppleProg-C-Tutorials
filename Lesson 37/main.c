#include <stdio.h>
#include "union.h"

int main (int argc, const char * argv[]) {
	struct People person;
	
	person.age = 16;
	person.height = 120;
	person.n.myInt = 5;
	
	printf("%d\n", person.age);
	printf("%d", person.n.myInt);
	
    return 0;
}
