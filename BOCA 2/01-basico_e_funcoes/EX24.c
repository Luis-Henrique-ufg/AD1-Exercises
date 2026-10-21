#include <stdio.h>

int main(){
    int horas;
    scanf("%d", &horas);

    // para tres cada 3 horas == 10 reais
    
    int r = (horas % 3) * 5;

    printf("O VALOR A PAGAR E = %.2f\n", (double) i + r);

    return 0;
}