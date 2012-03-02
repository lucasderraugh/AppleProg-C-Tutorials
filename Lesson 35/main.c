#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedLists.h"

int main (int argc, const char * argv[]) {
	struct Person *head, *tail, *curr;
	
	head = NULL;
	
	int i;
	for (i = 1; i <= 4; i++) {
		curr = malloc(sizeof(struct Person));
		curr->num = i;
		printf("Enter your name: ");
		fgets(curr->name, kMaxLength, stdin);
		removeReturn(curr->name);
		
		if (head == NULL)
			head = curr;
		else
			tail->next = curr;
		tail = curr;
		tail->next = NULL;
	}	
	
	for (curr = head; curr != NULL; curr = curr->next) {
		printf("%d: ", curr->num);
		printf("%s\n", curr->name);
	}
	
    return 0;
}

// removeReturn
void removeReturn (char *name) {
	int length = strlen(name);
	name[length - 1] = '\0';
}
