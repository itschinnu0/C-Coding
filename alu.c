#include<stdio.h>

  int add(int x,int y)
  {
     return x+y;
  }  
  int sub(int x,int y)
  {
     return x-y;
  }  
  int mul(int x,int y)
  {
     return x*y;
  }  
  int div(int x,int y)
  {
     return x/y;
  }  
 int main()
 {
    int n1,n2,result;
    int opr;
    printf("enter two numbers:");
    scanf("%d %d",&n1,&n2);
    printf("enter operator:");
    scanf("%d",&opr);//space after c
    
    if(opr == 1)
    {
    result=add(n1,n2);
    printf("%d\n",result);
    }
    else if(opr == 2)
    {
    result=sub(n1,n2);
    printf("%d\n",result);
    
    }
    else if(opr == 3)
    {
    result=mul(n1,n2);
    printf("%d\n",result);
    
    }
    else if(opr == 4)
    {
    result=div(n1,n2);
    printf("%d\n",result);
    
    }
    else 
    printf("invalid operator:\n");
    return 0;
    }
