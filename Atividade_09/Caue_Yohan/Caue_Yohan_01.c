#include <stdio.h>
int main(){
    int matriz[2][3];
    int somatorio = 0, i = 0, j = 0;
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++){
      printf("Coloque os elementos da matriz:\n");
        scanf("%d\n", &matriz[i][j]);
    }
  }
  
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++){
      somatorio += matriz[i][j];
    }
  }
  printf("A soma dos elementos da matriz é: %d\n", somatorio);


   return 0; 
}    
