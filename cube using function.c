#include <stdio.h>

int cube(int num) {
    return num * num * num;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = cube(number);
    printf("Cube of %d is %d\n", number, result);
    
    return 0;
}
