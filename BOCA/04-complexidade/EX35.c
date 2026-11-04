#include <stdio.h>

#define MAX 100000LL

long long
cacularPolinomio(long long a, long long b, long long c, long long x);

long long encontrarMenor(long long a, long long b, long long c, long long k);

int main() {
    int ct;
    if (scanf("%d", &ct) != 1) {
        return 1;
    }
    
    while (ct--) {
        long long a, b, c, k;
        
        scanf("%lld %lld %lld %lld", &a, &b, &c, &k);
        
        long long reposta = cacularPolinomio(a, b, c, k);
        
        printf("%lld\n", reposta);
    }
    return 0;
}

long long cacularPolinomio(long long a, long long b, long long c, long long k) {
    
    long long inicio   = 0;
    long long fim      = MAX;
    long long melhor_x = fim;
    
    while (inicio <= fim) {
        long long meio  = inicio + (fim - inicio) / 2;
        long long valor = encontrarMenor(a, b, c, meio);
        
        if (valor >= k) {
            melhor_x = meio;
            fim      = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return melhor_x;
}


long long encontrarMenor(long long a, long long b, long long c, long long x){
    return a * x * x + b * x + c;
}