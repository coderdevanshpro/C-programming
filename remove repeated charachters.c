#include <stdio.h>
#include <string.h>

void removeRepeatedCharacters(char str[]) {
    int count[256] = {0}; // Assuming ASCII characters
    int i, j = 0;
    int length = strlen(str);

    for (i = 0; i < length; i++) {
        if (count[str[i]] == 0) {
            count[str[i]] = 1;
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    removeRepeatedCharacters(str);
    printf("String after removing repeated characters: %s\n", str);
    return 0;
}
