#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int caixinha[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &caixinha[i]);
    }

    if (scanf("%d", &m) != 1) {
        return 1;
    }
    int search[m];
    for (int j = 0; j < m; j++) {
        scanf("%d", &search[j]);
    }

    for (int k = 0; k < m; k++) {
        bool here = false;
        for (int l = 0; l < n; l++) {
            if (search[k] == caixinha[l]) {
                here = true;
                break;
            }
        }
        if (here) {
            printf("ACHEI\n");
        } else {
            printf("NAO ACHEI\n");
        }
    }
    return 0;
}

/*
for (int k = 0; k < len_search; k++){
    for (int l = 0; l < len_caixinha; l++){
        if (search[k] == caixinha[l]){
            printf("ACHEI\n");
        }
    }
    printf("NAO ACHEI\n");   // <-- sempre executa, mesmo se achou!
}

### Útil

int meuArray[] = {10, 20, 30, 40, 50};

int tamanho = sizeof(meuArray) / sizeof(meuArray[0]);

5
*/