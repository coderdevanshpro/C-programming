#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trimTrailingWhiteSpace(char str[]) {
    int length = strlen(str);
    int i;

    for (i = length - 1; i >= 0 && isspace(str[i]); i--) {
        // Skip trailing white space characters
    }

    str[i + 1] = '\0'; // Null-terminate the trimmed string
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    trimTrailingWhiteSpace(str);
    printf("String after trimming trailing white space: %s\n", str);
    return 0;
}
