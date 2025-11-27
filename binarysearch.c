/*2. Binary Search:
Concept: This algorithm efficiently finds an element in a sorted array by repeatedly dividing the search interval in half. It compares the target value with the middle element of the array. If they are equal, the element is found. If the target is smaller, the search continues in the left half; otherwise, it continues in the right half.
Implementation: 
C

    int binarySearch(int arr[], int size, int key) {
        int low = 0;
        int high = size - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2; // Avoids potential overflow
            if (arr[mid] == key) {
                return mid; // Element found at index mid
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1; // Element not found
    }
Characteristics:
Requires the array to be sorted.
Significantly more efficient for large datasets than linear search, with a time complexity of O(log n).
More complex to implement than linear search.*/

#include<stdio.h>
void binary_search(int a[], int low, int high, int key){
   int mid;
   mid = (low + high) / 2;
   if (low <= high) {
      if (a[mid] == key)
         printf("Element found at index: %d\n", mid);
      else if(key < a[mid])
         binary_search(a, low, mid-1, key);
      else if (a[mid] < key)
         binary_search(a, mid+1, high, key);
   } else if (low > high)
      printf("Unsuccessful Search\n");
}
int main(){
   int i, n, low, high, key;
   n = 5;
   low = 0;
   high = n-1;
   int a[10] = {12, 14, 18, 22, 39};
   key = 22;
   binary_search(a, low, high, key);
   key = 23;
   binary_search(a, low, high, key);
   return 0;
}
