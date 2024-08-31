#include <stdio.h>

int main(void) {
    printf("What's your name?: ");
    char name[15];
    scanf("%14s", name); // scanf takes in 14 chars, 15th reserved for null at end 
    printf("Whats up %s!\n", name);
    printf("Now, type in a number: "); // addition
    int num;
    scanf("%d", &num);
    printf("Type in another number: ");
    int numnum;
    scanf("%d", &numnum);
    printf("%d + %d = %d\n", num, numnum, num + numnum);
}