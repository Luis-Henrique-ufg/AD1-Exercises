#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int chute, num;

  scanf("%d", &num);
  scanf("%d", &chute);

  system("CLS");

  for (chute = 0; chute != num;) {
    scanf("%d", &num);

    if (chute > 10) {
      printf("Perdeu!\n");
      break;
    }
  }
  return 0;
}