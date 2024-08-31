#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int age = 30;
    int * pAge = &age; // declare a pointer to int
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char aGrade = &grade;

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