#include <stdio.h>

int main()
{
    unsigned int counter = 0, number, largest = 0;

    while (counter++ < 10) {
        printf("%s", "Введите количество проданных товаров: ");
        scanf("%d", &number);

        if (largest < number) {
            largest = number;
        }
    }

    printf("Наибольшее кол-во проданных товаров: %d\n", largest);

    return 0;
}
