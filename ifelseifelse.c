#include<stdio.h>

int main()
{
  int n;
  printf("please enter any number btween 0 to 2:");
  scanf("%d",&n);
  
  if(n == 0)
  {
    printf("you have entered zero\n");
  }
  else if(n == 1)
  {
    printf("you have entered one\n");
  }
  else if(n == 2)
  {
    printf("you have entered two\n");
  }
  else 
  {
    printf("you have entered wrong\n");
  }
   return 0;
}
