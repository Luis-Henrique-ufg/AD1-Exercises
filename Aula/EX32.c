#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

int main() {
    long long int a, b, c, k, ct, sup, inf, meio, r, res;
    scanf("%lld", &ct);

    while (ct--) {
        scanf("%lld %lld %lld %lld", &a, &b, &c, &k);

        sup = MAX;
        inf = 0;

        while (inf <= sup) {
            meio = (inf + sup) / 2;
            r    = a * meio * meio + b * meio + c;
            if (r >= k) {
                sup = meio - 1;
                res = meio;
            } else {
                inf = meio + 1;
            }
        }
        printf("%lld\n", res);
    }
    return 0;
}