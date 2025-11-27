#include <stdio.h>

int main() {
    int m, n;

    // Get matrix dimensions from the user
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n]; // Original matrix
    int transpose[n][m]; // Transposed matrix

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Compute the transpose
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transposed matrix
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
