#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int soma = 0;
    for (int i = 0; i < 1000; i++){
        soma += n + i;
        // soma = n + (n + 999) / 2;
    }
    printf("%d", soma);
}

/*
Isso é uma PA, opte pela fórmula, pela resolução formal.



*/