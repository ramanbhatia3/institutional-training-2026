// Dynamic Memory Allocation using malloc()
// This program allocates memory for an integer
// and stores a value using a pointer.

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Allocate memory for one integer
    int *ptr = (int *)malloc(sizeof(int));

    // Check whether memory allocation was successful
    if (ptr == NULL) {
        printf("Memory Allocation Failed!");
        return 1;
    }

    // Assign value through pointer
    *ptr = 23;

    printf("Stored Value: %d\n", *ptr);

    // Release allocated memory
    free(ptr);

    return 0;
}