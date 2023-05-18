#include <stdio.h>
#include <string.h>

void removeLastOccurrence(char str[], char ch) {
    int i, j;
    int length = strlen(str);
    for (i = length - 1; i >= 0; i--) {
        if (str[i] == ch) {
            // Shift characters to the left to overwrite the occurrence
            for (j = i; j < length - 1; j++) {
                str[j] = str[j + 1];
            }
            str[length - 1] = '\0';
            break;
        }
    }
}

int main() {
    char str[100];
    char ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to remove: ");
    scanf("%c", &ch);
    removeLastOccurrence(str, ch);
    printf("String after removing last occurrence of %c: %s\n", ch, str);
    return 0;
}
