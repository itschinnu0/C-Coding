#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    // Recursive step: Fn = F(n-1) + F(n-2)
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n, i;

    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Please enter a non-negative number of terms.\n");
    } else {
        printf("Fibonacci Series up to %d terms:\n", n);
        for (i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}
