#include <stdio.h>

int main()
{
    int account;
    float balance, spent, credit, limit;

    printf("%s", "Введите номер счёта (-1 если ввод закончен): ");
    scanf("%d", &account);

    while (account != -1) {
        printf("%s", "Введите начальный баланс: ");
        scanf("%f", &balance);

        printf("%s", "Введите общую сумму расходов: ");
        scanf("%f", &spent);

        printf("%s", "Введите общую сумму кредита: ");
        scanf("%f", &credit);

        printf("%s", "Введите предельный размер кредита: ");
        scanf("%f", &limit);

        if (balance + spent - credit > limit) {
            printf("Счёт: %d\n", account);
            printf("Предельный размер кредита: %.2f\n", credit);
            printf("Баланс: %.2f\n", balance + spent - credit);
            printf("%s", "Предельный размер кредита привышен.\n");
        }

        printf("%s", "Введите номер счёта (-1 если ввод закончен): ");
        scanf("%d", &account);
    }

    return 0;
}
