#include<stdio.h>

int main()
{
   long long int num,rem,sum=0;
   
   printf("Enter the no:");
   scanf("%lld",&num);
   
   while(num!=0)
   {
       rem=num%10;
       sum=sum+rem;
       num=num/10;
   }
   
   printf("sum of digits=%lld\n",sum);
   return 0;
   

}
