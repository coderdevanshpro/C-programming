#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = size1 + size2;

    int arr3[size3];

    printf("Array 1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    int i, j, k;
    i = j = k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        arr3[k++] = arr1[i++];
    }

    while (j < size2) {
        arr3[k++] = arr2[j++];
    }

    printf("Merged array: ");
    for (int i = 0; i < size3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
