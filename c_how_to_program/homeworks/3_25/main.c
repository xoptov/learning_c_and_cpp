#include <stdio.h>

int main()
{
    unsigned int i = 1;

    printf("%s\n\n", "N\t10*N\t100*N\t1000*N");

    while (i <= 10) {
        printf("%d\t%d\t%d\t%d\n", i, i * 10, i * 100, i * 1000);
        i++;
    }

    return 0;
}
