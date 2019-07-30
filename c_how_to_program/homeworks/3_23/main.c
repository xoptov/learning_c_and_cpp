#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 10) {
        if (i < 10) {
            printf("%d   ", i);
        } else {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
