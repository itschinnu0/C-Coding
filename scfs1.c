#include<stdio.h>

int main()
{
   int a;   
   printf("Enter the integer constant:");
   scanf("%d",&a);
   printf("Entered integer no. is:%d\n",a);
   
   float b;
   printf("Enter the real constant:");
   scanf("%f",&b);
   printf("Entered real no. is:%f\n",b);
   printf("Entered real no. is:%.2f\n",b);
      
      
   char c;
   printf("Enter the character constant:");
   scanf(" %c",&c);
   printf("Entered character is:%c\n",c);
   
   
   char msg[20];
   printf("Enter the string constant:");
   scanf("%s",msg);
   printf("Entered string is:%s\n",msg);
   
   
   printf("Entered nos are:%d\t%f\t%c\t%s\n",a,b,c,msg);
   
   printf("%p\t%p\t%p\t%p\n",&a,&b,&c,&msg);
   
   int q = 10;
   int *ptr = &q; //address of memory defined by q
   int val = *ptr;//content of memory
   
   printf("value of int q=10 with%%d:%d\n",q);//value of q
   printf("address of int q=10 with%%p:%p\n",&q);//address of q
   printf("address of int *ptr=&q with%%p:%p\n",ptr);//address of q
   printf("val of int val=*ptr with%%d:%d\n",*ptr);//content of address of q
   printf("val of int val=*ptr with%%d:%d\n",val);//val contains the content of address of q
      
   return 0;
}
