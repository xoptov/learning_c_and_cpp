#include <stdio.h>

int main()
{
    float a, b, c;

    printf("%s", "Plase enter number for side A: ");
    scanf("%f", &a);

    printf("%s", "Plase enter number for side B: ");
    scanf("%f", &b);

    printf("%s", "Plase enter number for side C: ");
    scanf("%f", &c);

    if (a > 0 && b > 0 && c > 0) {
        printf("%s\n", "Entered numbers can be sides of rectangle");
    } else {
        printf("%s\n", "Entered numbers can not be sides of rectangle");
    }

    return 0;
}