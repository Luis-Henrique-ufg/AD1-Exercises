#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX_T 1005
#define MAX_S 10005

int main() {
    char vogais[] = {'a', 'e', 'i', 'o', 'u'};

    int n_testes;
    if (scanf("%d", &n_testes) != 1) {
        return 1;
    }

    getchar();

    char string[MAX_S];

    for (int i = 0; i < n_testes; i++) {
        fgets(string, MAX_S, stdin);
        
        int encontrado = 0;
        int len = strlen(string);

        for (int v = 0; v < 5; v++) {
            for (int s = 0; s < len; s++) {
                if (tolower(string[s]) == vogais[v]) {
                    encontrado++;
                }
            }
        }
        printf("%d\n", encontrado);
    }
}