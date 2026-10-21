/*
P = número de pedras no rio
S = números de sapos
pi = posição inicial do sapo
di = distância do pulo do sapo
*/

#include <stdio.h>

int main(void) {
  int P, S;
  scanf("%d%d", &P, &S);

  int alcanca[P + 1]; // para não usar o índice 0;

  for (int i = 1; i <= P; i++) {
    alcanca[i] = 0;
  }

  for (int sapo = 0; sapo < S; sapo++) {
    int pi, di;
    scanf("%d%d", &pi, &di);

    for (int pedra = pi; pedra <= P; pedra += di) { // sapo pulando para frente
      alcanca[pedra] = 1;
    }

    for (int pedra = pi - di; pedra >= 1; pedra -= di) { // sapo pulando para tras
      alcanca[pedra] = 1;
    }

  }
  
  for (int j = 1; j <= P; j++) {
    printf("%d\n", alcanca[j]);
  }
  return 0;
}


/*
Exemplo pulo pra frente: 

Passo	pedra	Condição (pedra <= 10)	Ação

1ª checagem	3	Verdadeira	marca pedra 3
incrementa	6		
2ª checagem	6	 Verdadeira	marca pedra 6
incrementa	9		
3ª checagem	9	 Verdadeira	marca pedra 9
incrementa	12		
4ª checagem	12	 Falsa	loop encerra, corpo não executa

Exemplo pulo pra trás

Sapo começa em pi = 9, pula di = 3.

Início: pedra = 9 - 3 = 6 → marca a pedra 6.
Condição checa: 6 >= 1? Sim, continua.
Próxima volta: pedra = 6 - 3 = 3 → marca a pedra 3.
Condição: 3 >= 1? Sim, continua.
Próxima volta: pedra = 3 - 3 = 0 → marca a pedra 0??
*/