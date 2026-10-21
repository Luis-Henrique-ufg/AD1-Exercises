/* ============================================================================

    Linguagem C, o curso definitivo
    Módulo 7 Aula 3
    Passagem de Matrizes para Funções

    Autor: Dr. Eng. Wagner Rambo
    Data:  Junho de 2021

============================================================================ */

/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* para utilizar a função time */

/* ========================================================================= */
/* --- Protótipo das Funções --- */
void naval(char b[][10]);   /* função para desenhar a matriz da batalha */
void new_seed();            /* função para gerar números aleatórios */
unsigned map_col(char col); /* converte coluna letra em coluna número */

/* ========================================================================= */
/* --- Função Principal --- */
int main(void) {
  char boats[8][10] = {0}, /* guarda as posições dos inimigos */
      opt = 'j',           /* opção do usuário iniciada em 'j' */
      sort = 1,            /* flag para novos sorteios */
      col = 0;             /* caracteres das colunas */

  unsigned num,    /* armazena números aleatórios */
      row = 0,     /* número das linhas */
      acertos = 0, /* número de alvos atingidos */
      erros = 0;   /* número de erros cometidos */

  register int i, j; /* variáveis para iteração */

  do /* loop para sorteio */
  {
    if (sort)        /* flag sort setada? */
    {                /* sim */
      system("cls"); /* limpa a tela */
      new_seed();    /* aplica uma semente randômica para o sorteio */

      for (i = 0; i < 8; i++) /* varre as 8 linhas */
      {
        for (j = 0; j < 10; j++) /* varre as 10 colunas */
        {
          num =
              rand() % 100 + 1; /* num recebe um número aleatório de 1 a 100 */

          if (num % 2)
            boats[i][j] = '@'; /* se o número for ímpar, insere um "inimigo" */
          else
            boats[i][j] =
                0x20; /* se o número for par, insere um espaço em branco */

        } /* end for anin. */

      } /* end for */

      naval(boats); /* atualiza matriz da batalha */

    } /* end if sort */

    else /* se a flag sort for falsa... */
    {
      printf("Opcao invalida\n"); /* informa opção inválida */
      sort = 1;                   /* seta flag para novo sorteio */
    }

    printf("(s) sortear novamente\n"); /* s para sortear novamente */
    printf("(j) jogar!\n>>> ");        /* j para jogar */
    scanf(" %c", &opt);                /* lê a opção */

    if (opt != 's' && opt != 'S')
      sort = 0; /* se for um caractere diferente de s, limpa flag de sorteio */

  } while (opt != 'j' &&
           opt != 'J'); /* encerra o loop quando digitado j para jogar */

  system("cls"); /* limpa a tela */
  naval(boats);  /* atualiza matriz da batalha */
  printf("ALVOS ATINGIDOS: %3d | ERROS: %3d\n", acertos,
         erros); /* imprime acertos e erros */

  while (1) /* loop infinito */
  {

    printf("Digite a posicao para o disparo: "); /* solicita a posição para
                                                    disparo */
    scanf(" %c%d", &col, &row);                  /* lê a coluna e a linha */

    system("cls"); /* limpa a tela */

    if (boats[row - 1][map_col(col)] ==
        '@') /* se a posição indicada coincidir com um alvo... */
    {

      boats[row - 1][map_col(col)] =
          '*';       /* atualiza posição com * para indicar o alvo abatido */
      acertos++;     /* incrementa acertos */
      putchar('\a'); /* sinal sonoro */

    } /* end if boats */

    else /* se não houve um alvo na posição... */
    {
      erros++;       /* incrementa os erros */
      putchar('\a'); /* sinal sonoro */
      putchar('\a'); /* sinal sonoro */
      putchar('\a'); /* sinal sonoro */

      if (erros > 5) /* se errar mais de 5 vezes... */
      {
        printf("FOMOS DERROTADOS!\n"); /* o jogador perde */
        for (i = 0; i < 5; i++)        /* repete 5 alertas sonoros */
          putchar('\a');               /* sinal sonoro */
        system("PAUSE");               /* pausa */
        exit(0);                       /* interrompe programa */

      } /* end if erros */

    } /* end else */

    naval(boats); /* atualiza matriz de batalha */
    printf("ALVOS ATINGIDOS: %3d | ERROS: %3d\n", acertos,
           erros); /* imprime acertos e erros */

  } /* end while */

  system("PAUSE"); /* pausa execução (Pressione qualquer tecla para continuar .
                      . .) */
  return 0;        /* retorna 0, se main for executada corretamente */

} /* end main */

