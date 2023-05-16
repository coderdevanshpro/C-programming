#include <stdio.h>

int main() {
    int rows1, columns1, rows2, columns2, i, j, k;

    printf("Enter the number of rows for matrix 1: ");
    scanf("%d", &rows1);

    printf("Enter the number of columns for matrix 1: ");
    scanf("%d", &columns1);

    printf("Enter the number of rows for matrix 2: ");
    scanf("%d", &rows2);

    printf("Enter the number of columns for matrix 2: ");
    scanf("%d", &columns2);

    if (columns1 != rows2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int matrix1[rows1][columns1], matrix2[rows2][columns2], product[rows1][columns2];

    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < columns2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Multiply matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns2; j++) {
            product[i][j] = 0;
            for (k = 0; k < columns1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
