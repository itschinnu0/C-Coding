#include <stdio.h>

int main() {
    // Declare and initialize an integer array
    int numbers[] = {10, 20, 30, 40, 50};

    // Calculate the number of elements in the array
    // sizeof(numbers) gives the total size of the array in bytes
    // sizeof(numbers[0]) gives the size of one element in bytes
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Elements of the array are: ");

    // Traverse the array using a for loop
    for (int i = 0; i < size; i++) {
        // Access and print each element
        printf("%d ", numbers[i]);
    }

    printf("\n"); // Print a newline for better formatting

    return 0;
}
