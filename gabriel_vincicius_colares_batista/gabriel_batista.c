#include <stdio.h>
#include <stdlib.h>

// jogo do idoso, ou melhor, jogo da velha
void limpaTela();
void comecoGame();
void inicializarTabuleiro(char tabuleiro[3][3]);
void mostrarTabuleiro(char tabuleiro[3][3]);
int fazerJogada(char tabuleiro[3][3], int linha, int coluna, char jogador);
int verificarVitoria(char tabuleiro[3][3]);
int verificarEmpate(char tabuleiro[3][3]);
void jogar();

int main() { 
  int opcaoComeco;
  
  do {
    comecoGame();
    scanf("%d", &opcaoComeco);
    
    switch(opcaoComeco) {
      case 1:
        jogar();
        break;
      case 2:
        printf("Obrigado por jogar! Até mais!\n");
        break;
      default:
        printf("Opção inválida!\n");
        printf("Pressione Enter para continuar...");
        getchar();
        getchar();
        break;
    }
  } while(opcaoComeco != 2);
  
  return 0; 
}

void comecoGame() {
  limpaTela();
  printf("=== BEM VINDO AO JOGO DA VELHA DO GVVVVV ===\n");
  printf("\nEscolha uma opcao:\n");
  printf("1 - Jogar\n");
  printf("2 - Sair\n");
  printf("Opcao: ");
}

void inicializarTabuleiro(char tabuleiro[3][3]) {
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      tabuleiro[i][j] = ' ';
    }
  }
}

void mostrarTabuleiro(char tabuleiro[3][3]) {
  printf("\n   0   1   2\n");
  for(int i = 0; i < 3; i++) {
    printf("%d  %c | %c | %c \n", i, tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
    if(i < 2) {
      printf("  -----------\n");
    }
  }
  printf("\n");
}

int fazerJogada(char tabuleiro[3][3], int linha, int coluna, char jogador) {
  if(linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
    return 0; // posição errada demaize
  }
  
  if(tabuleiro[linha][coluna] != ' ') {
    return 0; // posição errada ou sla ocupada
  }
  
  tabuleiro[linha][coluna] = jogador;
  return 1; // jogada válida
}

int verificarVitoria(char tabuleiro[3][3]) {
  for(int i = 0; i < 3; i++) {
    if(tabuleiro[i][0] == tabuleiro[i][1] && 
       tabuleiro[i][1] == tabuleiro[i][2] && 
       tabuleiro[i][0] != ' ') {
      return tabuleiro[i][0];
    }
  }
  for(int j = 0; j < 3; j++) {
    if(tabuleiro[0][j] == tabuleiro[1][j] && 
       tabuleiro[1][j] == tabuleiro[2][j] && 
       tabuleiro[0][j] != ' ') {
      return tabuleiro[0][j];
    }
  }
  if(tabuleiro[0][0] == tabuleiro[1][1] && 
     tabuleiro[1][1] == tabuleiro[2][2] && 
     tabuleiro[0][0] != ' ') {
    return tabuleiro[0][0];
  }
  if(tabuleiro[0][2] == tabuleiro[1][1] && 
     tabuleiro[1][1] == tabuleiro[2][0] && 
     tabuleiro[0][2] != ' ') {
    return tabuleiro[0][2];
  }
  
  return 0; //deu idoso, ou melhor, não tem vitoria
}

int verificarEmpate(char tabuleiro[3][3]) {
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      if(tabuleiro[i][j] == ' ') {
        return 0;
      }
    }
  }
  return 1; // empate
}

void jogar() {
  char tabuleiro[3][3];
  char jogadorAtual = 'X';
  int linha, coluna;
  int vencedor = 0;
  int jogadaValida;
  
  inicializarTabuleiro(tabuleiro);
  
  printf("\n=== JOGO DA VELHA ===\n");
  printf("Jogador X começa!\n");
  printf("Digite linha e coluna (0-2) separados por espaço\n\n");
  
  while(!vencedor && !verificarEmpate(tabuleiro)) {
    limpaTela();
    printf("=== JOGO DA VELHA ===\n");
    mostrarTabuleiro(tabuleiro);
    
    printf("Vez do jogador %c\n", jogadorAtual);
    printf("Digite linha e coluna (0-2): ");
    
    if(scanf("%d %d", &linha, &coluna) != 2) {
      printf("Entrada inválida! Digite dois números.\n");
      while(getchar() != '\n');
      printf("Pressione Enter para continuar...");
      getchar();
      continue;
    }
    
    jogadaValida = fazerJogada(tabuleiro, linha, coluna, jogadorAtual);
    
    if(!jogadaValida) {
      printf("Jogada inválida! Posição ocupada ou fora do tabuleiro.\n");
      printf("Pressione Enter para continuar...");
      getchar();
      getchar();
      continue;
    }
    
    vencedor = verificarVitoria(tabuleiro);
    
    if(!vencedor) {
      jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
    }
  }
  
  limpaTela();
  printf("=== RESULTADO FINAL ===\n");
  mostrarTabuleiro(tabuleiro);
  
  if(vencedor) {
    printf("🎉 PARABÉNS! Jogador %c venceu! 🎉\n", vencedor);
  } else {
    printf("😐Empate! Ninguém venceu.\n");
  }
  printf("\nPressione Enter para voltar ao menu...");
  getchar();
  getchar();
}

void limpaTela() {
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}