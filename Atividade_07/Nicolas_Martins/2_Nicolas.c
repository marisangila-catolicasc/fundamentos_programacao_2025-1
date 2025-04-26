#include <stdio.h>

int main(){

  int opcao;
  float numero1, numero2, resultado;

  do { 
  printf("1 - Soma\n");
  printf("2 - Subtração\n");
  printf("3 - Multiplicação\n");
  printf("4 - Divisão\n");  
  printf("5 - Sair\n");
  printf("Escolha uma opção:");
  
  scanf("%d", &opcao);

    if(opcao>=1 && opcao<=4){
      printf("Digite um numero:\n");
      scanf("%f", &numero1);
      printf("Digite outro numero:\n ");
      scanf("%f", &numero2);
    }
  

     switch(opcao) {
      case 1:
        resultado = numero1 + numero2;
        printf("O resultado da soma é: %.2f\n", resultado);
        break;
        case 2:
        resultado = numero1 - numero2;
        printf("O resultado da subtração é: %.2f\n", resultado);
        break;
        case 3:
        resultado = numero1 * numero2;
        printf("O resultado da multiplicação é: %.2f\n", resultado);
        break;
        case 4:
        resultado = numero1 / numero2;
        printf("O resultado da divisão é: %.2f\n", resultado);
        break;
        case 5:
        printf("Encerrado\n");
        break;
        default:
        printf("Opção inválida!\n");
        break;
     }  

  } while(opcao!=5);
       


    
     
       

  return 0;
}