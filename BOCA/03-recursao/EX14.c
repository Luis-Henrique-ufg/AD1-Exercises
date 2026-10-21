#include <stdio.h>
#include <string.h>

void fibonacci(int n, int resultado[]);
void fatorar(int n);
int dividir_bigint(int A[], int len, int divisor, int Resultado[], int *resto);
void somar_bigint(int A[], int B[], int Resultado[], int tamanho);
void imprimir_bigint(int A[], int tamanho);

int main() {
  int k;
  scanf("%d", &k);

  int n[100];
  int A[100];
  int Resultado[100];

  for (int i = 0; i < k; i++) {
    scanf("%d", &n[i]);
  }

  for (int i = 0; i < k; i++) {
    int fib_resultado[25];
    
    fibonacci(n[i], fib_resultado);
    imprimir_bigint(fib_resultado,25);
    putchar('\n');
  }

  return 0;
}

void fibonacci(int n, int resultado[]) {
  int anterior[25] = {0}, atual[25] = {0}, proximo[25] = {0};

  anterior[0] = 1;
  atual[0] = 1;

  if (n == 0){
    resultado[0] = 0;
    return;
  }

  if (n == 1 || n == 2){
    memcpy(resultado, atual, 25 * sizeof(int));
    return;
  }


  for (int i = 3; i <= n; i++) {
    somar_bigint(anterior, atual, proximo, 25);

    memcpy(anterior, atual, 25 * sizeof(int));
    memcpy(atual, proximo, 25 * sizeof(int));
  }

    memcpy(resultado, atual, 25 * sizeof(int));

}

void fatorar(int n) {

  while (n % 2 == 0) {
    printf("2 ");
    n /= 2;
  }

  for (int i = 3; i * i <= n; i += 2) {
    while (n % i == 0) {
      printf("%d ", i);
      n /= i;
    }
  }

  if (n > 2) {
    printf("%d ", n);
  }
}

int dividir_bigint(int A[], int len, int divisor, int Resultado[], int *resto) {
  int resto_atual = 0;

  for (int i = len - 1; i >= 0; i--) {
    int numero_atual = (resto_atual * 10) + A[i];

    Resultado[i] = numero_atual / divisor;
    resto_atual = numero_atual % divisor;
  }
  return *resto = resto_atual;
}

void somar_bigint(int A[], int B[], int Resultado[], int tamanho) {
  int vai_um = 0;
  int soma = 0;

  for (int i = 0; i <= tamanho - 1; i++) {
    soma = A[i] + B[i] + vai_um;
    Resultado[i] = soma % 10;
    vai_um = soma / 10;
  }
}

void imprimir_bigint(int A[], int tamanho)
{
  int i = tamanho - 1;

  while (i >= 0 && A[i] == 0){
    i--;
  }

  if (i < 0){
    printf("0");
    return;
  }

  for (; i >= 0; i--){
    printf("%d", A[i]);
  }
}

void 


/*
Não funciona para as entradas que o programa exige:

Entrada
4
3
4
5
6
Saída
2
3
2 3
2 2 2
*/