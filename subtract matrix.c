#include <stdio.h>

int main() {
    int rows, columns, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix1[rows][columns], matrix2[rows][columns], difference[rows][columns];

    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Subtract two matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("Difference of the matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}
