#include <stdio.h>

void PrintNum();

int num = 1;

int main (int argc, const char * argv[]) {
	printf("%d\n", num);
	num++;
	PrintNum();
    return 0;
}

void PrintNum() {
	printf("%d", num);
}