#include <stdio.h>

int main() {
    // Define the size of the arrays
    int size = 5;

    // Declare and initialize the two input arrays
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};

    // Declare the result array
    int result[size];

    // Loop to add corresponding elements and store in the result array
    for (int i = 0; i < size; i++) {
        result[i] = array1[i] + array2[i];
    }

    // Display the elements of the result array
    printf("Resultant Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
