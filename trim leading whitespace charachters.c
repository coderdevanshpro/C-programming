#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trimLeadingWhiteSpace(char str[]) {
    int length = strlen(str);
    int i, j;

    for (i = 0; i < length && isspace(str[i]); i++) {
        // Skip leading white space characters
    }

    if (i > 0) {
        // Shift characters to the left to remove leading white space
        for (j = 0; j < length - i; j++) {
            str[j] = str[j + i];
        }
        str[j] = '\0'; // Null-terminate the trimmed string
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    trimLeadingWhiteSpace(str);
    printf("String after trimming leading white space: %s\n", str);
    return 0;
}
