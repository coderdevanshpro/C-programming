#include <stdio.h>

float findDiameter(float radius) {
    return 2 * radius;
}

float findCircumference(float radius) {
    return 2 * 3.14159 * radius;
}

float findArea(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    float diameter = findDiameter(radius);
    float circumference = findCircumference(radius);
    float area = findArea(radius);
    
    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);
    
    return 0;
}
