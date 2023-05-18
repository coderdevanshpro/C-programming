#include <stdio.h>
#include <string.h>

void findAllOccurrences(char str[], char ch) {
    int i;
    int length = strlen(str);
    for (i = 0; i < length; i++) {
        if (str[i] == ch) {
            printf("Character %c found at index %d\n", ch, i);
        }
    }
}

int main() {
    char str[100];
    char ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character: ");
    scanf("%c", &ch);
    findAllOccurrences(str, ch);
    return 0;
}
