/*Here is a C program that sorts an array in ascending order using the Bubble Sort algorithm*/

#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++) {
       // Compare adjacent elements and swap if they are in the wrong order
            if (arr[j] > arr[j + 1])//if(arr[j]<arr[j+1])for decending order
            
             {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform Bubble Sort
void bubbleSort1(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++) {
       // Compare adjacent elements and swap if they are in the wrong order
            if (arr[j] < arr[j + 1])
             {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);
    
    bubbleSort1(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
