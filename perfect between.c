#include <stdio.h>

int isPerfect(int num) {
    int i, sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        return 1; // Perfect number
    else
        return 0; // Not a perfect number
}

void printPerfectNumbers(int start, int end) {
    int i;
    printf("Perfect numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; i++) {
        if (isPerfect(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printPerfectNumbers(start, end);

    return 0;
}
