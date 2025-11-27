#include<stdio.h>

int main()
{
   int n;
   printf("please input an integer number:");
   scanf("%d",&n);
   if(n==0)
   {
      printf("it is zero\n");
   }
   else
   {
          if(n>0)
             {
               printf("it is a positive number\n");
             }
          else
             {
                printf("it is a negative number\n");
             }
   }
   
   
   return 0;
}
