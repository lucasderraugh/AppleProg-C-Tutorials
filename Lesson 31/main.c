#include <stdio.h>
#include "ArrayTut.h"

int main (int argc, const char * argv[]) {
	char mag[kNumMagazines][kMaxName];
	fgets(mag[0], kMaxName, stdin);
	printf("%s", mag[0]);
	
    return 0;
}