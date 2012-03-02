#include <stdio.h>

int main (int argc, const char * argv[]) {
	
	if (argc < 3) {
		printf("You need 2 arguments\n");
		return -1;
	}
	printf("%s\n", argv[0]);
	printf("%s is the %s Jedi ever!\n", argv[1], argv[2]);
	
    return 0;
}
