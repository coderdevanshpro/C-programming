#include <stdio.h>

int main() {
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements in the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reverse of the array: ");
    for (i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
