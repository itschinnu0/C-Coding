#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter the no. for week days:");
    scanf("%d",&n);
    
    switch(n)
    {
       case 1:
       printf("MONDAY\n");
       break;
       
       case 2:
       printf("TUESDAY\n");
       break;
       
       case 3:
       printf("WEDNESDAY\n");
       break;
       
       case 4:
       printf("THURSDAY\n");
       break;
       
       case 5:
       printf("FRIDAY\n");
       break;
       
       case 6:
       printf("SATURDAY\n");
       break;
       
       case 7:
       printf("SUNDAY\n");
       break;
       
       default:
       printf("Invalid No.for 7 week days.\n");
            
    }
   }
   //switch statement support only int and char but not float and string
