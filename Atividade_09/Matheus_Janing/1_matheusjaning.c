#include <stdio.h>
int main(){
  int matriz[2][3], soma = 0;
  
  printf("Insira os numeros que serao inseridos na matriz:\n");
  
  for (int i = 0; i < 2; i++){
    for (int j = 0; j <3; j++){
      printf("Numero[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
      soma += matriz[i][j];
    }
  }

  printf("Soma dos elementos da matriz: %d", soma);
}