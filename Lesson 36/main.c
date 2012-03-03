#include <stdio.h>
#include <stdlib.h>

/*
 IMPORTANT NOTE: Xcode 4 works differently with your projects than Xcode 3 (the version we used for the tutorial). The executable file is now located in a seperate location by default so you may have to layout the file path by using an absolute path. My example starts at the top level of the HD and goes into sub folders to where my 'Data' file is located. Feel free to test this with a file in other locations.
 You can also change in Xcode Preferences to have the executable be relative to your project under Prefs>Locations and change Derived Data to relative. You can play around with the file path relative to the executable after that.
 */

//This is an example of a path you could use, it should to be an absolute path starting at the root (hard drive) level.
//You MUST change this path to something that exists to the 'Data' file because this path isn't real, it's just an example!
#define kFileLocation "/Users/your_username/other_paths_here/Lesson 36/Data"

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
