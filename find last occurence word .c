#include <stdio.h>
#include <string.h>

int findLastOccurrenceOfWord(char str[], char word[]) {
    int i, j;
    int length1 = strlen(str);
    int length2 = strlen(word);
    int lastIndex = -1;

    for (i = 0; i <= length1 - length2; i++) {
        for (j = 0; j < length2; j++) {
            if (str[i + j] != word[j]) {
                break;
            }
        }
        if (j == length2) {
            lastIndex = i; // Word found at index i
        }
    }
    return lastIndex;
}

int main() {
    char str[100];
    char word[100];
    printf("Enter a string: ");
    gets(str);
    printf("Enter the word to search: ");
    gets(word);
    int index = findLastOccurrenceOfWord(str, word);
    if (index != -1) {
        printf("Last occurrence of '%s' found at index %d\n", word, index);
    } else {
        printf("'%s' not found in the string\n", word);
    }
    return 0;
}
