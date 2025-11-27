/*Repeat task until a particular condition is met
Condition is tested before entering the loop
Number of operations (iterations) are unknown
Flow chart 
Syntax
while(condition) // logic condition
{
	Statements ;
}

Don't use floating point variables in loop control
What if the condition is empty while(1){ statement(s) }*/
#include <stdio.h>

int main() {
    int i = 1; // Initialize a counter variable

    // Loop continues as long as 'i' is less than or equal to 5
    while (i <= 5) {
        printf("%d\n", i); // Print the current value of 'i'
        i++;               // Increment 'i' for the next iteration
    }

    return 0; // Indicate successful program execution
}

