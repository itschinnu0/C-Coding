/*A prime number is a positive integer that is divisible only by 1 and itself. For example: 2, 3, 5, 7, 11, 13, 17.*/



#include <stdio.h>
#include <math.h> // Required for sqrt() function

int main() {
    int num, i, isPrime = 1; // Assume the number is prime initially

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle special cases for numbers less than or equal to 1
    if (num <= 1) //or if (n == 0 || n == 1)
    {
        isPrime = 0; // 0 and 1 are not prime numbers
    } else {
        // Check for divisibility from 2 up to the square root of num
        // This optimization reduces the number of iterations needed
        //time complexity reduces
        for (i = 2; i <= (int)sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0; // If a divisor is found, it's not prime
                break;       // No need to check further
            }
        }
    }

    // Print the result based on the isPrime flag
    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
