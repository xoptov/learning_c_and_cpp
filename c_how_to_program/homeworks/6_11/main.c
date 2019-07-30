#include <stdio.h>

#define SIZE 10

int main()
{
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int pass;
    int i;
    int hold;

    puts("Data items in original order");

    for (i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }

    for (pass = 1; pass < SIZE; pass++) {
        for (i = 0, hold = 0; i < SIZE - pass; i++) {
            if (a[i] > a[i + 1]) {
                hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
        if (!hold) {
            break;
        }
    }

    puts("\nData items in ascending order");

    for (i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }

    puts("");

    return 0;
}