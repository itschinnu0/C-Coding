#include<stdio.h>

int main()
{
     int a=5;
     printf("The no.available in memory defined by a is %d\n",a);
     printf("Enter the integer no:");
     int num;
     scanf("%d",&num);
     printf("The entered integer no.is %d\n",num);
     
     int b[5]={10,20,30,40,50};
     int i;
     for(i=0;i<5;i++)
     {
         printf("%d,",b[i]+5);
     }
     printf("\n");
     
     int c[5]={1,2,3,4,5};
     int j;
     for(j=0;j<5;j++)
     {
       printf("%d,",b[j]*c[j]);
     }
       printf("\n");
       
       int d[5]={11,22,33,44,55};
       int x,y;
       for(x=0;x<5;x++)
       {
         printf("%d,",d[x]);
       }
         printf("\n");
         
         d[3]=66;
         for(y=0;y<5;y++)
       {
         printf("%d,",d[y]);
       }
         printf("\n");
         
         
     return 0;
     
}
