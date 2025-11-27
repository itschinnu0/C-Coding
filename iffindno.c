#include<stdio.h>

int main()
{
    int i,n,b=0,a[5]={ 1,2,3,4,5};
    printf("Enter the no to search:");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
       if(n==a[i])
       {
          b=1; 
          break;
          
       }
     }
       if(b==1) printf("no.found\n");
       else printf("no. not found\n"); 
     
     return 0;
}
