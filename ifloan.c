#include <stdio.h>

int main() {
    int age, income, creditScore;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your monthly income: ");
    scanf("%d", &income);

    printf("Enter your credit score: ");
    scanf("%d", &creditScore);

    // Outer condition: Check age eligibility
    if (age >= 21 && age <= 60) {
        // Nested condition 1: Check income eligibility
        if (income >= 30000) {
            // Nested condition 2: Check credit score eligibility
            if (creditScore >= 700) {
                printf("Congratulations! You are eligible for the loan.\n");
            } else {
                printf("Loan denied: Insufficient credit score.\n");
            }
        } else {
            printf("Loan denied: Insufficient monthly income.\n");
        }
    } else {
        printf("Loan denied: Age is outside the eligible range (21-60).\n");
    }

    return 0;
}
