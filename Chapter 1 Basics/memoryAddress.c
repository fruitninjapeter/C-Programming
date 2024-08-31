#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
    // all these variables when declared 
    // are stored in our physical memory
    // stored in our memory address
    // when we refer to age, it's not gonna use age
    // but to the memory address where this value is stored
    // inside our physical memory
    // when c needs to access them it can use that address

    printf("%p\n", &age); // %p refers to the pointer
    // Memory Address of age: 00000058047ffce0

    printf("Memory address of...\n");
    printf("ge: %p\n", &age);
    printf("gpa: %p\n", &gpa);
    printf("grade: %p\n", &grade);

    // a pointer is just a type of data
    // just a memory address

    return 0;
}