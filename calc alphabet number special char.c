#include <stdio.h>

void countCharacters(char str[], int* alphabets, int* digits, int* specialChars) {
    int i = 0;
    *alphabets = *digits = *specialChars = 0;
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            (*alphabets)++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            (*digits)++;
        } else {
            (*specialChars)++;
        }
        i++;
    }
}

int main() {
    char str[100];
    int alphabets, digits, specialChars;
    printf("Enter a string: ");
    gets(str);
    countCharacters(str, &alphabets, &digits, &specialChars);
    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);
    return 0;
}
