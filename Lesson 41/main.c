#include <stdio.h>

/*
 In Xcode 4, arguments can be added by clicking on the Lesson 41 part of the 'Lesson 41 > My Mac 64-bit' button in the toolbar, then by selecting 'Edit Scheme...' popup option. You will then get a new sheet dropdown, select the 'Run' option on the left side and then select the 'Arguments' tab. There you can see the current arguments and add new ones.
 */

int main (int argc, const char * argv[]) {
	
	if (argc < 3) {
		printf("You need 2 arguments\n");
		return -1;
	}
	printf("%s\n", argv[0]);
	printf("%s is the %s Jedi ever!\n", argv[1], argv[2]);
	
    return 0;
}
