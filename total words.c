#include <stdio.h>
#include <stdbool.h>

int countWords(char str[]) {
    int i = 0, wordCount = 0;
    bool isWord = false;
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            isWord = false;
        } else if (!isWord) {
            isWord = true;
            wordCount++;
        }
        i++;
    }
    return wordCount;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int wordCount = countWords(str);
    printf("Number of words: %d\n", wordCount);
    return 0;
}
