/* Enumerando os números racionais*/
#include <stdio.h>

int gcd(int a, int b);
void rationalsEnumeration(int array[], int i);

int main() {
    int k[10000];

    int i = 0;
    do {
        scanf("%d", &k[i]);
        i++;
    } while (k[i - 1] != 0);

    rationalsEnumeration(k, i);

    return 0;
}

void rationalsEnumeration(int array[], int i) {    
    for (int p = 0; p < i - 1; p++){
        int contador   = 0;
        int d          = 1;
        int encontrado = 0;
        
        while (!encontrado){
            for (int n = 0; n <= d && !encontrado; n++){
                if (gcd(n, d) == 1){
                    contador++;
                    if (contador == array[p]){
                        printf("%d/%d\n", n, d);
                        encontrado = 1;
                    }
                }
            }
            d++;
        }
    }
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}