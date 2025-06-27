#include <stdio.h>
#include <stdlib.h>

void mostrar_tabuleiro(char tabuleiro[3][3]) {
  system("clear");
  printf("\n   0   1   2\n\n");
  for (int i = 0; i < 3; i++) {
    printf("  ");
    for (int j = 0; j < 3; j++) {
      printf(" %c ", tabuleiro[i][j]);
      if (j < 2)
        printf("|");
    }
    printf("   %d\n", i);
    if (i < 2)
      printf("  ---|---|---\n");
  }
  printf("\n");
}

char verifica_vitoria(char tabuleiro[3][3]) {
  for (int i = 0; i < 3; i++) {
    if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ') {
      return tabuleiro[i][0];
    }

    if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ') {
      return tabuleiro[0][i];
    }
  }

  if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ') {
    return tabuleiro[0][0];
  }

  if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ') {
    return tabuleiro[0][2];
  }
  return ' ';
}

void jogada(char tabuleiro[3][3]) {

  int linha, coluna;

  for (int i = 0; i < 9; i++) {
    char jogador = (i % 2 == 0) ? 'x' : 'o';
    int num_jogador = (jogador == 'x') ? 1 : 2;

    printf("\nJogador %d (%c), digite a linha e a coluna (ou digite 5 em algum para encerrar o jogo):\n ",
           num_jogador, jogador);
    scanf("%d %d", &linha, &coluna);

    if (linha == 5 || coluna == 5) {
      printf("Jogo encerrado!");
      exit(0);
    }

    if (tabuleiro[linha][coluna] != ' ' || linha > 2 || coluna > 2 || linha < 0 ||
        coluna < 0) {
      i--;
      mostrar_tabuleiro(tabuleiro);
      printf("Jogada invalida, tente novamente!\n");
    } else {
      tabuleiro[linha][coluna] = jogador;

      mostrar_tabuleiro(tabuleiro);
      if (verifica_vitoria(tabuleiro) != ' ') {
        break;
      }
    }
  }
}

void mostrar_vencedor(char tabuleiro[3][3]) {
  char vencedor = verifica_vitoria(tabuleiro);

  if (vencedor == 'x') {
    printf("Parabéns! Jogador 1 (x) venceu!\n");
  } else if (vencedor == 'o') {
    printf("Parabéns! Jogador 2 (o) venceu!\n");
  } else {
    printf("O jogo terminou em empate.\n");
  }
}

int main() {
  char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

  char iniciar_jogo;
  
  printf("Deseja iniciar o jogo? (s/n): ");
  scanf(" %c", &iniciar_jogo);
  
  if (iniciar_jogo == 's') {
    mostrar_tabuleiro(tabuleiro);
    printf("Jogo iniciado!\n");
    jogada(tabuleiro);
    mostrar_vencedor(tabuleiro);
    printf("Fim de jogo!\n");
    
  } else {
    printf("Jogo não iniciado.\n");
  }

  return 0;
}