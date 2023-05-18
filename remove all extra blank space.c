#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeExtraBlankSpaces(char str[]) {
    int length = strlen(str);
    int i, j;
    int isSpace = 0; // Flag to indicate if the previous character was a space

    for (i = 0, j = 0; i < length; i++) {
        if (!isspace(str[i])) {
            str[j++] = str[i]; // Copy non-space character
            isSpace = 0;
        } else {
            if (!isSpace) {
                str[j++] = ' '; // Replace consecutive spaces with a single space
                isSpace = 1;
            }
        }
    }

    str[j] = '\0'; // Null-terminate the modified string
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    removeExtraBlankSpaces(str);
    printf("String after removing extra blank spaces: %s\n", str);
    return 0;
}
