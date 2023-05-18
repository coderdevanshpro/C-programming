#include <stdio.h>
#include <string.h>

char findLowestFrequency(char str[]) {
    int count[256] = {0}; // Assuming ASCII characters
    int i, minCount = 1 << 30; // Initialize minCount with a large value
    char lowestFreqChar;

    int length = strlen(str);
    for (i = 0; i < length; i++) {
        count[str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] < minCount && count[i] != 0) {
            minCount = count[i];
            lowestFreqChar = i;
        }
    }
    return lowestFreqChar;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    char lowestFreqChar = findLowestFrequency(str);
    printf("Lowest frequency character: %c\n", lowestFreqChar);
    return 0;
}
