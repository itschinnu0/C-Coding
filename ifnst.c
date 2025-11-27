#include <stdio.h>

int main() {
    int age;
    int has_license; // 1 for true, 0 for false

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Do you have a driver's license? (1 for Yes, 0 for No): ");
    scanf("%d", &has_license);

    if (age >= 18) {
        if (has_license == 1) {
            printf("You are eligible to drive.\n");
        } else {
            printf("You are old enough, but need a license to drive.\n");
        }
    } else {
        printf("You are not old enough to drive.\n");
    }

    return 0;
}
