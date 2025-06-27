#include <stdio.h>
#include <stdlib.h>

void mostrar_tabuleiro(char mat[3][3]) {
  system("clear");
  printf("\n   0   1   2\n\n");
  for (int i = 0; i < 3; i++) {
    printf("  ");
    for (int j = 0; j < 3; j++) {
      printf(" %c ", mat[i][j]);
      if (j < 2)
        printf("|");
    }
    printf("   %d\n", i);
    if (i < 2)
      printf("  ---|---|---\n");
  }
  printf("\n");
}

char verifica_vitoria(char mat[3][3]) {
  for (int i = 0; i < 3; i++) {
    if (mat[i][0] == mat[i][1] && mat[i][1] == mat[i][2] && mat[i][0] != ' ') {
      return mat[i][0];
    }

    if (mat[0][i] == mat[1][i] && mat[1][i] == mat[2][i] && mat[0][i] != ' ') {
      return mat[0][i];
    }
  }

  if (mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2] && mat[0][0] != ' ') {
    return mat[0][0];
  }

  if (mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0] && mat[0][2] != ' ') {
    return mat[0][2];
  }
  return ' ';
}

void jogada(char mat[3][3]) {

  int linha, coluna;

  for (int i = 0; i < 9; i++) {
    char jogador = (i % 2 == 0) ? 'x' : 'o';
    int num_jogador = (jogador == 'x') ? 1 : 2;

    printf("\nJogador %d, digite a linha e a coluna (ou digite 5 em algum para encerrar o jogo):\n ",
           num_jogador);
    scanf("%d %d", &linha, &coluna);

    if (linha == 5 || coluna == 5) {
      printf("Jogo encerrado!");
      exit(0);
    }

    if (mat[linha][coluna] != ' ' || linha > 2 || coluna > 2 || linha < 0 ||
        coluna < 0) {
      i--;
      mostrar_tabuleiro(mat);
      printf("Jogada invalida, tente novamente!\n");
    } else {
      mat[linha][coluna] = jogador;

      mostrar_tabuleiro(mat);
      if (verifica_vitoria(mat) != ' ') {
        break;
      }
    }
  }
}

void mostrar_vencedor(char mat[3][3]) {
  char vencedor = verifica_vitoria(mat);

  if (vencedor == 'x') {
    printf("Parabéns! Jogador 1 (x) venceu!\n");
  } else if (vencedor == 'o') {
    printf("Parabéns! Jogador 2 (o) venceu!\n");
  } else {
    printf("O jogo terminou em empate.\n");
  }
}

int main() {
  char mat[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

  char iniciar_jogo;
  
  printf("Deseja iniciar o jogo? (s/n): ");
  scanf(" %c", &iniciar_jogo);
  
  if (iniciar_jogo == 's') {
    mostrar_tabuleiro(mat);
    printf("Jogo iniciado!\n");
    jogada(mat);
    mostrar_vencedor(mat);
    printf("Fim de jogo!\n");
    
  } else {
    printf("Jogo não iniciado.\n");
  }

  return 0;
}