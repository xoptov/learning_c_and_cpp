#include <stdio.h>

int main()
{
    float profit = 0.0;

    printf("%s", "Введите сумму продаж  в долларах (-1, если ввод закончился): ");
    scanf("%f", &profit);

    while(profit != -1) {
        printf("Зарплата: %f\n", profit * 0.09 + 200);

        printf("%s", "Введите сумму продаж  в долларах (-1, если ввод закончился): ");
        scanf("%f", &profit);
    }

    return 0;
}
