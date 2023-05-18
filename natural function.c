#include <stdio.h>

void printNaturalNumbers(int n) {
    int i;
    printf("Natural numbers between 1 and %d are: ", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printNaturalNumbers(n);

    return 0;
}
