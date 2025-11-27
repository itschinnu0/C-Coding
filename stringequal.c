#include <stdio.h>
#include <string.h> // Required for strcmp()

int main() {
    char string1[] = "hello";
    char string2[] = "hello";
    char string3[] = "world";

    if (strcmp(string1, string2) == 0) {
        printf("String1 and String2 are equal.\n");
    } else {
        printf("String1 and String2 are not equal.\n");
    }

    if (strcmp(string1, string3) == 0) {
        printf("String1 and String3 are equal.\n");
    } else {
        printf("String1 and String3 are not equal.\n");
    }

    return 0;
}
