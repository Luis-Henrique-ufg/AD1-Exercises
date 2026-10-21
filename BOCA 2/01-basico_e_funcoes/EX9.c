#include <stdio.h>

int convHoras(int h);
int convMinutos(int m);

int main(){
    int horas, minutos, segundos;
    scanf("%d%d%d", &horas, &minutos, &segundos);

    printf("O TEMPO EM SEGUNDOS E = %d\n", convHoras(horas) + convMinutos(minutos) + segundos);

    return 0;
}

int convHoras(int h)
{
    return h * 60 * 60;
}

int convMinutos(int m)
{
    return m * 60;
}

/* 
1 * 60 = 60 min 
60 * 60 = 1200s

*/