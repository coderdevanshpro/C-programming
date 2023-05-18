#include <stdio.h>
#include <string.h>

int countOccurrences(char str[], char ch) {
    int i, count = 0;
    int length = strlen(str);
    for (i = 0; i < length; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    char ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character: ");
    scanf("%c", &ch);
    int count = countOccurrences(str, ch);
    printf("Occurrences of %c: %d\n", ch, count);
    return 0;
}
