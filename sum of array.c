#include <stdio.h>

int main() {
    int s,sum;
    
    printf("Enter the size of the array: ");
    scanf("%d", &s);
    
    int a[s];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < s; i++) {
       
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
    
    printf("Elements in the array:\n");
    
        printf("%d ", sum);
    
    
    return 0;
}
