#include <math.h>
#include <stdio.h>

float impostoBruto(float SM, float SF);
float impostoLiquido(float IB, int dep);

int main() {
    int matricula;
    float salarioMinimo;
    int dependentes;
    float salarioFuncionario;
    float taxaImposto;

    if (scanf("%d %f %d %f %f",
              &matricula,
              &salarioMinimo,
              &dependentes,
              &salarioFuncionario,
              &taxaImposto)
        != 5) {
        return 1;
    }

    float imposto_bruto   = impostoBruto(salarioMinimo, salarioFuncionario);
    float imposto_liquido = impostoLiquido(imposto_bruto, dependentes);

    printf("MATRICULA = %d\n", matricula);
    printf("IMPOSTO BRUTO = %.2f\n", imposto_bruto);
    printf("IMPOSTO LIQUIDO = %.2f\n", imposto_liquido);

    float resultado
        = imposto_liquido - (salarioFuncionario * (taxaImposto / 100));
    printf("RESULTADO = %.2f\n", resultado);

    if (fabs(resultado) < 1e-4) {
        printf("IMPOSTO QUITADO\n");
    } else if (resultado > 0) {
        printf("IMPOSTO A PAGAR\n");
    } else {
        printf("IMPOSTO A RECEBER\n");
    }

    return 0;
}

float impostoBruto(float SM, float SF) {

    if (SF > 12 * SM){
        return SF * 0.20;
    } else if (SF > 5 * SM){
        return SF * 0.08;
    } else {
        return 0;
    }
}

float impostoLiquido(float IB, int dep) {
    return IB - (300 * dep);
}
/*
*/
