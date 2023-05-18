#include <stdio.h>
#include <string.h>

void removeFirstOccurrenceOfWord(char str[], char word[]) {
    int i, j;
    int length1 = strlen(str);
    int length2 = strlen(word);

    for (i = 0; i <= length1 - length2; i++) {
        for (j = 0; j < length2; j++) {
            if (str[i + j] != word[j]) {
                break;
            }
        }
        if (j == length2) {
            // Shift characters to the left to overwrite the word
            for (; i + j <= length1; i++) {
                str[i] = str[i + length2];
            }
            break;
        }
    }
}

int main() {
    char str[100];
    char word[100];
    printf("Enter a string: ");
    gets(str);
    printf("Enter the word to remove: ");
    gets(word);
    removeFirstOccurrenceOfWord(str, word);
    printf("String after removing first occurrence of '%s': %s\n", word, str);
    return 0;
}
