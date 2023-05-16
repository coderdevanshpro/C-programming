#include <stdio.h>

int main() {
    int size, i, j = 0, k = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size], even[size], odd[size];

    printf("Enter elements in the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[j++] = arr[i];
        } else {
            odd[k++] = arr[i];
        }
    }

    printf("Even elements: ");
    for (i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements: ");
    for (i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
