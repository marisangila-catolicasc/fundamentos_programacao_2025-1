#include <stdio.h>

int main(){

  int operacao;
  float numero1, numero2;

  printf("Informe um numero: ");
  scanf("%f", &numero1);

  printf("Informe outro numero: ");
  scanf("%f", &numero2);

  printf("Qual operacao deseja realizar? \n");
  printf("[1] - Soma \n");
  printf("[2] - Subtracao \n");
  printf("[3] - Multiplicacao \n");
  printf("[4] - Divisao \n");
  scanf("%d", &operacao);
  
  switch(operacao){
    case 1:
      printf("O resultado da soma e: %.2f", numero1 + numero2);
    break;

    case 2:
      printf("O resultado da subtracao e: %.2f", numero1 - numero2);
    break;

    case 3:
      printf("O resultado da multiplicacao e: %.2f", numero1 * numero2);
    break;

    case 4:
      if(numero2 == 0){
        printf("Nao e possivel fazer a divisao por zero! \n");
      } else {
        printf("O resultado da divisao e: %.2f", numero1 / numero2);
      }
    break;
      
    default:
      printf("Operacao invalida, utilize as opcoes 1, 2, 3 ou 4! \n");
    break;

    
  }
  
  return 0;
}