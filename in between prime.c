#include <stdio.h>

int checkPrime(int num) {
    int i;
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

void printPrimes(int start, int end) {
    int i;
    printf("Prime numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; i++) {
        if (checkPrime(i))
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
    
    printPrimes(start, end);
    
    return 0;
}
