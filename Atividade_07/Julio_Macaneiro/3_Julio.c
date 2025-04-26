#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int num_escolhido, num_randomico;
  int tentativas = 0;

  printf("Escolha um número entre 1 e 100: ");
  scanf("%d", &num_escolhido);

  srand(time(NULL));

  do{

    num_randomico = rand() % 100 + 1;
    tentativas++;

  }while(num_randomico != num_escolhido);


      printf("O numero escolhido %d foi igual ao gerado após %d tentativas", num_escolhido, tentativas);

    
  
       

  return 0;
}