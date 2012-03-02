#include <stdio.h>
#include "structTut.h"

int main (int argc, const char * argv[]) {
	struct HockeyPlayer bob;
	
	bob.shirtNumber = 20;
	bob.rank = 5;
	
	printf("Bob's number is %d and he is ranked %dth",
		   bob.shirtNumber, bob.rank);
	
    return 0;
}
