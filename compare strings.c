#include <stdio.h>

int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0')
            return 0;
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    int result = stringCompare(str1, str2);
    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("First string is lexicographically smaller than the second string.\n");
    else
        printf("First string is lexicographically larger than the second string.\n");
    return 0;
}
