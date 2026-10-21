
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int numeros[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &numeros[i]);
  }

  for (int j = 0; j < n; j++) {
    bool ehprimo = 1;
    int num = numeros[j];

    for (int k = 2; k * k < num; k++) {
      if (num % k == 0) {
        ehprimo = 0;
        break;
      }
    }
    ehprimo ? printf("primo\n") : printf("composto\n");
  }
  return 0;
}