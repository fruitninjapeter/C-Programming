#include <stdio.h>

void cough(int n) { // cough takes input "(int)"" but returns no output
    for (int i = 0; i < n; i++) {
        printf("cough\n");
    }
}

int main(void) {
    printf("How many coughs?: ");
    int amount;
    scanf("%d", &amount);
    cough(amount);
}