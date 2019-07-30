#include <stdio.h>

int main()
{
    float galons = 0.0, totalGalons = 0.0;
    unsigned int miles = 0, totalMiles = 0;

    printf("Введите расход бензина (-1, если ввод звакончен): ");
    scanf("%f", &galons);
    totalGalons += galons;

    while (galons != -1) {
        printf("Введите пройденный путь: ");
        scanf("%d", &miles);
        totalMiles += miles;

        if (galons)
            printf("Для этой заправки получено миль/галлон %f\n\n", (float)miles / galons);

        printf("Введите расход бензина (-1, если ввод звакончен): ");
        scanf("%f", &galons);
        totalGalons += galons;
    }


    if (totalGalons)
        printf("Среднее число миль/галлон %f\n", (float)totalMiles / totalGalons);

    return 0;
}
