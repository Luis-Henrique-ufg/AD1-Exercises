/* Esse programa recebe um limitador de resultado e uma expressão de soma ou de
 * multiplicação entre dois inteiros positivos. Ele vai determinar se ocorrerá,
 * ou não, overflow naquele computador, ou seja, se o resultado vai execer o
 * limitador*/
#include <stdio.h>

int main(void) {
  int max, x, y, r;
  char caractere;

  scanf("%d", &max);
  scanf("%d %c %d", &x, &caractere, &y);

  if (caractere == 'x') {
    r = x * y;
  } else if (caractere == '+') {
    r = x + y;
  }

  if (r > max) {
    printf("OVERFLOW");
  } else {
    printf("NO OVERFLOW");
  }

  return 0;
}