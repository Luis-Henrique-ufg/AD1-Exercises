#include <stdbool.h>
#include <stdio.h>

int main(void) {

  int n;
  scanf("%d", &n);

  /* Variáveis de controle. Me disseram que o register melhora o desempenho do loop*/
  register int i;
  register unsigned long long j;
  register unsigned long long d;

  unsigned long long numeros[n];

  for (i = 0; i < n; i++) {
    scanf("%llu", &numeros[i]);
  }


  for (j = 0; j < n; j++) {
    unsigned long long num = numeros[j];
    bool ehprimo = 1;

    if (num <= 1) {
      ehprimo = 0;
      
    } else {
      for (d = 2; d * d <= num; d++) {
        if (num % d == 0) {
          ehprimo = 0;
          break;
        }
      }
    }
    ehprimo ? printf("primo\n") : printf("composto\n");
  }

  return 0;
}

/*

*/