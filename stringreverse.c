#include <stdio.h>
#include <string.h>
int main() {
	char str[100];
	printf("Enter a string:");
	// read string
	scanf("%s", str);
    
	int length = strlen(str);
	for(int start =0, end=length-1; start<end; start++,end--) {
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;       
	}
  
	printf("The reverse of the string is \"%s\".\n", str);
	return 0;
}
