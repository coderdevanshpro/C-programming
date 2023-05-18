#include <stdio.h>
#include <string.h>

void findAllOccurrencesOfWord(char str[], char word[]) {
    int i, j;
    int length1 = strlen(str);
    int length2 = strlen(word);
    int found = 0;

    for (i = 0; i <= length1 - length2; i++) {
        for (j = 0; j < length2; j++) {
            if (str[i + j] != word[j]) {
                break;
            }
        }
        if (j == length2) {
            printf("Word found at index %d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Word not found in the string\n");
    }
}

int main() {
    char str[100];
    char word[100];
    printf("Enter a string: ");
    gets(str);
    printf("Enter the word to search: ");
    gets(word);
    findAllOccurrencesOfWord(str, word);
    return 0;
}
