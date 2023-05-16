#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int countEven = 0;
    int countOdd = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }

    printf("Total even elements: %d\n", countEven);
    printf("Total odd elements: %d\n", countOdd);

    return 0;
}
