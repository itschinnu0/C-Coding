#include<stdio.h>

int main()
{
  int age;
  
  printf("enter the age:");
  scanf("%d",&age);
  
   if(age>=5 && age<=15)
     {
        printf("You are child\n");
     }
   else if(age>15 && age<=20)
     {
        printf("You are danger\n");
     }
   else if(age>20 && age<=30)
     {
        printf("You are soladier\n");
     }
   
   else if(age>30 && age<=40)
     {
      printf("You are hunter\n");
     }
   else if(age>40 && age<=50)
     {
      printf("You are begger\n");
     }
   else if(age>50 && age<=60)
     {
      printf("You are puncher\n");
     }
   else if(age>60 && age<=70)
    {
      printf("You are maker\n");
    }
   else 
    {
    printf("You are senior\n");
    }
  
   
   return 0;
}
