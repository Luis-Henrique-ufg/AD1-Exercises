/* Programa que adiciona bônus ao salário de um vendedor*/

#include <stdio.h>

int main(void) {
  double salario;
  double vendas;

  printf("Salario = ");
  scanf("%lf", &salario);

  printf("Vendas = ");
  scanf("%lf", &vendas);

  if (vendas > 10000.0 && vendas <= 20000.0) {
    salario += (salario / 100) * 10;
  } else if (vendas > 20000.0 && vendas <= 30000.0) {
    salario += (salario / 100) * 15;
  } else if (vendas > 30000.0) {
    salario += (salario / 100) * 25;
  }
  printf("Salario final = %.2f\n", salario);

  return 0;
}