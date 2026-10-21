#include <stdio.h>

// Função auxiliar para inverter um número
int inverter(int num) {
  int inv = 0;
  while (num > 0) {
    inv = inv * 10 + (num % 10);
    num /= 10;
  }
  return inv;
}

int main(void) {
  int x, y;

  // while garante que funcionará mesmo se o BOCA passar vários testes
  while (scanf("%d %d", &x, &y) == 2) {
    int inv_x = inverter(x);
    int inv_y = inverter(y);

    if (inv_x > inv_y) {
      printf("%d\n", inv_x);
    } else {
      printf("%d\n", inv_y);
    }
  }

  return 0;
}
