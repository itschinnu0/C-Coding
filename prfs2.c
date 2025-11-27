#include <stdio.h>
#include <limits.h>

int main() {
   printf("The value of CHAR_BIT: %d\n", CHAR_BIT);
   printf("The value of SCHAR_MIN: %d\n", SCHAR_MIN);
   printf("The value of SCHAR_MAX: %d\n", SCHAR_MAX);
   printf("The value of UCHAR_MAX: %u\n", UCHAR_MAX);
   printf("The value of CHAR_MIN: %d\n", CHAR_MIN);
   printf("The value of CHAR_MAX: %d\n", CHAR_MAX);
   printf("The value of MB_LEN_MAX: %d\n", MB_LEN_MAX);
   printf("The value of SHRT_MIN: %d\n", SHRT_MIN);
   printf("The value of SHRT_MAX: %d\n", SHRT_MAX);
   printf("The value of USHRT_MAX: %u\n", USHRT_MAX);
   printf("The value of INT_MIN: %d\n", INT_MIN);
   printf("The value of INT_MAX: %d\n", INT_MAX);
   printf("The value of UINT_MAX: %u\n", UINT_MAX);
   printf("The value of LONG_MIN: %ld\n", LONG_MIN);
   printf("The value of LONG_MAX: %ld\n", LONG_MAX);
   printf("The value of ULONG_MAX: %lu\n", ULONG_MAX);
   
   printf("size of char:%lu\n",sizeof(char));
   printf("size of int:%lu\n",sizeof(int));
   printf("size of float:%lu\n",sizeof(float));
   printf("size of double:%lu\n",sizeof(double));
   printf("size of short:%lu\n",sizeof(short));
   printf("size of long:%lu\n",sizeof(long));
   
   int a = 5;
   short int b=6;
   long int c=8;
   float d=6.14;
   double e = 10.21;
    printf("size of int a=5:%lu\n",sizeof(a));
    printf("size of short int b=6:%lu\n",sizeof(b));
    printf("size of long int c=8:%lu\n",sizeof(c));
    printf("size of float d=6.14:%lu\n",sizeof(d));
    printf("size of double e=10.21:%lu\n",sizeof(e));
    printf("size of int a=5+double d=6.14=11.14:%lu\n", sizeof(a + d));
    printf("size of 250 is=%lu\n",sizeof(250));
    printf("size of 25.75 is=%lu\n",sizeof(25.75));
    printf("size of 2512345678 is=%lu\n",sizeof(2512345678));
    
    
    
   
   return 0;
  }
  
