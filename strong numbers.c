#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int isStrong(int num) {
    int originalNum = num;
    int sum = 0;
    
    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    
    if (sum == originalNum)
        return 1; // Strong number
    else
        return 0; // Not a strong number
}

void printStrongNumbers(int start, int end) {
    int i;
    printf("Strong numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; i++) {
        if (isStrong(i))
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
    
    printStrongNumbers(start, end);
    
    return 0;
}
