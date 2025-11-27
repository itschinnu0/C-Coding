#include <stdio.h>

int main()

{

    int i, num, temp = 1; 

    // read input from user.

    printf("Enter any numb to Check for Prime: ");

    scanf("%d", &num);
    if (num == 0 || num == 1 )//if(num<=1)

    {
        temp=0;
     }

    // iterate up to n/2.
    else
    {
    
       for (i = 2; i <= num / 2; i++)

    {
       // check if num is divisible by any number.

        if (num % i == 0)

        {

            temp=0;
            break;

        }

    } 
    }

    // check for the value of temp and num. 

    if (temp == 1)

    {

        printf("%d is a Prime number\n", num);

    }

    else

    {

        printf("%d is not a Prime number\n", num);

    }

    return 0;
}