/* ========================================================================= */
/* --- Desenvolvimento das Funções --- */

/* ========================================================================= */
/* --- Desenha a matriz de batalha --- */
void naval(char b[][10]) {
  putchar('\n');
  printf("       A   B   C   D   E   F   G   H   I   J  \n");
  printf("     -----------------------------------------\n");
  printf("  1  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[0][0],
         b[0][1], b[0][2], b[0][3], b[0][4], b[0][5], b[0][6], b[0][7], b[0][8],
         b[0][9]);
  printf("     -----------------------------------------\n");
  printf("  2  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[1][0],
         b[1][1], b[1][2], b[1][3], b[1][4], b[1][5], b[1][6], b[1][7], b[1][8],
         b[1][9]);
  printf("     -----------------------------------------\n");
  printf("  3  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[2][0],
         b[2][1], b[2][2], b[2][3], b[2][4], b[2][5], b[2][6], b[2][7], b[2][8],
         b[2][9]);
  printf("     -----------------------------------------\n");
  printf("  4  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[3][0],
         b[3][1], b[3][2], b[3][3], b[3][4], b[3][5], b[3][6], b[3][7], b[3][8],
         b[3][9]);
  printf("     -----------------------------------------\n");
  printf("  5  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[4][0],
         b[4][1], b[4][2], b[4][3], b[4][4], b[4][5], b[4][6], b[4][7], b[4][8],
         b[4][9]);
  printf("     -----------------------------------------\n");
  printf("  6  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[5][0],
         b[5][1], b[5][2], b[5][3], b[5][4], b[5][5], b[5][6], b[5][7], b[5][8],
         b[5][9]);
  printf("     -----------------------------------------\n");
  printf("  7  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[6][0],
         b[6][1], b[6][2], b[6][3], b[6][4], b[6][5], b[6][6], b[6][7], b[6][8],
         b[6][9]);
  printf("     -----------------------------------------\n");
  printf("  8  | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n", b[7][0],
         b[7][1], b[7][2], b[7][3], b[7][4], b[7][5], b[7][6], b[7][7], b[7][8],
         b[7][9]);
  printf("     -----------------------------------------\n");
  putchar('\n');

} /* end naval */

/* ========================================================================= */
/* --- Gera números aleatórios --- */
void new_seed() {
  long long capture;
  time(&capture);
  srand((unsigned)capture);

} /* end new_seed */

/* ========================================================================= */
/* --- Converte o caractere da coluna no inteiro para o índice da matriz --- */
unsigned map_col(char col) {
  switch (col) {
  case 'a':
  case 'A':
    return 0;
    break;
  case 'b':
  case 'B':
    return 1;
    break;
  case 'c':
  case 'C':
    return 2;
    break;
  case 'd':
  case 'D':
    return 3;
    break;
  case 'e':
  case 'E':
    return 4;
    break;
  case 'f':
  case 'F':
    return 5;
    break;
  case 'g':
  case 'G':
    return 6;
    break;
  case 'h':
  case 'H':
    return 7;
    break;
  case 'i':
  case 'I':
    return 8;
    break;
  case 'j':
  case 'J':
    return 9;
    break;

  } /* end switch */

} /* end map_col*/

/* ============================================================================
 */
/* --- Final do Programa --- */
