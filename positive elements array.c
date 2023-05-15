#include <stdio.h>

int main() {
    int s;
    
    printf("Enter the size of the array: ");
    scanf("%d", &s);
    
    int a[s];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < s; i++) {
       
        scanf("%d", &a[i]);
    }
    
    printf("Elements in the array:\n");
    for (int i = 0; i < s; i++) {
        if(a[i]>0)
        printf("%d ", a[i]);
    }
    
    return 0;
}
