#include <stdio.h>

int main()
{
  unsigned int num, count = 0, rewind = 0;

  printf("%s", "Введите целое число: ");
  scanf("%d", &num);

  rewind = num / 7;
  if (rewind) {
    count++;
    while (rewind >= 7) {
      rewind /= 7;
      count++;
    }
  }

  printf("В числе %d содержится %d цифр 7\n", num, count);
}
