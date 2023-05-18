#include <stdio.h>

int checkPrime(int num) {
    int i;
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int checkArmstrong(int num) {
    int originalNum, remainder, result = 0;
    originalNum = num;
    
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    
    if (result == num)
        return 1; // Armstrong
    else
        return 0; // Not Armstrong
}

int checkPerfect(int num) {
    int i, sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }
    
    if (sum == num)
        return 1; // Perfect
    else
        return 0; // Not Perfect
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (checkPrime(number))
        printf("%d is a prime number.\n", number);
    else if (checkArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else if (checkPerfect(number))
        printf("%d is a perfect number.\n", number);
    else
        printf("The number is neither prime, Armstrong, nor perfect.\n");
    
    return 0;
}
