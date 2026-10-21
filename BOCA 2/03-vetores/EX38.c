/*bubble sort*/
#include <stdio.h>

#define N 4

int main() {
  float vetor[N];

  for (int i = 0; i < N; i++) {
    if (scanf("%f", &vetor[i]) != 1) {
      return 1;
    }
  }

  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N - 1 - i; j++) {
      if (vetor[j] > vetor[j + 1]) {
        float temp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
      }
    }
  }
  for (int i = 0; i < N; i++) {
    if (i > 0){
      printf(", ");
    }
    printf("%.2f", vetor[i]);
  }
  putchar('\n');

  return 0;
}

/*
Lista com separador em C:

PARA cada item:
  SE não é o primeiro:
    imprima o separador
  imprima o item
imprima o "\n"
*/ 