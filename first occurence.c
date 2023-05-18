#include <stdio.h>
#include <string.h>

int findFirstOccurrence(char str[], char ch) {
    int i;
    int length = strlen(str);
    for (i = 0; i < length; i++) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1; // If the character is not found
}

int main() {
    char str[100];
    char ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character: ");
    scanf("%c", &ch);
    int index = findFirstOccurrence(str, ch);
    if (index != -1) {
        printf("First occurrence of %c found at index %d\n", ch, index);
    } else {
        printf("Character %c not found in the string.\n", ch);
    }
    return 0;
}
