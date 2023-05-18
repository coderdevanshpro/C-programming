#include <stdio.h>
#include <string.h>

void removeFirstOccurrence(char str[], char ch) {
    int i, j = 0;
    int length = strlen(str);
    for (i = 0; i < length; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    char ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to remove: ");
    scanf("%c", &ch);
    removeFirstOccurrence(str, ch);
    printf("String after removing first occurrence of %c: %s\n", ch, str);
    return 0;
}
