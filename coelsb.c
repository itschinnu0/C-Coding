#include <stdio.h>

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check the LSB using bitwise AND
    if ((num & 1) == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}
