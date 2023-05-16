#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int rows, columns, i, j;
    int matrix[MAX_SIZE][MAX_SIZE];
    int countZeros = 0, countNonZeros = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0) {
                countZeros++;
            } else {
                countNonZeros++;
            }
        }
    }

    if (countZeros > countNonZeros) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}
