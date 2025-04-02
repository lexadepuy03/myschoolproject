#include <stdio.h>

int main() {
    int i;
    int *ptr = NULL;

    printf("Hello, World!\n");

    // Initialize an array of pointers to 10 integers
    for (i = 0; i < 10; ++i) {
        ptr[i] = i + 1;
    }

    // Print the elements of the array using pointer arithmetic
    printf("Elements of the array: ");
    for (int j = 0; j <= 9; ++j) {
        printf("%d ", *ptr + j);
    }
    printf("\n");

    return 0;
}
