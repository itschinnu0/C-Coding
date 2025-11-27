#include <stdio.h>

// Function to subtract two arrays
void subtractArrays(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] - arr2[i];
    }
}

int main() {
    int size = 5; // Define the size of the arrays

    // Declare and initialize the two input arrays
    int array1[size] = {10, 20, 30, 40, 50};
    int array2[size] = {5, 10, 15, 20, 25};

    // Declare the result array
    int resultArray[size];

    // Call the function to perform array subtraction
    subtractArrays(array1, array2, resultArray, size);

    // Print the elements of the result array
    printf("Result of array subtraction:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", resultArray[i]);
    }
    printf("\n");

    return 0;
}
