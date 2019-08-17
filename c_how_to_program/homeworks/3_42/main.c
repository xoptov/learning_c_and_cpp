#include <stdio.h>

int main()
{
    float radius, pi = 3.14159;
    
    printf("Please enter a radius: ");
    scanf("%f", &radius);

    printf("Entered radius: %.4f\n", radius);
    printf("Diameter: %.4f\n", radius * 2);
    printf("Perimeter: %.4f\n", 2 * pi * radius);
    printf("Area: %.4f\n", pi * (radius * radius));
}