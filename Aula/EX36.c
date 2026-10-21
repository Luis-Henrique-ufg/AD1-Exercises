#include <stdio.h>
#define M 10001

int main() {
    int vcount[M], vord[M], n, i, cont;
    scanf("%d", &n);

    while (n != 0) {
        for (i = 0; i < M; i++) {
            vcount[i] = 0;
        }

        for (i = 0; i < n; i++) {
            scanf("%d", &vord[i]);
        }

        for (i = 0; i < n; i++) {
            vcount[vord[i]]++; // ???
        }
        cont = 0;
        i    = 0;

        while (cont < n) {
            while (vcount[i] > 0) {
                printf("%d ", i);
                vcount[i]--;
                cont++;
            }
            i++;
        }
        scanf("%d", &n);
    }
    return 0;
}