#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = sumOfNaturalNumbers(n);
    printf("Sum of natural numbers between 1 and %d is %d\n", n, result);

    return 0;
}
