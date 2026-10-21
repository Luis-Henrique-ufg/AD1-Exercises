#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <stdlib.h>

int main(void){

    setlocale(LC_ALL, "Portuguese_Brazil");
    
    char opt;
    do
    {
        puts("Selecione uma opcao: ");
        puts("N: Novo Cliente");
        puts("C: Consultar Clientes");
        puts("D: Deletar Clientes");
        puts("L: Listar Clientes");
        puts("S: Sair");
        printf("\n\n");

        scanf(" %c", &opt);

        switch (opt)
        {
            case 'N': puts("New Cliente"); break;
            case 'C': puts("Search Cliente"); break;
            case 'D': puts("Delete Cliente"); break;
            case 'L': puts("Print Clientes"); break;
            case 'S': puts("Out");
            default: printf("INVALIDO\n");
        }
    } while (opt != 'S');

    printf("\n\n");

    return 0;
}