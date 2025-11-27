#include<stdio.h>

int main()
{

   int rows,n,num=1,j;
   
   printf("Enter the no. of rows:");
   scanf("%d",&n);
   
   for(rows=1;rows<=n;rows++)
     {
          for(j=1;j<=rows;j++)
          {
              printf("%d\t",num);
              num++;
          }
          printf("\n");
     }
}
