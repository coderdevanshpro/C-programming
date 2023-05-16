#include <stdio.h>

int main() {
    int size, i, rotations;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size], temp;

    printf("Enter elements in the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of rotations: ");
    scanf("%d", &rotations);

    // Perform left rotation
    for (i = 0; i < rotations; i++) {
        temp = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }

    printf("Array after left rotation: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
