#include <stdio.h>
#define n  5
#define p  3.14
const int  m = 3;//value will never change 
const float q=4.5;
const volatile int r = 6;//value may change by the hardware not by software
int main()
{
	printf("print of 45 with%%d:%d\n",45);
	printf("print of 55 with%%i:%i\n",55);
	printf("print of -45 with%%i:%i\n",-45);
	printf("print of -45 with%%i:%d\n",-45);
	int a=65,b=35;
    printf("print of int a=65 with%%d:%d\n",a);
	printf("print of int b=35 with%%i:%i\n",b);
	printf("print of -10 with%%u:%u\n",-10);
	printf("print of -55 with%%u:%u\n",-55);//2's complement	
	unsigned int c=-65,d=75;
	printf("print of unsigned int c=-65 with%%u:%u\n",c);
	printf("print of unsigned int d=75 with%%u:%u\n",d);
	printf("print of addres of int a=65 with%%p:%p\n",&a);
	printf("print of addres of int b=35 with%%p:%p\n",&b);
	printf("print of addres of unsigned int c=-65 with%%p:%p\n",&c);
	printf("print of addres of unsigned int d=75 with%%p:%p\n",&d);
	printf("printmanydatainoneline:%d\t%i\t%u\t%u\t%p\t%p\n",a,b,c,d,&a,&b);
	printf("hex dec equ of int a=65 with%%x:%x\n",a);//hexadecimal equivalent of a=65
	printf("octal equ of int a=65 with%%o:%o\n",a);//octal equivalent of a=65
	printf("print data as 5 digit with%%5d:%5d\n",a);//right justification
	printf("print data as 5 digit with zero with%%05:%05d\n",a);
	printf("print data with %%-5d for left justif:%-5d\n",a);//left justification
	printf("print p valu as float with%%f:%f\n",p);		
	printf("print q value as float with%%f:%f\n",q);//print upto 6 decimal points
        double r = 2.123456789;
	long double s=2.123456789;
	printf("print r valu as double with%%f:%f\n",r);
	printf("print s value as long double with%%Lf:%Lf\n",s);
	printf("print r value for 2 dec pts with%%.2f:%.2f\n",r);
	printf("print s value for 9 dec pts with%%.9Lf:%.9Lf\n",s);
	char g = 'A';
	char h[]={"God is great"};
	printf("print single char value with%%c:%c\n",g);
	printf("print string with%%s:%s\n",h);
	printf("print single char with%%c:%c\n",'B');
	printf("print string with%%s:%s\n","we are all bleesed by the god");
	printf("print string with%%20s for rt. justf:%20s\n",h);
	printf("print string with%%-20s for lft. just:%-20s\n",h);
	printf("print string rt. just for 5 chars with%%20.5s:%20.5s\n",h);
	printf("print string lf. just for 5 chars with%%-20.5s:%-20.5s\n",h);
	float w=12.67;
	printf("print w value in expo form with%%e:%e\n",w);
	printf("print the total of 3+5.14 with%%f:%f\n",3+5.14);
	return 0;
}
//difference between the statements 1. int a=3; printf("%d",a);memory load, memory read,pass the value as argument
//2. printf("%d"); no memory load, no memory read, directly pass the value as argument immediately , very fast
