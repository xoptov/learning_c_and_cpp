#include <stdio.h>

int main()
{
    int hours, overwork;
    float rate, payment;

    printf("%s", "Введите # отработанных часов (-1, если ввод закончен): ");
    scanf("%d", &hours);

    while(hours != -1) {
        printf("%s", "Введите почасовой тариф работника ($00.00): ");
        scanf("%f", &rate);

        overwork = hours - 40;

        if (overwork > 0) {
            payment = 40 * rate + overwork * rate * 1.5;
        } else {
            payment = hours * rate;
        }

        printf("Зарплата составляет $%.2f\n\n", payment);

        printf("%s", "Введите # отработанных часов (-1, если ввод закончен): ");
        scanf("%d", &hours);
    }

    return 0;
}
