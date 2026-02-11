#include <stdio.h>
#include <math.h>

int main() {
    float base, height, area;
    
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    
    // Calculate area using formula: Area = (base * height) / 2
    area = (base * height) / 2.0;
    
    printf("Area of the triangle: %.2f\n", area);
    
    return 0;
} 