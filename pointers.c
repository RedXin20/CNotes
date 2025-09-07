#include <stdio.h>

int main() {

    // Make age
    int age = 10;

    // Making our pointer pointing to age
    int* pAge = &age;

    // Second pointer pointing to first pointer
    int** pAge2 = &pAge;

    // Dereferencing the pointers
    int value1 = *pAge;
    int value2 = **pAge2;
    int combinedValues = value1 + value2;


    printf("Location of pAge2: %p\n", (void*)&pAge1); 
    printf("Value of pAge2: %d\n", **pAge1); 
    printf("Location of pAge2: %p\n", (void*)&pAge2); 
    printf("Value of pAge2: %d\n", **pAge2); 
    printf("Location of combinedValues: %p\n", (void*)&combinedValues); 
    printf("Value of combinedValues: %d\n", combinedValues); 

    return 0;
}