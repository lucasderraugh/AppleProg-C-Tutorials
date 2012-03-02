#include <stdio.h>

int main (int argc, const char * argv[])
{
    int canCopy = 1;    //00000001
    int canMove = 2;    //00000010
    int canDelete = 4;  //00000100
    
    int options = canCopy | canMove;    //00000011
    
    int draggedObject = canDelete;
    
    if (draggedObject & options) {
        printf("Object success");
    } else {
        printf("Fail");
    }
    
    return 0;
}

