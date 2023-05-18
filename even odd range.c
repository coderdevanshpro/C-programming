#include <stdio.h>

void printEvenOrOdd(int start, int end, int type) {
    int i;
    printf("The %s numbers between %d and %d are: ", (type == 1) ? "even" : "odd", start, end);
    for (i = start; i <= end; i++) {
        if (type == 1 && i % 2 == 0) {
            printf("%d ", i);
        } else if (type == 0 && i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end, type;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Enter 1 for even numbers or 0 for odd numbers: ");
    scanf("%d", &type);

    printEvenOrOdd(start, end, type);

    return 0;
}
