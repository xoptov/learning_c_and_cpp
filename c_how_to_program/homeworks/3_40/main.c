#include <stdio.h>

int main()
{
    unsigned int x = 1, y = 1, max_x = 9;

    while (y <= 8) {
        x = 1;
        while (x <= max_x) {
            if ((y % 2 && x == max_x) || (y % 2 == 0 && x == 1)) {
                printf("%c", ' ');
            } else {
                printf("%c ", '*');
            }
            x++;
        }
        if (x % max_x) {
            printf("%c", '\n');
        }
        y++;
    }

    return 0;
}