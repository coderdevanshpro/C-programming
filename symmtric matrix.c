#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int rows, columns, i, j;
    int matrix[MAX_SIZE][MAX_SIZE];
    int isSymmetric = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (rows != columns) {
        isSymmetric = 0;
    } else {
        for (i = 0; i < rows; i++) {
            for (j = 0; j < columns; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    isSymmetric = 0;
                    break;
                }
            }
            if (!isSymmetric) {
                break;
            }
        }
    }

    if (isSymmetric) {
        printf("The matrix is a symmetric matrix.\n");
    } else {
        printf("The matrix is not a symmetric matrix.\n");
    }

    return 0;
}
