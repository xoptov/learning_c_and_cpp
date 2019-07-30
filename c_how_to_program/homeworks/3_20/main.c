#include <stdio.h>

int main()
{
    float principal, rate;
    unsigned int days;

    printf("%s", "Введите основную сумму ссуды (-1, если ввод закончен): $");
    scanf("%f", &principal);

    while (principal != -1) {
        printf("%s", "Введите процентную ставку: ");
        scanf("%f", &rate);

        printf("%s", "Введите срок ссуды в днях: ");
        scanf("%d", &days);

        printf("Выплаты по простым процентам составляют: $%.2f\n\n", principal * rate * days / 365);

        printf("%s", "Введите основную сумму ссуды (-1, если ввод закончен): $");
        scanf("%f", &principal);
    }

    return 0;
}
