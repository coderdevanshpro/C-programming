#include <stdio.h>
#include <string.h>

void countCharacterFrequency(char str[]) {
    int count[256] = {0}; // Assuming ASCII characters
    int i;

    int length = strlen(str);
    for (i = 0; i < length; i++) {
        count[str[i]]++;
    }

    printf("Character Frequency\n");
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("%c \t\t %d\n", i, count[i]);
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    countCharacterFrequency(str);
    return 0;
}
