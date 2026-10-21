#include <ctype.h>
#include <math.h>
#include <stdio.h>

#define PI 3.1415

int circulo(double raio) {
    return (int)round(PI * raio * raio);
}

int elipse(double R, double r) {
    return (int)round(PI * R * r);
}

int triangulo(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    return (int)round(sqrt(p * (p - a) * (p - b) * (p - c)));
}

int trapezio(double B, double b, double h) {
    return (int)round((B + b) * h / 2.0);
}

int main(void) {

    int N = 0;
    scanf("%d", &N);

    char escolha;
    int resultado[1000];
    int qtd = 0;

    for (int i = 0; i < N; i++) {

        scanf(" %c", &escolha);
        escolha = tolower(escolha);

        /* Area Circulo*/
        if (escolha == 'c') {
            int R;

            scanf("%d", &R);
            resultado[qtd++] = circulo(R);

        }
        /* Area da Elipse*/
        else if (escolha == 'e') {
            int R, r;

            scanf("%d%d", &R, &r);
            resultado[qtd++] = elipse(R, r);
            ;

        }

        /* Area do triangulo*/
        else if (escolha == 't') {
            int a, b, c;

            scanf("%d%d%d", &a, &b, &c);
            resultado[qtd++] = triangulo(a, b, c);

        }

        /* Area do Trapezio*/
        else if (escolha == 'z') {
            int B, b, h;

            scanf("%d%d%d", &B, &b, &h);
            resultado[qtd++] = trapezio(B, b, h);
        }
    }

    for (int j = 0; j < qtd; j++) {
        printf("%d\n", resultado[j]);
    }

    return 0;
}
