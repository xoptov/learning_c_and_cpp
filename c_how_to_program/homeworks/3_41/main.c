#include <stdio.h>

int main()
{
    int x = 1;

    while (x) {
        x *= 2;
        printf("%d\n", x);
    }
}