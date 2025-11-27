#include<stdio.h>

int main()
{
      int a=1,b=2,c=3,d=0,e=1,f=4,g=5;
      
      printf("a=%d,b=%d,c=%d,d=%d,e=%d,f=%d,g=%d\n",a,b,c,d,e,f,g);
      
      printf("a++=%d\n",a++);//post-increment
      printf("a=%d\n",a);
      printf("++a=%d\n",++a);//pre-increment
      
      printf("b--=%d\n",b--);//post-decrement
      printf("b=%d\n",b);
      printf("--b=%d\n",--b);//pre-decrement
      
      printf("+c=%d\n",+c);//unary plus
      printf("-c=%d\n",-c);//unary minus
      
      printf("!d=%d\n",!d);//logical not operator, true or false
      printf("!e=%d\n",!e);
      printf("~f=%d\n",~f);//bitwise not operator, 2's complement
      
      int *ptr = &g;
      printf("&g=%p\n",&g);//address operator
      printf("ptr=%p\n",ptr);
      printf("*ptr=%d\n",*ptr);//memory content read operator
      
      printf("sizeof(int)=%ld\n",sizeof(int));    
      printf("sizeof(double)=%ld\n",sizeof(double));  
         
      return 0;
      
      
      
}
