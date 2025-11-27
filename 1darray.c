#include<stdio.h>

int main()
{
     //initialization of 1darray
     int num[]={10,20,30,40,50};
     int num1[5]={60,70,80,90,100};
     int num2[5]={ 110,120};
   //  int num3[3]={ 130,140,150,160,170};//error not allowed
   
     float num4[5]={ 1.4,2.5,3.6,4.7,5.8};
     
     char msg[5]={'a','b','c','d','e'};
     char msg1[]={"God is Great"};
     char msg2[]={"We are blessed\0by the god"};
     char msg3[]={"We are blessed by the god\0"};
     
     
     //read and print particular element
     printf("%d\n",num[3]);
     printf("%d\n",num1[6]);//available value not stored value
     printf("%d\n",num2[2]);//stored value is zero
     printf("%d\n",num2[6]);//available value not stored value
     printf("%f\n",num4[4]);
     printf("%c\n",msg[2]);
     //printf("%s\n",msg1[]);//invalid
     //printf("%s\n",msg1[2]);//invalid
     printf("%d\n",msg1[2]);//ascii value
     printf("%c\n",msg1[2]);//character
     printf("%x\n",msg1[2]);//hex value
     printf("%p\n",&num[3]);//address of the element
     
     int *ptr = &num[3];
     //int ptr1=&num1[2];//invalid 
     printf("%d\n",*ptr);//content
     printf("%p\n",ptr);//address
     
     for(int i=0;i<=12;i++)
     {
        printf("%c",msg1[i]);
     }
     printf("\n");
     
     for(int j=0;msg2[j]!='\0';j++)
     {
        printf("%c",msg2[j]);
     }
     printf("\n");
     
     for(int a=0;msg3[a]!='\0';a++)
     {
        printf("%c",msg3[a]);
     }
     printf("\n");
     
     int num5[5],b,c;
     printf("Enter the elements:");
     for(b=1;b<=5;b++)
     {
         scanf("%d",&num5[b]);
     }
     printf("Entered elements are:");
     for(c=1;c<=5;c++)
     {
         printf("%d ",num5[c]);
     }
      printf("\n");
     return 0;
}
