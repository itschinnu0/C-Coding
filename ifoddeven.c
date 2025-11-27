#include<stdio.h>

int main()
{
  int n;
  printf("please enter an integer:");
  scanf("%d",&n);
  
  if(n%2 == 0)
  {
    printf("it is an even number\n");
  }
  if(n%2 != 0)
  {
    printf("it is an odd number\n");
  }
   return 0;
}
