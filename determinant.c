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

    int determinant = 0;

    // Calculate the determinant
    if (size == 2) {
        determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    } else {
        for (i = 0; i < size; i++) {
            int subMatrix[size - 1][size - 1];
            int subMatrixRow, subMatrixCol;

            for (subMatrixRow = 0; subMatrixRow < size - 1; subMatrixRow++) {
                for (subMatrixCol = 0; subMatrixCol < size - 1; subMatrixCol++) {
                    if (subMatrixCol < i) {
                        subMatrix[subMatrixRow][subMatrixCol] = matrix[subMatrixRow + 1][subMatrixCol];
                    } else {
                        subMatrix[subMatrixRow][subMatrixCol] = matrix[subMatrixRow + 1][subMatrixCol + 1];
                    }
                }
            }

            determinant += (i % 2 == 0 ? 1 : -1) * matrix[0][i] * (subMatrix[0][0] * subMatrix[1][1] - subMatrix[0][1] * subMatrix[1][0]);
        }
    }

    printf("Determinant of the matrix: %d\n", determinant);

    return 0;
}
