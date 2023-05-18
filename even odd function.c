#include <stdio.h>

int checkEvenOdd(int num) {
    if (num % 2 == 0)
        return 1; // Even
    else
        return 0; // Odd
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (checkEvenOdd(number))
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);
    
    return 0;
}
