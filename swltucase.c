#include<stdio.h>

int main()
{
       char ch;
       
       printf("enter a character:");
       scanf("%c",&ch);
       
       switch(ch)
       {
           case 'A'... 'Z':
           printf("'%c'is an uppercase letter.\n",ch);
           break;
           
           case 'a'... 'z':
           printf("'%c'is an lowercase letter.\n",ch);
           break;
           
           case '0'... '9':
           printf("'%c'is a number.\n",ch);
           break;
           
           
           default:
           printf("'%c'is special character.\n",ch);
           break;
       }
       
       return 0;
       }
