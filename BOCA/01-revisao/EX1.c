#include <stdio.h>

#define anoHalley 1986
#define volta 76

int main() {
  int anoAtual, proxAnoHalley, anoExtra;

  scanf("%d", &anoAtual);
  proxAnoHalley = anoHalley;

  if (anoAtual < anoHalley) {
    while (proxAnoHalley > anoAtual)
      proxAnoHalley -= volta;

    proxAnoHalley += volta;

    anoExtra = ((anoHalley - anoAtual) / 4) / 365;

    proxAnoHalley -= anoExtra;

    printf("%d\n\n", proxAnoHalley);

  } else {
    while (anoAtual > proxAnoHalley)
      proxAnoHalley += volta;

    anoExtra = ((anoAtual - anoHalley) / 4) / 365;

    proxAnoHalley += anoExtra;

    printf("%d\n\n", proxAnoHalley);
  }
  return 0;
}