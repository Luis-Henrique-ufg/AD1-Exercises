#include <stdio.h>

int find(int pai[], int x);
void unir(int pai[], int a, int b);

int main(void) {
    // n é número de pessoas da população == tamannho do vetor
    // m é número de linhas após a primeira linha == até quando o loop roda
    int n, m; 
    scanf("%d %d", &n, &m); // primeira linha.

    // INICIALIZAÇÃO: cada pessoa é sua própria família
    int pai[n + 1]; 
    for (int i = 1; i <= n; i++) {
        pai[i] = i; 
    }
    
    // Leia as demais m linhas
    // PROCESSAMENTO: cada par indica "mesma família"
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        unir(pai, a, b);
    }

    //CONTAGEM: quantas raízes existem?
    int familias = 0;
    for (int i = 1; i <= n; i++) {
        if (find(pai, i) == i) {
            familias++;
        }
    }

    printf("%d\n", familias);
    return 0;
}

int find(int pai[], int x) {
    if (pai[x] != x) {
        pai[x] = find(pai, pai[x]);
    }
    return pai[x];
}

void unir(int pai[], int a, int b) {
    int raizA = find(pai, a);
    int raizB = find(pai, b);
    if (raizA != raizB) {
        pai[raizA] = raizB;
    }
}

