#include <stdio.h>

int main() {
    int size, i, j;

    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is upper triangular
    int isUpperTriangular = 1;
    for (i = 1; i < size; i++) {
        for (j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                isUpperTriangular = 0;
                break;
            }
        }
        if (!isUpperTriangular) {
            break;
        }
    }

    if (isUpperTriangular) {
        printf("The matrix is upper triangular.\n");
    } else {
        printf("The matrix is not upper triangular.\n");
    }

    return 0;
}
