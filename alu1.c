#include <stdio.h>

// Function for addition
int add(int a, int b) {
    return a + b;
}

// Function for subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function for multiplication
int multiply(int a, int b) {
    return a * b;
}

// Function for division
float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0; // Or handle error appropriately
    }
    return (float)a / b;
}

// Function for bitwise AND
int bitwiseAND(int a, int b) {
    return a & b;
}

// Function for bitwise OR
int bitwiseOR(int a, int b) {
    return a | b;
}

// Function for bitwise XOR
int bitwiseXOR(int a, int b) {
    return a ^ b;
}

// Function for bitwise NOT (on a single operand)
int bitwiseNOT(int a) {
    return ~a;
}

int main() {
    int num1, num2, choice;
    float result_div;
    int result_int;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nSelect an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Bitwise AND\n");
    printf("6. Bitwise OR\n");
    printf("7. Bitwise XOR\n");
    printf("8. Bitwise NOT (on first number)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result_int = add(num1, num2);
            printf("Result of Addition: %d\n", result_int);
            break;
        case 2:
            result_int = subtract(num1, num2);
            printf("Result of Subtraction: %d\n", result_int);
            break;
        case 3:
            result_int = multiply(num1, num2);
            printf("Result of Multiplication: %d\n", result_int);
            break;
        case 4:
            result_div = divide(num1, num2);
            if (num2 != 0) { // Only print if no division by zero error
                printf("Result of Division: %.2f\n", result_div);
            }
            break;
        case 5:
            result_int = bitwiseAND(num1, num2);
            printf("Result of Bitwise AND: %d\n", result_int);
            break;
        case 6:
            result_int = bitwiseOR(num1, num2);
            printf("Result of Bitwise OR: %d\n", result_int);
            break;
        case 7:
            result_int = bitwiseXOR(num1, num2);
            printf("Result of Bitwise XOR: %d\n", result_int);
            break;
        case 8:
            result_int = bitwiseNOT(num1);
            printf("Result of Bitwise NOT on %d: %d\n", num1, result_int);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
