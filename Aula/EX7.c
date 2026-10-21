#include <conio.h>
#include <stdio.h>

int main(void) {
  for (;;) {
    printf("BOM DIA!\n");
    if (kbhit())
      break;
  }
}