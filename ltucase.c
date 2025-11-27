/*Lab 3: C Program to Check the Given Character is Lowercase or Uppercase or Special Character
Aim:
To write a C Program to Check the Given Character is Lowercase or Uppercase or Special
Character
Theory:
Lower case characters can be checked as between ‘a’ and ‘z’, upper case characters between ‘A’ and ‘Z’ and numbers between ‘0’ and ‘9’.   Any other character is a special character
Algorithm:
1.	START
2.	Declare ip as a character
3.	Read ip from the user
4.	IF ip is between ‘a’ and ‘z’
Print lower case character
5.	ELSE IF ip is between ‘A’ and ‘Z’
Print upper case character
6.	ELSE IF ip is between ‘0’ and ‘9’
Print number
7.	ELSE print special character.
8.	STOP
Program (Students are expected to write appropriate comments for the program)*/
/*****************************************************
Program to check type of the character entered by the user
Uses, IF-THEN-ELSEIF-ELSE method
Input: c character from the keyboard
Output displays type of character on the screen
Calls/Returns None
******************************************************/
#include<stdio.h>
int main()
{
char ip;
	printf("type in a key:");
	scanf("%c",&ip);
	if(ip>='A' && ip<='Z')
	{
		printf("%c is uppercase letter\n",ip);
	}
	else if(ip>='a' && ip<='z')
	{
		printf("%c is lowercase letter\n",ip);
	}
	else if (ip >='0' && ip <='9')
	{
		printf("%c is a number\n",ip) ;
	}
	else
	{
		printf("%c is special character\n",ip);
	}
	return 0;
}

