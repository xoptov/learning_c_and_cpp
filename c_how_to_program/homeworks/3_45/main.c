#include <stdio.h>

int main()
{
    unsigned int a, b, c;

    printf("%s", "Введите три стороны треугольника: ");
    scanf("%u%u%u", &a, &b, &c);

    if (a * a != b * b + c * c) {
        if (b * b != a * a + c * c) {
            if (c * c != a * a + b * b) {
                printf("%s", "Введённые стороны не могут быть сторонами прямоугольным треугольником\n");
                return 1;
            }
        }
    }

    printf("%s", "Введенные стороный могут быть сторонами прямоугольного треугольника\n");

    return 0;
}