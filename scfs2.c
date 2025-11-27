#include<stdio.h>

int main()
{
     int a;
     float b;
     unsigned char c;
     double d;
     
     printf("Enter the 1st no. as integer:");
     scanf("%d",&a);
     printf("Entered 1st no. is:%d\n",a);
     
     printf("Enter the 2nd no. as float:");
     scanf("%f",&b);
     printf("Entered 2nd no. is:%f\n",b);
     
     printf("Enter the 3rd no. as char:");
     scanf(" %c",&c);//to read character leave space as " %c" not as "%c"
     printf("Entered 3rd no. is:%c\n",c);
     printf("Hex equivalent of 3rd no. is:%x\n",c);
     printf("ascii equivalent of 3rd no. is:%d\n",c);
     printf("Octal value of 3rd no. is:%o\n",c);
     
     printf("Enter an integer,float and a char value:");
     scanf("%d %f %c",&a,&b,&c);
     printf("Entered values are:%d\t%f\t%c\n",a,b,c);
     
     printf("sum of entered nos is:%f\n",a+b+c);
     
     printf("Enter the 4th no. as double:");
     scanf("%lf",&d);
     printf("Entered 4th no. is:%lf\n",d);
     
     return 0;
}
