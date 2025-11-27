#include<stdio.h>

int main()
{
   int myNumbers2[] = {25, 50, 75, 100};
   printf("%d\n", myNumbers2[0]);
   myNumbers2[0] = 33;//change an array element
   printf("changed number is %d\n", myNumbers2[0]);
   // Declare an array of four integers:
int myNumbers[4];

// Add elements
myNumbers[0] = 25;
myNumbers[1] = 50;
myNumbers[2] = 75;
myNumbers[3] = 100;
int myNumbers1[] = {10, 25, 50, 75, 100};

printf("%zu\n", sizeof(myNumbers1));  // Prints 20 int 4bytes x no. of elements
 int length = sizeof(myNumbers1) / sizeof(myNumbers1[0]);

printf("%d\n", length);  // Prints 5 

int myNumbers4[] = {25, 50, 75, 100};
int i;

for (i = 0; i < 4; i++) {
  printf("%d\n", myNumbers4[i]);
}

int myNumbers5[] = {25, 50, 75, 100};

int length1 = sizeof(myNumbers5) / sizeof(myNumbers5[0]);
int j;

for (j = 0; j < length1; j++) {
  printf("%d\n", myNumbers5[j]);
}

return 0;
} 
