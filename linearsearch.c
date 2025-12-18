/*Searching algorithms in C are used to find a specific element within a data structure, typically an array or a list. The two most common and fundamental searching algorithms in C are Linear Search and Binary Search.
1. Linear Search (Sequential Search):
Concept: This is the simplest searching algorithm. It sequentially checks each element in the list until a match is found or the end of the list is reached.
Implementation:
C

    int linearSearch(int arr[], int size, int key) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == key) {
                return i; // Element found at index i
            }
        }
        return -1; // Element not found
    }
Characteristics:
Works on both sorted and unsorted arrays.
Easy to implement.
Inefficient for large datasets as its time complexity is O(n) in the worst case.*/

#include <stdio.h>
void linear_search(int a[], int n, int key)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("The element is found at %d position\n", i + 1);
            count = count + 1;
        }
    }
    if (count == 0)
        printf("The element is not present in the array\n");
}
int main()
{
    int i, n, key;
    n = 6;
    int a[10] = {12, 44, 32, 18, 4, 10};
    key = 23;
    linear_search(a, n, key);
    key = 4;
    linear_search(a, n, key);
    return 0;
}
