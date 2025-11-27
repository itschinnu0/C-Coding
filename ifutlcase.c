#include<stdio.h>

int main()
{
   char ch;
   printf("Enter the character:");
   scanf("%c",&ch);
   if(ch >= 'A' && ch <= 'Z')
   {
     printf("Entered character %c is upper case\n",ch);
     printf("Equivalent lower case is %c\n",ch+32);
   }
   if(ch >= 'a' && ch <= 'z')
   {
     printf("Entered character %c is lower case\n",ch);
     printf("Equivalent upper case is %c\n",ch-32);
   }
}
