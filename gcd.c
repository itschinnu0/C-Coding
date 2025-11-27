//keep subtract the smaller no. from larger no. untilequal ie, gcd
#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    while (n1 != n2) {
        if (n1 > n2) {
            n1 = n1-n2; // Subtract the smaller number from the larger
        } else {
            n2 = n2-n1; // Subtract the smaller number from the larger
        }
    }

    printf("GCD = %d\n", n1); // When n1 == n2, that value is the GCD
    return 0;
}
