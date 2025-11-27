#include <stdio.h>

int main() {
    int num1 = 10,num2 = -10,num3 = 0;
    int n = 4;
    int n1 = 11;

    printf("num1=%d,num2=%d,num3=%d\n",num1,num2,num3);
    
    if (num1 > 0) 
    {
        printf("The num1 is positive.\n");
    }
    if (num2 < 0) 
    {
        printf("The num2 is negative.\n");
    }
    if (num3 == 0) 
    {
        printf("The num3 is zero.\n");
    }
    	// Condition to check for even number
	if (n % 2 == 0) {
		printf("%d is Even\n", n);		
	}
		// Condition to check for odd number
	if (n % 2 != 0) {
		printf("%d is Odd\n", n);		
	}
	if (n1 <= 20 && n1 >= 10)
		printf("%d is in the range [10, 20]\n", n1);		

    return 0;
}
