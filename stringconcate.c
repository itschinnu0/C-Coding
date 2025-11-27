#include<stdio.h>
#include <string.h>

int main()
{
    char string1[1000], string2[1000];  
    int i,j;
    printf("Enter  string number 1: ");
    scanf("%s",string1);
    printf("Enter  string number 2: ");
    scanf("%s",string2);
    j=strlen(string1);
    
    for(i=0;string2[i]!='\0';i++)  
    {
         string1[i+j]=string2[i];
    }
    string1[i+j]='\0';
    printf("combined two strings ='%s'\n",string1);
    
    return 0;
}
