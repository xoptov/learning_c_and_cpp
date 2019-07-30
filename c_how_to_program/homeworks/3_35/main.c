#include <stdio.h>

int main()
{
    unsigned int number = 0;

    while (number < 10000 || number > 100000) {
        printf("Введите 5-ти значное чило для проверки на полиндромность: ");
        scanf("%d", &number);
    }

    if ((number / 10000 == number % 10) && (number % 10000 / 1000 == number % 100 / 10)) {
        printf("Число %d является полиндромом.", number);
    } else {
        printf("Число %d НЕ является полиндромом.", number);
    }

    return 0;
}
