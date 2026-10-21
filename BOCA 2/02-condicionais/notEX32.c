/* Algorimo ordena 3 valores reais de entrada*/

#include <stdio.h>

int main() {
  float a, b, c;
  if (scanf("%f %f %f", &a, &b, &c) != 3) {
    return 1;
  }

  float temp;

  if (a > b) {temp = a; a = b; b = temp;}
  if (b > c) {temp = b; b = c; c = temp;}
  if (a > b) {temp = a; a = b; b = temp;}

  printf("%.2f %.2f %.2f", a, b, c);

  return 0;
  
}