#include <stdio.h>

int main(){
    float nota;
    scanf("%f", &nota);

    printf("NOTA = %.1f ", nota);

    if (nota >= 9.0){
        printf("CONCEITO = A\n");
    } else if (nota >= 7.5 && nota < 9.0){
        printf("CONCEITO = B\n");
    } else if (nota >= 6.0 && nota < 7.5){
        printf("CONCEITO = C\n");
    } else  if (nota >= 0 && nota < 6.0){
        printf("CONCEITO = D\n");
    }

    return 0;
}