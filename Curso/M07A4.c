#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 50

int main(void){
    char nome[N];
    char sobrenome[N];
    char endereco[N];
    char bairro[N];
    char cidade[N];
    char CEP[N];
    char telefone[N];

    printf("Nome: ");
    fgets(nome, N, stdin);

    printf("Sobrenome: ");
    fgets(sobrenome, N, stdin);

    printf("Endereco: ");
    fgets(endereco, N, stdin);

    printf("Bairro: ");
    fgets(bairro, N, stdin);

    printf("Cidade: ");
    fgets(cidade, N, stdin);

    printf("CEP: ");
    fgets(CEP, N, stdin);

    printf("Telefone: ");
    fgets(telefone, N, stdin);

    system("cls");

    printf("Nome: ");
    puts(nome);

    printf("Sobrenome: ");
    puts(sobrenome);

    printf("Endereco: ");
    puts(endereco);

    printf("Bairro: ");
    puts(bairro);

    printf("Cidade: ");
    puts(cidade);

    printf("CEP: ");
    puts(CEP);

    printf("Telefone: ");
    puts(telefone);

    return 0;

}