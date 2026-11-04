#include <stdio.h>

#define N 1440

int main() {
    int ct, n;
    scanf("%d", &ct);

    while (ct--) {
        scanf("%d", &n);

        int count[N] = {0};
        int max      = 0;

        for (int i = 0; i < n; i++) {
            int hora = 0, minuto = 0, time = 0;

            scanf("%d %d", &hora, &minuto);
            time = hora * 60 + minuto;
            count[time]++;
        }

        for (int j = 0; j < N; j++) {
            if (count[j] > max) {
                max = count[j];
            }
        }

        if (max == 0) {
            printf("1\n");
        } else {
            printf("%d\n", max);
        }
    }

    return 0;
}