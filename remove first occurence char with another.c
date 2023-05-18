#include <stdio.h>
#include <string.h>

void replaceFirstOccurrence(char str[], char oldChar, char newChar) {
    int i;
    int length = strlen(str);
    for (i = 0; i < length; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
            break;
        }
    }
}

int main() {
    char str[100];
    char oldChar, newChar;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the character to replace: ");
    scanf("%c", &oldChar);
    getchar(); // Read the newline character
    printf("Enter the new character: ");
    scanf("%c", &newChar);
    replaceFirstOccurrence(str, oldChar, newChar);
    printf("String after replacing first occurrence of %c with %c: %s\n", oldChar, newChar, str);
    return 0;
}
