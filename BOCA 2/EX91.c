#include <stdio.h>

#define VALORES 101

int main() {
    int freq[VALORES] = {0};

    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int x;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        freq[x]++;
    }

    int melhorValor = -1;
    int melhorCont  = -1;

    for (int i = 0; i < VALORES; i++) {
        if (freq[i] > melhorCont) {
            melhorCont  = freq[i];
            melhorValor = i;
        }
    }

    printf("%d\n", melhorValor);
    printf("%d\n", melhorCont);

    return 0;
}