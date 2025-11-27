#include <stdio.h>
#include <math.h> // Required for sqrt() function

int main() {
    double a, b, c; // Coefficients of the quadratic equation
    double discriminant, root1, root2; // Variables to store discriminant and roots
    double realPart, imagPart; // For complex roots

    // Prompt user to enter coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Determine the nature of roots based on the discriminant
    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("root1 = %.2lf\n", root1);
        printf("root2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        // Real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("root1 = root2 = %.2lf\n", root1);
    } else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and distinct:\n");
        printf("root1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("root2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}//gcc roqe.c -o roqe -lm  compilation for #include<math.h> 
