#include <stdio.h>

int main(void) {
    printf("Welcome to the CountOnes program.\n");
    while (1) {
        printf("Please enter a number: ");
        int input;
        scanf("%d", &input);
        int i = 0;
        int bits = 0;
        for (i = 0; i < 32; i++) {
            if ((input & (1 << i)) != 0) {
                bits++;
            }
        }
        printf("The number of bits set is: %d\n", bits);
        printf("Continue (y/n)?: ");
        char cont;
        scanf(" %c", &cont); // adding whitespace before %c will correctly read next non whitespace entered by user
        if (cont == 'y') {
            continue;
        }
        break;
    }
    printf("Exiting\n");
    return 0;
}