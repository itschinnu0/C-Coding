#include<stdio.h>

int main()
{
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
    printf("%d\n", matrix[0][2]);  // Outputs 2
    
    int matrix1[2][3] = { {1, 4, 2}, {3, 6, 8} };
    matrix1[0][0] = 9;

    printf("%d\n", matrix1[0][0]);  // Now outputs 9 instead of 1
    
    int matrix2[2][3] = { {1, 4, 2}, {3, 6, 8} };

int i, j;
for (i = 0; i < 2; i++) {
  for (j = 0; j < 3; j++) {
    printf("%d\n", matrix2[i][j]);
  }
}
    return 0;
}
