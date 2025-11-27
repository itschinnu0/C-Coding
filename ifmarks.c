#include<stdio.h>

int main()
{
   //int marks=75 or 34;
   int marks;
   printf("enter the marks:");
   scanf("%d",&marks);
   
   if(marks>=35 && marks<=100)//if(marks>=35)check?
    {
     printf("you have PASSED\n");
     printf("congrats!\n");
   }
   if(marks<35)
   {
     printf("you have FAILED\n");
     printf("sorry\n");
   }
   if(marks>100)
  {
    printf("invalid marks\n");
  }
   
    
       return 0;
}
