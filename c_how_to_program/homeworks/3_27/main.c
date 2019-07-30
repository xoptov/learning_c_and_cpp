#include <stdio.h>

int main()
{
    unsigned int n = 0, count, largest_1 = 0, largest_2 = 0;

    printf("%s", "Введите кол-во проданных товаров: ");
    scanf("%d", &count);

    while (n++ < 10) {
        if (count > largest_1) {
            largest_1 = count;
        } else if (count > largest_2) {
            largest_2 = count;
        }

        printf("Продавц продал товаров: %d\n\n", count);

        printf("%s", "Введите кол-во проданных товаров: ");
        scanf("%d", &count);
    }

    printf("Первое место по кол-ву проданных товаров: %d\n", largest_1);
    printf("Второе место по кол-ву проданных товаров: %d\n", largest_2);

    return 0;
}
