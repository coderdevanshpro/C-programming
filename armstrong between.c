#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, digits = 0, result = 0;
    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    // Calculate result
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    if (result == num)
        return 1; // Armstrong number
    else
        return 0; // Not an Armstrong number
}

void printArmstrongNumbers(int start, int end) {
    int i;
    printf("Armstrong numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; i++) {
        if (isArmstrong(i))
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

    printArmstrongNumbers(start, end);

    return 0;
}
