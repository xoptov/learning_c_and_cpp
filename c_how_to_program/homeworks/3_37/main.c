#include <stdio.h>

int main()
{
  unsigned int n = 0, m = 3000000;
  while (n <= m) {
    if (n / 1000000 && n % 1000000 == 0) {
      printf("%d\n", n);
    }
    n++;
    
  }
}
