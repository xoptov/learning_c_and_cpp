#include <stdio.h>

int main()
{
  unsigned int n = 1, m = 100;

  while (n <= m) {
    if (n % 10) {
      printf("%c", '*');
    } else {
      printf("%c\n", '*');
    }
    n++;
  }
}
