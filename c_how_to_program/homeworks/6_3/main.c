#include <stdio.h>

#define SIZE 10

int main()
{
    float fractions[SIZE] = {0};

    fractions[9] = 1.667;
    fractions[6] = 3.333;

    printf("%.2f %.2f\n", fractions[9], fractions[6]);

    for (int x = 0; x < SIZE; x++) {
        printf("fractions[%d] = %.2f\n", x, fractions[x]);
    }

    return 0;
}