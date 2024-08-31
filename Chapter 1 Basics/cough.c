#include <stdio.h>

void cough(void) { // cough neither takes input "(void)"" nor returns output "void"
    printf("cough\n");
}

int main(void) {
    for (int i = 0; i < 3; i++) {
        cough();
    }
    return 0;
}

// put cough function at top, BEFORE calling it
// it was pushed onto the stack beforehand
// can't call function that wasn't pushed onto stack yet