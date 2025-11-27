#include<stdio.h>
int main()
{
   int s1,s2,s3,s4,s5,s6,total;
   float avg;
   
	printf("enter marks for 6 subjects out of 100:");
	scanf("%d %d %d %d %d %d",&s1,&s2,&s3,&s4,&s5,&s6);
	
	total = s1 + s2 + s3 + s4 + s5 + s6;
	avg = total/6;
	printf("total=%d\n",total);
	printf("avg=%f\n",avg);
	
	if(s1<35 || s2<35 || s3<35 || s4<35 || s5<35 || s6<35)
	{
		printf("result:fail\n");
	}
	else if(avg>=85)
	{
		printf("result:distinction\n");
	}
	else if(avg>=70 && avg<85)
	{
		printf("result:first class\n") ;
	}
	else if(avg>=60 && avg<70)
	{
		printf("result:second class\n") ;
	}
	else if(avg>=50 && avg<60)
	{
		printf("result:third class\n") ;
	}
	else
	{
		printf("result:just pass\n") ;
	}
	return 0;
}

