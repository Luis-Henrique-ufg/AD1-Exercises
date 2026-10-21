#include <stdio.h>

float kw(float x);
float residencia(float x, float y);
float newvalue(float x, float y);

int main(){
    float salario, gasto, desconto;
    scanf("%f%f", &salario, &gasto);

    printf("Custo por kW: R$ %.2f\n", kw(salario));
    printf("Custo do consumo: R$ %.2f\n", residencia(salario, gasto));
    printf("Custo com desconto: R$ %.2f\n", newvalue(salario, gasto));
    
return 0;
}

float kw(float x)
{
   return x * 0.7 / 100;
}

float residencia(float x, float y)
{
    return kw(x) * y;
}

float newvalue(float x, float y)
{
    float desconto;
   desconto = residencia(x, y) * 0.1;
   return residencia(x, y) - desconto;
}

/*
Sabendo-se que 100 kW de energia custam 70% do salário mínimo, escreva um algoritmo em Linguagem C que leia o valor do salário mínimo e a quantidade de kW gasta por uma residência. Calcule e
imprima:
• o valor em reais de cada kW;
• o valor em reais a ser pago pelo consumo da residência;
• o novo valor a ser pago pela residência com um desconto de 10%.
Entrada
O programa deve ler o valor do salário mínimo e a quantidade de kW gasta por uma residência. Ambos
os valores são reais.
Saída
O programa deve imprimir três linhas contento o texto:
Custo por kW: R$ x.xx
Custo do consumo: R$ x.xx
Custo com desconto: R$ x.xx

*/