/***********/
/* Defines */
/***********/
#define kMaxLength 200

/***********/
/* Structs */
/***********/
struct Person {
	int num;
	char name[kMaxLength];
	struct Person *next;
};