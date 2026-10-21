#include <stdio.h>

void imprimirNaturais(int n);

int main(){
    int n;
    scanf("%d", &n);

    imprimirNaturais(n);

    printf("\n\n\n");
}

void imprimirNaturais(int n)
{
    if (n == 1)
    {
        printf("%d ", n);
    }
    else
    {
        imprimirNaturais(n - 1);
        printf("%d ", n);
    }
}