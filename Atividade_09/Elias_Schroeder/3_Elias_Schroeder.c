#include "stdio.h"
int main(void) {

  int matriz[4][4];
  int somaLinhasPares = 0, somaLinhaDois =0, MaiorValor = 0, MenorValor = 0;

  

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("Digite um valor: ");
      scanf("%d", &matriz[i][j]);
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  

  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if (i % 2 == 0){
        somaLinhasPares += matriz[i][j];
      }
    }
  }

  printf("o primeiro valor e %d eh o utimo eh %d \n", matriz[0][0], matriz[3][3] );

  

  somaLinhaDois = matriz[1][0] + matriz[1][1]+ matriz[1][2] + matriz[1][3];

  printf("Soma da linha 2 eh %d \n", somaLinhaDois);

  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if (i == j){
        printf("Este eh um elemento da diagonal principal %d \n", matriz[i][j]);
        
      }
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++)
    {
      if(matriz[i][j] >MaiorValor){
        MaiorValor = matriz[i][j];
      }
    }
    
  }

  printf(" o maior valor eh %d \n", MaiorValor);

  
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++)
    {
      if(matriz[i][j] <MenorValor){
        MenorValor = matriz[i][j];
      }
    }
    
  }

  printf(" o menor valor eh %d \n", MenorValor);



  
    

    
  return 0;
}
