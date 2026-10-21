/* Cotista*/
#include <stdio.h>

int main() {
    double renda = 0;
    int n_familia, ensinoMedio, etnia;

    if (scanf("%lf %d %d %d", &renda, &n_familia, &ensinoMedio, &etnia)!= 4){
        return 1;
    }

    if (ensinoMedio != 2) {
        printf("ALUNO NAO COTISTA\n");
        return 0;
    }

    double renda_per_capita = renda / n_familia / 937.00;

    int ppi = (etnia >= 1 && etnia <= 3);
    int alta_renda = (renda_per_capita > 1.5);

    int cota = 1 + ppi + 2 * alta_renda;

    printf("ALUNO COTISTA (L%d)\n", cota);
    
    return 0;
}