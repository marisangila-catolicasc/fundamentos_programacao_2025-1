#include <stdio.h>
int main() {

  int vetor[10];
  int numero, numero_encontrar = 0;
 
  printf("Digite 10 números para o vetor:\n");
  for (int i = 0; i < 10; i++) {
      scanf("%d", &vetor[i]);
         }      
  
  printf("Digite o número que queira encontrar:\n");
  scanf("%d", &numero);
  
  for (int i = 0; i < 10; i++) {
    if (vetor[i] == numero) {
      printf("O número foi encontrado na posição %d\n", i);
      numero_encontrar = 1;
     break;  
        }
  }
  if (!numero_encontrar){
    printf("O número não foi encontrado no vetor.\n");
  }
return 0;
}
