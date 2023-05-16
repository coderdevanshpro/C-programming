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

    // Perform right rotation
    for (i = 0; i < rotations; i++) {
        temp = arr[size - 1];
        for (int j = size - 1; j>0; j--) {
arr[j] = arr[j - 1];
}
arr[0] = temp;
}
  printf("Array after right rotation: ");
for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
}

return 0;

