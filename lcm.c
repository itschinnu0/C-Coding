//alogarithm 
//5,3 greater no. is 5., 5+5,3 10,3, 10+5,3 15,3 15/5=0, 15/3=0, 
//when remainder is zero therefore 15 is LCM
#include <stdio.h>

int main() {
    int num1, num2, max, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Determine the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Start checking from 'max' and increment until LCM is found
    lcm = max;
    while (1) {
        if ((lcm % num1 == 0) && (lcm % num2 == 0)) {
            printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);
            break; // Exit the loop when LCM is found
        }
        lcm += max; // Increment by 'max' for efficiency, or by 1
    }

    return 0;
}

