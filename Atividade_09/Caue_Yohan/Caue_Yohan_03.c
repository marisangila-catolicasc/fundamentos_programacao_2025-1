#include <stdio.h>
int main(void) {

  int matriz[4][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16}
  };
  int somalinhaspares = 0, somalinha2 = 0, valormaior = 0, valormenor = 100, i = 0, j = 0, coluna = 0, linha = 0, coluna2 = 0, linha2 = 0;
 
  
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++){
      if (i % 2 ==0){
        somalinhaspares += matriz[i][j];
    }
   }
  }

  printf("O valor do primeiro elemento da matriz e %d\n", matriz[0][0]);
  printf("O valor do ultimo elemento da matriz e %d\n", matriz[3][3]); 
    
  somalinha2 = matriz[1][0] + matriz[1][1] + matriz[1][2] + matriz[1][3];

  printf("A soma dos valores da segunda linha e %d\n", somalinha2);

  printf("Estes sao os elementos da diagonal principal: \n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++){
      if (i == j){
        printf("%d \n", matriz[i][j]);
      }
    }
  }

  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if (matriz[i][j] > valormaior){
        valormaior = matriz[i][j];
        linha = i;
        coluna = j;
      }
    }
  }
  printf("A posiçao do maior valor e %d %d\n", linha, coluna);

  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if (matriz[i][j] < valormenor){
        valormenor = matriz[i][j];
        linha2 = i;
        coluna2 = j;
      }
    }
  }
  printf("A posicao do menor valor e %d %d\n", linha2, coluna2);
return 0;
}
