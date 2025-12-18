#include <stdio.h>

int main()
{
    int i, num;
    int isPrime = 1;  // Better variable name than temp
    
    printf("Enter any number to Check for Prime: ");
    scanf("%d", &num);
    
    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }
    
    if (isPrime == 1)
    {
        printf("%d is a Prime number\n", num);
    }
    else
    {
        printf("%d is not a Prime number\n", num);
    }
    
    return 0;
}
