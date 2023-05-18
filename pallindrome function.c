#include <stdio.h>

int isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;

    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    if (originalNum == reversedNum)
        return 1; // Palindrome number
    else
        return 0; // Not a palindrome number
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    return 0;
}
