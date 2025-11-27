#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    switch ((a == b) + (b == c) + (c == a)) {
        case 3:
            printf("The triangle is equilateral.\n");
            break;
        case 1:
            printf("The triangle is isosceles.\n");
            break;
        default:
            printf("The triangle is scalene.\n");
    }

    return 0;
}
