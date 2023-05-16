#include <stdio.h>

int main() {
    int arr[10] = {5, 2, 9, 1, 7, 6};
    int size = 6;
    int element = 8;
    int position = 3;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (position < 0 || position > size) {
        printf("Invalid position to insert.\n");
        return 0;
    }

    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    size++;

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
