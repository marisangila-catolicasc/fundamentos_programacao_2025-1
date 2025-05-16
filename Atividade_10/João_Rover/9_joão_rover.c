#include <stdio.h>

int soma_matriz(int linhas, int colunas, int matriz[linhas][colunas]){
  int soma = 0;

  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      soma += matriz[i][j];
    }
  }
  return soma;
}

int main(){
  int matriz[3][3] = {
  {1, 2, 3}, 
  {4, 5, 6}, 
  {7, 8, 9}
};
  int resultado = soma_matriz(3, 3, matriz);

  printf("A soma dos números da matriz é: %d\n", resultado);

  return 0;
}
