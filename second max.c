#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int secondMax = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] < max) {
            secondMax = arr[i];
        }
    }

    printf("Second largest element: %d\n", secondMax);

    return 0;
}
