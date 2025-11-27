#include<stdio.h>

int main()
{

  int a=10,b=5;
  int x=a;
  int y=b;
  printf("a=%d,b=%d,x=%d,y=%d\n",a,b,x,y);
  
  printf("a+=b=%d\n",a+=b);//compound operators
  printf("a-=b=%d\n",a-=b);
  printf("a*=b=%d\n",a*=b);
  printf("a/=b=%d\n",a/=b);
  printf("a%%=b=%d\n",a%=b);
  
  printf("a&=b=%d\n",a&=b);//bit-wise
  printf("a|=b=%d\n",a|=b);
  printf("a^=b=%d\n",a^=b);
  printf("a<<=1=%d\n",a<<=1);
  printf("a>>=1=%d\n",a>>=1);
  
 // printf("a&&=b=%d\n",a&&=b);//logical or boolean
  //printf("a||=b=%d\n",a||=b);//error
  
  
  
  printf("a=a+b is same as a+=b\n");
  
  
}

