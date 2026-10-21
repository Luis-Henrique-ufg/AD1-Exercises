#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strvowel(char str[]); 
int strnumb(char *s);

int main(void){
    /* strlen: calcula a quantidade caracteres*/
    char str1[50] = "WR ";
    char str2[50] = "Kits";
    char com[50];

    printf("%d\n", strnum(str1));

    while (1)
    {
        printf("Novo comando: ");
        gets(com);

        if (!strcmp(com, "BIP")) //Se a string 'com' for IGUAL à string 'BIP'.
        {
            putchar('\a');
        }
        else if (!strcmp(com, "CLS")) {system("cls");}

        else if (!strcmp(com, "OUT")) {break;}
    }

    printf("%d\n", strlen(str1));

    /* strvowel: calcula o número de vogais na string*/
    printf("%d", strvowel(str1)); 
    /* strcat: unir / concatenar duas strings*/
    printf("%s\n",strcat(str1, str2));

    /* strcpy: copia o conteúdo de uma string para outra*/
    strcpy(str1, "Nova frase");
    printf("%s\n", str1);

    /* strrev: inverte a string*/
    strrev(str1);
    printf("%s\n", str1);

    /* strcmp: compara se as strings são iguais, retorna 0 (true) ou !0 (false). Com ela verificamos o que o usuário digitou e criamos comandos!*/
    printf("%d", strcmp(str1, str2));

    return 0;
}

/* Não é nativa a função de ler as vogais*/
int strvowel(char str[]){
    register int i = 0;
    int vogais = 0;
    
    while (str[i] != '\0')
    {
        char letra = tolower(str[i]);

        switch(letra)
        {
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'a':
            vogais++ ;
            break;
            default: 
            break;
        }
        i++;
}
    return vogais;
}

int strnumb(char *s)
{
    register int i = 0, num = 0;

        while (s[i]!='\0')
        {
            i++;
            if(isdigit(s[i])) num++;
        }
        return num;
}