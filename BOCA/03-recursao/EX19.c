#include <stdio.h>

void binario(int n);

int main(){

    int k;
    scanf("%d", &k);

    int numeros[k];
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &numeros[i]);
    }

    for (int j = 0; j < k; j++){
        binario(numeros[j]);
        putchar('\n');
    }

    return 0;
}

void binario(int k){
    if (k == 0){} 
    else 
    {
        binario(k / 2);
        printf("%d", k % 2);
    }
}

/*

*/