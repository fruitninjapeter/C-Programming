#include <stdio.h>

int how_tall(void) {
    int h;
    do {
        printf("From 1 to 8, how tall? ");
        scanf("%d", &h);
    } while (1 > h || h > 8);
    return h;
}

// 7
// 1,2,3,4,5,6
int main(void) {
    int height = how_tall();
    int i, j;
    for (i = 1; i <= height; i++) {
        for(j = 1; j <= height-i; j++){
            printf(" ");
        }
        for(j = 1; j <= 2*i; j++) {
            printf("#");
            if (j == i) {
                printf("  "); // the two spaces in between
            }
        }
        printf("\n");
    }
    return 0;
}