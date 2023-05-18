#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int i, j, start, end;
    char temp;
    int length = strlen(str);

    // Reverse the entire string
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Reverse individual words
    i = 0;
    while (i < length) {
        while (str[i] == ' ') {
            i++; // Skip spaces
        }
        start = i; // Start of word
        while (str[i] != ' ' && str[i] != '\0') {
            i++; // Move to the end of word
        }
        end = i - 1; // End of word

        // Reverse the word
        for (j = start, i = end; j < i; j++, i--) {
            temp = str[j];
            str[j] = str[i];
            str[i] = temp;
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    reverseWords(str);
    printf("Reversed words: %s\n", str);
    return 0;
}
