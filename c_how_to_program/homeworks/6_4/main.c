#include <stdio.h>

#define SIZE 3

int main()
{
    int table[SIZE][SIZE];
    int i, j;

    //start c
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            table[i][j] = SIZE + SIZE;
        }
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("table[%d][%d] = %d\n", i, j, table[i][j]);
        }
    }

    //end c

    return 0;
}