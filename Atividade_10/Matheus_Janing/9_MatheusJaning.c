#include <stdio.h>

int soma_matriz(int matriz[3][3]){

  int soma = 0;

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      soma += matriz[i][j];
    }
  }
  return soma;
}

int main(){

  int matriz[3][3];

  printf("Insira os elementos da matriz: \n");
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        printf("[%d][%d]: ", i + 1, j + 1);
        scanf("%d", &matriz[i][j]);
      }
    }
  printf("Soma dos elementos: %d", soma_matriz(matriz));
}