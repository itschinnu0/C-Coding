#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;

    // Outer loop
    for (i = 0; i < 3; i++) {
        // Inner loop
        for (j = 0; j < 3; j++) {
            printf("i = %d, j = %d\n", i, j);

            // If i and j are both 1, jump to the end_loops label
            if (i == 1 && j == 1) {
                goto end_loops;
            }
        }
    }

end_loops: // This is the label
    printf("Exited loops using goto.\n");

    return 0;
}
