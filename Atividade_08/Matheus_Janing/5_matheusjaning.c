#include <stdio.h>

int main(){
  int vetor_a[5], vetor_b[5], vetor_c[5];

   printf("Digite 5 numeros para o vetor A:\n");
  for (int i = 0; i < 5; i++){
     scanf("%d", &vetor_a[i]);
  }

  printf("\nDigite 5 numeros para o vetor B:\n");
  for (int i = 0; i < 5; i++) {
     scanf("%d", &vetor_b[i]);
  }

  for (int i = 0; i < 5; i++){
    vetor_c[i] = vetor_a[i] + vetor_b[i];
  }

  printf("\nVetor C (soma de A + B):\n");
  for (int i = 0; i < 5; i++){
    printf("C[%d] = %d\n", i, vetor_c[i]);
   }
}