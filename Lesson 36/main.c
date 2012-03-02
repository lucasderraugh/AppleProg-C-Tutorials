#include <stdio.h>
#include <stdlib.h>

#define kFileLocation "../../Data"

int main (int argc, const char * argv[]) {
	FILE *dataFile;
	char c;
	
	if ((dataFile = fopen(kFileLocation, "r")) == NULL) {
		printf("FAIL");
		exit(1);
	}
	
	while ((c = fgetc(dataFile)) != EOF) {
		printf("%c", c);
	}
	
	fclose(dataFile);
	
    return 0;
}
