#include <stdio.h>
#include <ctype.h>

int main(){
    int conta;
    float agua;
    char consumidor;

    if(scanf("%d %f %c", &conta, &agua, &consumidor) != 3){
        return 1;
    }

    printf("CONTA = %d\n", conta);

    consumidor = tolower(consumidor);

    switch (consumidor){
        case 'r': printf("VALOR DA CONTA = %.2f\n", 5.0 + (agua * 0.05)); break;
        case 'c': printf("VALOR DA CONTA = %.2f\n", 500.0 + (agua > 80.0 ? (agua - 80.0) * 0.25 : 0.0)); break;
        case 'i': printf("VALOR DA CONTA = %.2f\n", 800.0 + (agua > 100.0 ? (agua - 100.0) * 0.04 : 0.0)); break;
        default: printf("VALOR DA CONTA = %.2f\n", 0.0); break;
    }
    return 0;
}


/* Com o operador ternário fica muito clean*/