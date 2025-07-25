#include <stdio.h>

int main() {
    // 1. Declare and initialize an integer array with 5 numbers
    int numbers[5] = {10, 20, 30, 40, 50};

    // 2. Print a message to the console
    printf("The elements of the array are:\n");

    // 3. Loop through the array and print each element
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}