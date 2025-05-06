#include <stdio.h>
int main(){

  int matriz[4][4], pares = 0, linha = 0, maior, menor;
  int maior_i = 0, maior_j = 0, menor_i = 0, menor_j = 0;

  printf("Insira os valores para preencher a matriz:\n");
  
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      printf("Numero[%d][%d]: ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  }
  for(int i = 0; i < 4; i++){
    if((i + 1) %2 == 0){
      for(int j = 0; j < 4; j++){
        pares += matriz[i][j];
      }
    }
  }
  printf("\nSoma dos elementos das linhas pares: %d", pares);

  printf("\nPrimeiro elemento da matriz: [%d]", matriz[0][0]);
  printf("\nUltimo elemento da matriz: [%d]", matriz[3][3]);

  for(int i = 0; i < 2; i++){
    if(i + 1 == 2){
      for(int j = 0; j < 4; j++){
        linha += matriz[i][j];
      }
    }
  }
  printf("\nSoma dos elementos da linha 2: %d", linha);
  
  printf("\nElementos da diagonal principal: ");
  for(int i = 0; i < 4; i++){
    printf("[%d]", matriz[i][i]);
  }

  maior = matriz[0][0];
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      if(matriz[i][j] > maior){
        maior = matriz[i][j];
        maior_i = i;
        maior_j = j;
      }
    }
  }
  printf("\nMaior elemento da matriz [%d][%d]: %d",maior_i + 1, maior_j + 1, maior);

  menor = matriz[0][0];
  for(int i = 0; i < 4; i++){
    for(int j = 0; j <4; j++){
      if(matriz[i][j] < menor){
        menor = matriz[i][j];
        menor_i = i;
        menor_j = j;
      }
    }
  }
  printf("\nMenor elemento da matriz [%d][%d]: %d", menor_i + 1, menor_j + 1, menor);
}