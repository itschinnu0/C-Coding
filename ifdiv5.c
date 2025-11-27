#include<stdio.h>

int main()
{
  int n;
  printf("please enter an integer:");
  scanf("%d",&n);
  
  if(n%5 == 0)
  {
    printf("it is divisible by 5\n");
  }
  if(n%5 != 0)
  {
    printf("it is not divisible by 5\n");
  }
   return 0;
}
