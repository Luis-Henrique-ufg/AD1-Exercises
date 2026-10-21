#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define N 100

typedef struct {
    char nome[21];
    int nota;
} ALUNO;

typedef struct {
    ALUNO aluno[N];
} CLASSE;

bool vemAntes(ALUNO x, ALUNO y);
void bubble(ALUNO alunos[], int n);

int main() {
    CLASSE C;
    ALUNO A;

    int n, i;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    // Loop de leitura dos alunos
    for (i = 0; i < n; i++) {
        scanf("%20s", C.aluno[i].nome);
        scanf("%d", &C.aluno[i].nota);
    }

    // Ordenar com DOIS critérios em um só comparador
    bubble(C.aluno, n);

    // imprimir
    for (int i = 0; i < n - 1; i++) {
        printf("%s %d\n", C.aluno[i].nome, C.aluno[i].nota);
    }

    printf("%s %d #reprovado(a)\n", C.aluno[n - 1].nome, C.aluno[n - 1].nota);

    return 0;
}

bool vemAntes(ALUNO x, ALUNO y) {
    if (x.nota != y.nota) {
        return x.nota > y.nota;
    }
    return strcmp(x.nome, y.nome) < 0;
}

void bubble(ALUNO alunos[], int n) {
    ALUNO temp;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (!vemAntes(alunos[j], alunos[j + 1])) {
                temp          = alunos[j];
                alunos[j]     = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
}



/*
função vemAntes:

Por que strcmp < 0? Em C, strcmp(a, b) devolve:
negativo → a vem antes de b (ordem alfabética)
zero → iguais
positivo → a vem depois de b
Então strcmp(x.nome, y.nome) < 0 significa "x é alfabeticamente menor que y".
*/