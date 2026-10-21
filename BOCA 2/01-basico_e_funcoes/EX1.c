/* Program que calcula a quantidade de batimentos cadiacos de uma pessoa foi
 * realizado dia 14/08 */

#include <stdio.h>

#define ANO 365.25

int main(void) {
  int idade;
  int dias;

  scanf("%d", &idade);
  dias = idade * ANO * 24 * 60 * 60;

  float batimentos = dias;

  printf("O CORACAO BATEU %.2f VEZES\n", batimentos);

  return 0;
}