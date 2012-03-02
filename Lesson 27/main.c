#include <stdio.h>

int main (int argc, const char * argv[]) {
	char key = 'q';
	switch (key) {
		case 'q':
			printf("Key is q\n");
		case 'n':
			printf("Key is n\n");
			break;
		default:
			printf("Key is an invalid command");
			break;
	}
    return 0;
}
