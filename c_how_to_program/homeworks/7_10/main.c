#include <stdio.h>

int main()
{
    long value1 = 200000;
    long value2;
    long *lPtr;

    lPtr = &value1;

    printf("*lPtr = %ld\n", *lPtr);

    value2 = *lPtr;

    printf("value2 = %ld\n", value2);
    printf("value1 = %ld\n", value1);

    printf("\nAddress of lPtr is %p", lPtr);
    printf("\nAddress of value1 is %p", &value1);

    return 0;
}
