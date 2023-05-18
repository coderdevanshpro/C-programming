#include <stdio.h>
#include <string.h>

int countOccurrencesOfWord(char str[], char word[]) {
    int i, j;
    int length1 = strlen(str);
    int length2 = strlen(word);
    int count = 0;

    for (i = 0; i <= length1 - length2; i++) {
        for (j = 0; j < length2; j++) {
            if (str[i + j] != word[j]) {
                break;
            }
        }
        if (j == length2) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    char word[100];
    printf("Enter a string: ");
    gets(str);
    printf("Enter the word to count: ");
    gets(word);
    int occurrenceCount = countOccurrencesOfWord(str, word);
    printf("Number of occurrences of '%s': %d\n", word, occurrenceCount);
    return 0;
}
