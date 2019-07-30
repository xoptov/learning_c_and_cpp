#include <stdio.h>

int main()
{
  unsigned int binary, divisor = 1, position_divisor = 10, decimal_weight = 1, decimal = 0, position_value;

  printf("Введите двоичное число вида 1001011: ");
  scanf("%d", &binary);

  while (divisor <= binary) {

    position_value = binary % position_divisor / divisor;
    decimal += position_value * decimal_weight;
    
    position_divisor *= 10;
    divisor *= 10;
    decimal_weight *= 2;
  }

  printf("Десятичное число %d\n", decimal);
  
  return 0;
}
