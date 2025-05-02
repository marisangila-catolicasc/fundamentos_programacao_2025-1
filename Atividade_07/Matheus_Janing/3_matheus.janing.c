#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

  int numero, n_gerado, tentativas = 0;

  srand(time(NULL));
  printf("Insira um numero inteiro entre 1 e 99: ");
  scanf("%d", &numero);

  do {
    n_gerado = rand() % 100;
    tentativas++;

  } while (n_gerado != numero);
    
  printf("Numero gerado: %d\n", n_gerado);
  printf("Foram necessárias %d tentativas", tentativas);
}