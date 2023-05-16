#include <stdio.h>

int main() {
    int size, i, element, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements in the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("Element %d found at index %d.\n", element, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}
