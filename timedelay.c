#include <stdio.h>
#include <unistd.h> // For sleep() on POSIX systems
// #include <windows.h> // Uncomment for Windows, and comment out unistd.h

int main() {
    for (int i = 5; i <= 50; i=i+5) 
    {
        printf("%d\t", i);
        fflush(stdout); // Ensures the output is displayed immediately
        sleep(2); // Pause for 1 second
    }
       printf("\n");
    return 0;
}
