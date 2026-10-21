#include <stdio.h>

int main(void) {

  int n1, n2, in1, in2;

  scanf("%d %d", &n1, &n2);

  in1 = n1 / 100;
  in1 += ((n1 / 10) % 10) * 10;
  in1 += (n1 % 10) * 100;
  in2 = n2 / 100;
  in2 += ((n2 / 10) % 10) * 10;
  in2 += (n2 % 10) * 100;

  if (in1 > in2)
    printf("%d\n", in1);
  else
    printf("%d\n", in2);
  return 0;
}