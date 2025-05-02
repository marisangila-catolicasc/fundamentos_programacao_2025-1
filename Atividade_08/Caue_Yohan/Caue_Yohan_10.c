#include <stdio.h>
int main() {

  int vetor[20];
  int i = 0, quantidade = 0, contador = 0;
 
  printf("Digite 20 números para colocar no vetor:\n");
  for (int i = 0; i < 20; i++) {
      scanf("%d", &vetor[i]);
         }      

  printf("Digite um número:\n ");
  scanf("%d", &quantidade);
  for (int i = 0; i < 20; i++) {
     if (vetor[i]  == quantidade) {
        contador++;
     } 
  }
  if (contador > 0) {
    printf("O número %d aparece %d vezes no vetor.\n", quantidade, contador);
  }
   else {
      printf("O número %d não aparece no vetor.\n", quantidade);
   }
return 0;
}
