#include<stdio.h>

int main()
{
    int r,c,a[10][10];
    int i,j;
    printf("\nenter no. of rows and colums:");
    scanf("%d %d",&r,&c);
    printf("\nenter array elements:");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
          scanf("%d",&a[i][j]);
       }
    }
    
    printf("Matrix Elements are:\n");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
          printf("%d ",a[i][j]);
       }
       printf("\n");
    }
   return 0;
}
