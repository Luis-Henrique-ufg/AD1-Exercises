/* Imprime todos os números pares de 0-100*/
#include <stdio.h>

int main(void) {
  int a, b;

  for (a = 0, b = 0; a + b <= 50; a++, b++) {
    printf("%3d\n", a + b);
  }
  return 0;
}