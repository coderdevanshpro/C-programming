#include <stdio.h>

int main() {
    int size, i, j, sum = 0;

    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the upper triangular matrix
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of the upper triangular matrix: %d\n", sum);

    return 0;
}
