#include <stdio.h>

int gcd(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    return num1;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);
    printf("The GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}
