#include <stdio.h>
#include "typedef.h"

int main (int argc, const char * argv[]) {
 	People sam;
	
	sam.age = 16;
	sam.height = 5.0;
	sam.weight = 400;
	
	printf("Sam weighs %f pounds\n", sam.weight);
	
	CoolInt num = 5;
	printf("%d", num);
	
    return 0;
}
