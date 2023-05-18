#include <stdio.h>
#include <string.h>

char findHighestFrequency(char str[]) {
    int count[256] = {0}; // Assuming ASCII characters
    int i, maxCount = 0;
    char highestFreqChar;

    int length = strlen(str);
    for (i = 0; i < length; i++) {
        count[str[i]]++;
        if (count[str[i]] > maxCount) {
            maxCount = count[str[i]];
            highestFreqChar = str[i];
        }
    }
    return highestFreqChar;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    char highestFreqChar = findHighestFrequency(str);
    printf("Highest frequency character: %c\n", highestFreqChar);
    return 0;
}
