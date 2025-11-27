#include <stdio.h>
#include <string.h>


int main() {
    int numbers[] = {10, 20, 30, 40, 50,60}; // Declare and initialize an integer array
    // Calculate the length of the array
    int length = sizeof(numbers) / sizeof(numbers[0]);

    printf("The length of the array is: %d\n", length);
    
      
    //legnth of string
    
    char msg[]= {"God is great\0"};   
    int i,len=0;
    for(i=0;msg[i]!='\0';i++)
     {
          len++;
     }
      printf("length of the string is %d\n",len);
      
      int length1 = strlen(msg);
      printf("length of the string is %d\n",length1);
      
      char msg1[]= "God is great"; 
      int len1 = sizeof(msg1)/sizeof(msg1[0]);
      printf("length of the string is %d\n",len1);
      
      
    return 0;
}
