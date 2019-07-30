#include <stdio.h>

int main()
{
    unsigned int side, x, y = 0;

    printf("%s", "Введите размер стороны квадрата: ");
    scanf("%d", &side);

    if (side < 1)
        side = 1;

    if (side > 20)
        side = 20;

    while (y < side) {
        x = 0;
        while (x < side) {
            if (y == 0 || x == 0 || x == side-1 || y == side-1) {
                printf("%c", '*');
            } else {
                printf(" ");
            }
            x++;
        }
        printf("\n");
        y++;
    }

    return 0;
}
