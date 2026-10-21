#include <stdio.h>

int main(void) {
    long long data;
    int dia, mes, ano;
    int dias_por_mes[]  = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char *meses[] = {"",
                           "janeiro",
                           "fevereiro",
                           "março",
                           "abril",
                           "maio",
                           "junho",
                           "julho",
                           "agosto",
                           "setembro",
                           "outubro",
                           "novembro",
                           "dezembro"};

    scanf("%lld", &data);

    if (data < 10000000 || data > 99999999) {
        printf("Data invalida!\n");
        return 0;
    }
    // 30022001
    dia = (int)(data / 1000000);
    mes = (int)((data / 10000) % 100);
    ano = (int)(data % 10000);

    if (mes < 1 || mes > 12 || dia < 1 || dia > dias_por_mes[mes]) {
        printf("Data invalida!\n");
        return 0;
    }

    printf("%d de %s de %d\n", dia, meses[mes], ano);

    return 0;
}