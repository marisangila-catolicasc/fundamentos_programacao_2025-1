#include <stdio.h>

int verifica_vetores_iguais(int vet1[], int vet2[], int tamanho){
  for(int i = 0; i<tamanho; i++){
    if(vet1[i] != vet2[i]){
      return 0;
    }
  }

  return 1;
  }

int main(){
  int vet1[5] = {1, 2, 3, 4, 5};
  int vet2[5] = {1, 2, 3, 4, 5};
  int tamanho = 5;

  printf("vetor 1 e vetor 2 são iguais? %d\n", verifica_vetores_iguais(vet1, vet2, tamanho));

    
  return 0;
}
