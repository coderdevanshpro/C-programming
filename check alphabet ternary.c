#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? printf("The character is an alphabet.\n") : printf("The character is not an alphabet.\n");

    return 0;
}
