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

    // Check if the matrix is lower triangular
    int isLowerTriangular = 1;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (matrix[i][j] != 0) {
                isLowerTriangular = 0;
                break;
            }
        }
        if (!isLowerTriangular) {
            break;
        }
    }

    if (isLowerTriangular) {
        printf("The matrix is lower triangular.\n");
    } else {
        printf("The matrix is not lower triangular.\n");
    }

    return 0;
}
