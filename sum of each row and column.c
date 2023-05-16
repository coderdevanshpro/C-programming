#include <stdio.h>

int main() {
    int rows, columns, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix[rows][columns];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int rowSum[rows] = {0};
    int columnSum[columns] = {0};

    // Calculate the sum of each row and column
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            rowSum[i] += matrix[i][j];
            columnSum[j] += matrix[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    printf("Sum of each column:\n");
    for (j = 0; j < columns; j++) {
        printf("Column %d: %d\n", j + 1, columnSum[j]);
    }

    return 0;
}
