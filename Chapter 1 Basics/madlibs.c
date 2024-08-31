#include <stdio.h>

int main(void) {

    printf("Enter a color: ");
    char color[20];
    scanf("%s", color);
    printf("Enter a plural noun: ");
    char pluralNoun[20];
    scanf("%s", pluralNoun);
    printf("Enter a celebrity (First + Last name): ");
    char celebrityF[20]; // celebrity First Name
    scanf("%s", celebrityF);
    char celebrityL[20]; // celebrity Last Name
    scanf("%s", celebrityL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);

    return 0;
}