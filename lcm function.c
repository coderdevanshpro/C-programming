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

int lcm(int num1, int num2) {
    int gcdValue = gcd(num1, num2);
    int lcmValue = (num1 * num2) / gcdValue;
    return lcmValue;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = lcm(num1, num2);
    printf("The LCM of %d and %d is %d\n", num1, num2, result);

    return 0;
}
