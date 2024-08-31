#include <stdio.h>

// Prompt user for positive integer
int get_positive_int(void) {
    int n;
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    }
    while (n < 1);
    return n;
}

int main(void) {
    int i = get_positive_int();
    printf("Your positive integer is: %i\n", i);
    return 0;
}