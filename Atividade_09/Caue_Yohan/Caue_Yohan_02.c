#include <stdio.h>
int main(){
    int matriz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
      };
    int i = 0, j = 0, numero = 0;
    
  printf("Digite qual linha voce quer ver:\n");
  scanf("%d", &numero);
  for (int j = 0; j < 3; j++){
   
      printf("Os elementos presentes na linha que você insiriu são: %d\n", matriz[numero-1][j]);
    }     
  
  
   return 0; 
}    
