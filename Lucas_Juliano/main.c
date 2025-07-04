#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char jogador;
char jogodavelha[3][3] = {{' ', ' ', ' ',},{' ', ' ', ' ',},{' ', ' ', ' ',}};
int vitoria = 1, qtd_jogadas = 0;

int conferejogador(jogador) {
  if (jogador == 'X')
    printf("Turno do jogador X\n");
  else
    printf("Turno do jogador O\n");
  return 0;
}


int mostrajogo(){
  system("clear");
  printf("      Jogo da velha\n\n");
  printf("\n       %c | %c | %c", jogodavelha[0][0], jogodavelha[0][1], jogodavelha[0][2]);
  printf(" \n      -----------\n");
  printf("       %c | %c | %c", jogodavelha[1][0], jogodavelha[1][1], jogodavelha[1][2]);
  printf(" \n      -----------\n");
  printf("       %c | %c | %c", jogodavelha[2][0], jogodavelha[2][1], jogodavelha[2][2]);
  printf("\n\n");
}


int conferevitoria(){
  for (int i = 0; i < 3; i++){
    if ((jogodavelha[i][0] == jogodavelha[i][1] && jogodavelha[i][1] == jogodavelha[i][2] && jogodavelha[i][0] != ' ')||
        (jogodavelha[0][i] == jogodavelha[1][i] && jogodavelha[1][i] == jogodavelha[2][i] && jogodavelha[0][i] != ' ')
        ){
      printf("Vitória do jogador %c\n", jogador);
      vitoria = 0;
    }else if((jogodavelha[0][0] == jogodavelha[1][1] && jogodavelha[1][1] == jogodavelha[2][2] && jogodavelha[0][0] != ' ')||
        (jogodavelha[0][2] == jogodavelha[1][1] && jogodavelha[1][1] == jogodavelha[2][0] && jogodavelha[0][2] != ' ')){
      printf("Vitória do jogador %c\n", jogador);
      vitoria = 0;
    }
  }
  return vitoria;
}


int jogadas(){
  int i, j;
  jogador = 'X';
  conferejogador(jogador);
  while (vitoria != 0) {
    printf("\nDigite a linha da jogada: ");
    scanf("%d", &i);
    printf("Digite a coluna da jogada: ");
    scanf("%d", &j);
    qtd_jogadas++;
    if (i > 3 || j > 3 || i < 1 || j < 1){
      printf("Jogada invalida!\n");
      continue;
    }
    if (jogodavelha[i-1][j-1] != 'X' && jogodavelha[i-1][j-1] != 'O') {
      jogodavelha[i-1][j-1] = jogador;
      mostrajogo();
      conferevitoria();
      if (vitoria == 0){
        break;
      }
      if (qtd_jogadas > 8 && vitoria != 0){
        printf("Deu velha!\n");
        break;
      }
        if (jogador == 'X'){
          jogador = 'O';
          conferejogador(jogador);
        }else{
          jogador = 'X';
          conferejogador(jogador);}
    }else { 
      printf("Jogada invalida!\n");
    }
  }
  return qtd_jogadas;
}


int main() {
  printf("Bem vindo(a) ao jogo da velha!\n\n");
  mostrajogo();
  jogadas();
}