#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, const char * argv[]) {
    srand(clock());
    printf("We rolled a %d", rand() % 6 + 1);
    return 0;
}