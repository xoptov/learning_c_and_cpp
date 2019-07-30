#include <stdio.h>

#define SIZE 9

int main()
{
    int result[SIZE] = {0};
    int amount;
    int i = 0;

    for (i = 0; i < SIZE; i++) {
        printf("Введите валовый сбыт за неделю продавца №%d: ", i + 1);
        scanf("%d", &amount);

        if (amount >= 201 && amount <= 299) {
            result[0]++;
        } else if (amount >= 300 && amount <= 399) {
            result[1]++;
        } else if (amount >= 400 && amount <= 499) {
            result[2]++;
        } else if (amount >= 500 && amount <= 599) {
            result[3]++;
        } else if (amount >= 600 && amount <= 699) {
            result[4]++;
        } else if (amount >= 700 && amount <= 799) {
            result[5]++;
        } else if (amount >= 800 && amount <= 899) {
            result[6]++;
        } else if (amount >= 900 && amount <= 999) {
            result[7]++;
        } else if (amount >= 1000) {
            result[8]++;
        }
    }

    printf("1. $201-$299 = %d\n", result[0]);
    printf("2. $300-$399 = %d\n", result[1]);
    printf("3. $400-$499 = %d\n", result[2]);
    printf("4. $500-$599 = %d\n", result[3]);
    printf("5. $600-$699 = %d\n", result[4]);
    printf("6. $700-$799 = %d\n", result[5]);
    printf("7. $800-$899 = %d\n", result[6]);
    printf("8. $900-$999 = %d\n", result[7]);
    printf("9. $1000 и более = %d\n", result[8]);

    return 0;
}