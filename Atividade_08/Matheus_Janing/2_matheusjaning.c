#include <stdio.h>
int main(){

  int numero[2];

  printf("Insira dois numeros inteiros:\n");
  
  for(int i = 0; i < 2; i++){
    scanf("%d", &numero[i]);
  }

  if (numero[0] > numero[1]){
    printf("Numero maior: %d\n", numero[0]);
    printf("Numero menor: %d", numero[1]);
  } else if (numero[0] < numero[1]){
    printf("Numero maior: %d\n", numero[1]);
    printf("Numero menor: %d", numero[0]);
  } else {
    printf("Os numeros sao iguais");
  }
}