#include <stdio.h>

void countVowelsAndConsonants(char str[], int* vowels, int* consonants) {
    int i = 0;
    *vowels = *consonants = 0;
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        i++;
    }
}

int main() {
    char str[100];
    int vowels, consonants;
    printf("Enter a string: ");
    gets(str);
    countVowelsAndConsonants(str, &vowels, &consonants);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
