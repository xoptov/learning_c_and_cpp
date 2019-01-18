#include <stdio.h>

#define SIZE 5

int main()
{
    unsigned int values[SIZE] = {2,3,4,5,6};
    unsigned int *vPtr;

    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", values[i]);
    }

    //vPtr = &values[0];
    vPtr = values;

    // Вывод элементов массива с использованием нотации указатель + смещение.
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", *(vPtr + i));
    }

    // Вывод элементов массива с использованием имя массива + смещение.
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", *(values + i));
    }

    // Вывод элементов массива с использованием индекса с указателем на массив.
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", vPtr[i]);
    }

    printf("%d\n", values[4]);
    printf("%d\n", *(values + 4));
    printf("%d\n", vPtr[4]);
    printf("%d\n", *(vPtr + 4));

    printf("\nAddress of (vPtr + 3) = %p and value is = %d\n", vPtr + 3, *(vPtr + 3));

    vPtr = &values[4];
    printf("\vPtr = &values[4] is %p, and after vPtr - 4 address is %p\n", vPtr, vPtr - 4);

    return 0;
}
