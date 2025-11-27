#include <stdio.h>
#include <string.h>
 
int main() {
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("%zu\n", strlen(alphabet));//26
  printf("%zu\n", sizeof(alphabet));   // 27
/*It is also important that you know that sizeof will always return the   memory size (in bytes), and not the actual string length:*/
char str1[20] = "God is ";
char str2[] = "great!";

// Concatenate str2 to str1 (result is stored in str1)
strcat(str1, str2);

// Print str1
printf("%s\n", str1);  

char str3[20] = "Hello World!";
char str4[20];

// Copy str3 to str4
strcpy(str4, str3);

// Print str4
printf("%s\n", str4);

char str5[] = "Hello";
char str6[] = "Hello";
char str7[] = "Hi";

// Compare str1 and str2, and print the result
printf("%d\n", strcmp(str5, str6));  // Returns 0 (the strings are equal)

// Compare str1 and str3, and print the result
printf("%d\n", strcmp(str5, str7));  // Returns -4 (the strings are not equal)
  
  return 0;
}
