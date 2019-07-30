#include <stdio.h>

int main()
{
    unsigned int a = 3;

    printf("%s\n\n", "A\tA+3\tA+4\tA+6");

    while (a <= 15) {
        printf("%d\t%d\t%d\t%d\n", a, a+2, a+4, a+6);
        a +=3;
    }

    return 0;
}
