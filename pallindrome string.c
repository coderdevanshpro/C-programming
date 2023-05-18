#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
