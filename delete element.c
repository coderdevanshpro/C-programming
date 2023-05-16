#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 7, 6};
    int size = 6;
    int position = 2;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (position < 0 || position >= size) {
        printf("Invalid position to delete.\n");
        return 0;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
