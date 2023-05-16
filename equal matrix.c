#include <stdio.h>

int main() {
    int rows1, columns1, rows2, columns2, i, j;

    printf("Enter the number of rows for matrix 1: ");
    scanf("%d", &rows1);

    printf("Enter the number of columns for matrix 1: ");
    scanf("%d", &columns1);

    printf("Enter the number of rows for matrix 2: ");
    scanf("%d", &rows2);

    printf("Enter the number of columns for matrix 2: ");
    scanf("%d", &columns2);

    if (rows1 != rows2 || columns1 != columns2) {
        printf("Matrices are not equal!\n");
        return 0;
    }

    int matrix1[rows1][columns1], matrix2[rows2][columns2];

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

    // Check if matrices are equal
    int equal = 1;
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns1; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                equal = 0;
                break;
            }
        }
        if (!equal) {
            break;
        }
    }

    if (equal) {
        printf("Matrices are equal!\n");
    } else {
        printf("Matrices are not equal!\n");
    }

    return 0;
}
