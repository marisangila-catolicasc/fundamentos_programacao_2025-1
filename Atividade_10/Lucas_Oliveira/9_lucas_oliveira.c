#include <stdio.h>
#include <string.h>
int soma_matriz(int matriz[3][3]){
  int soma = 0;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      soma = matriz[i][j] + soma;
    }
  }
  printf("Soma da matriz eh %d", soma);
  return 0;
}

int main(void) {
  int matriz[3][3];
  printf("Digite os elementos da matriz:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Linha %d, coluna %d da matriz: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  } 
  soma_matriz(matriz);
 
  return 0;

}