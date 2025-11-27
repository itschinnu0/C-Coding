#include <stdio.h>

int main() {
    char ch;

    // Prompt user for input
    printf("Enter a character: ");
    scanf(" %c", &ch); // Space before %c to consume any leftover newline from previous input

    // Check if it's a lowercase letter
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32; // Convert to uppercase
        printf("Converted to uppercase: %c\n", ch);
    } 
    // Check if it's an uppercase letter
    else if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; // Convert to lowercase
        printf("Converted to lowercase: %c\n", ch);
    } 
    // If not an alphabet
    else {
        printf("Character is not an alphabet. No conversion performed: %c\n", ch);
    }

    return 0;
}
