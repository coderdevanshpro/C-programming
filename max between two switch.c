#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(num1 > num2) {
        case 0:
            printf("%d is the maximum.\n", num2);
            break;
        case 1:
            printf("%d is the maximum.\n", num1);
            break;
        default:
            printf("The numbers are equal.\n");
    }

    return 0;
}
