/*Strings are used for storing text/characters.
For example, "Hello World" is a string of characters.
Unlike many other programming languages, C does not have a String type to easily create string variables. Instead, you must use the char type and create an array of characters to make a string in C:*/
#include<stdio.h>

int main()
{
   char greetings[] = "Hello World!";
   printf("%s\n", greetings);
   printf("%c\n", greetings[0]);//first character
   
   char greetings1[] = "Hello World!";
  greetings1[0] = 'J';
  printf("%s\n", greetings1);
  
  char carName[] = "Volvo";
int i;

for (i = 0; i < 5; ++i) {
  printf("%c\n", carName[i]);
}
char carName2[] = "FIAT\0";
int p;

for (p = 0; carName2[p]!='\0'; ++p) {
  printf("%c\n", carName2[p]);
}
char carName1[] = "Volvo";
int length = sizeof(carName1) / sizeof(carName1[0]);
int j;

for (j = 0; j < length; ++j) {
  printf("%c\n", carName1[j]);
}
char greetings3[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
char greetings4[] = "Hello World!";

printf("%zu\n", sizeof(greetings3));   // Outputs 13
printf("%zu\n", sizeof(greetings4));  // Outputs 13

char message[] = "Good to see you,";
char fname[] = "John";
printf("%s %s!\n", message, fname);
//special characters
char txt[] = "We are the so-called \"Vikings\" from the north.";
printf("%s\n",txt);
char txt1[] = "The character \\ is called backslash.";
printf("%s\n",txt1);
char txt2[] = "It\'s alright.";
printf("%s\n",txt2);
return 0;
}
