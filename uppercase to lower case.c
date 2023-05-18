#include <stdio.h>

void toLowerCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    toLowerCase(str);
    printf("Lowercase string: %s\n", str);
    return 0;
}
