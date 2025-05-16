#include <stdio.h>

int verifica_vetores_iguais(int vet1[], int vet2[]){
  for(int i = 0; i < 10; i++){
    if(vet1[i] < vet2[i]){
      return 0;
    }
  }
  return 1;
}

int main(){

  int vetor1[10], vetor2[10];

  printf("Digite os numeros do primeiro vetor: \n");
  for(int i =0; i < 10; i++){
    printf("Posicao[%d]:", i + 1);
    scanf("%d", &vetor1[i]);
  }

  printf("\nDigite os numeros do segunndo vetor: \n");
  for(int i =0; i < 10; i++){
    printf("Posicao[%d]:", i + 1);
    scanf("%d", &vetor2[i]);
  }

  if(verifica_vetores_iguais(vetor1, vetor2)){
    printf("Os vetores sao iguais!");
  } else{
    printf("Os vetores sao diferentes!");
  }
}