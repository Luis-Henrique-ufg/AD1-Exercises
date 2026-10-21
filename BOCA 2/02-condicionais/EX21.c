#include <stdio.h>
#include <math.h>

int cat(int centena, int dezena, int unidade);
int quadrado(int centena, int dezena, int unidade);

int main(){
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 >= 10 || n2 >= 10 || n3 >= 10){
        printf("DIGITO INVALIDO\n");
        return 0;
    }
    printf("%d, ", cat(n1, n2, n3));
    printf("%d", quadrado(n1, n2, n3));

    return 0;
}

int cat(int centena, int dezena, int unidade)
{
    return centena * 100 + dezena * 10 + unidade;
}

int quadrado(int centena, int dezena, int unidade)
{
    return pow((centena * 100 + dezena * 10 + unidade), 2);
}