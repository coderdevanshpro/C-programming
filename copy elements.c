#include <stdio.h>

int main() {
    int source[] = {5, 2, 9, 1, 7, 6};
    int size = sizeof(source) / sizeof(source[0]);

    int destination[size];

    for (int i = 0; i < size; i++) {
        destination[i] = source[i];
    }

    printf("Copied array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}
