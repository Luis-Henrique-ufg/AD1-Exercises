#include <stdio.h>

double media(double nota1, double nota2, double nota3);

int main(){
    double n1, n2, n3;
    scanf("%lf%lf%lf", &n1, &n2, &n3);

    printf("MEDIA = %.2f\n", media(n1, n2, n3));
    
    if (media(n1, n2, n3) >= 6){
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}

double media(double nota1, double nota2, double nota3)
{
    return (nota1 + nota2 + nota3) / 3;
}