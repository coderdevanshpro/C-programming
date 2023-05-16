#include <stdio.h>

int main() {
    int arr[] = {2, 3, 2, 5, 6, 5, 3, 7, 8, 8, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int frequency[size];
    int visited = -1;

    for (int i = 0; i < size; i++) {
        int count = 1;

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                frequency[j] = visited;
            }
        }

        if (frequency[i] != visited) {
            frequency[i] = count;
        }
    }

    printf("Element\tFrequency\n");
    for (int i = 0; i < size; i++) {
        if (frequency[i] != visited) {
            printf("%d\t%d\n", arr[i], frequency[i]);
        }
    }

    return 0;
}
