#include <stdio.h>
#include <string.h>

void multiplicar_grandes(const char *num1, const char *num2);

int main(void) {
  int t;
  scanf("%d", &t);

  char num1[100], num2[100];

  for (int k = 0; k < t; k++) {
    scanf("%s%s", num1, num2);
    multiplicar_grandes(num1, num2);
  }

  return 0;
}

void multiplicar_grandes(const char *num1, const char *num2) {
  int len1 = strlen(num1);
  int len2 = strlen(num2);

  // Se um dos números for 0, o resultado é 0
  if ((len1 == 1 && num1[0] == '0') || (len2 == 1 && num2[0] == '0')) {
    printf("0\n");
    return;
  }

  // Vetor para armazenar o resultado (tamanho máximo de len1 + len2)
  int resultado[85] = {0};

  for (int i = len1 - 1; i >= 0; i--) {
    for (int j = len2 - 1; j >= 0; j--) {
      int mul = (num1[i] - '0') * (num2[j] - '0');
      int p1 = i + j;
      int p2 = i + j + 1;

      int soma = mul + resultado[p2];
      resultado[p2] = soma % 10;
      resultado[p1] += soma / 10;
    }
  }

  // Imprime o resultado ignorando zeros à esquerda
  int i = 0;
  while (i < len1 + len2 && resultado[i] == 0) {
    i++;
  }

  while (i < len1 + len2) {
    printf("%d", resultado[i]);
    i++;
  }
  printf("\n");
}
