#include <stdio.h>
int main()
{
  int  opcao;
  float num1, num2, resultado;

  do {
    printf("\nEscolha uma dessas opções:\n");
    printf("1- Somar\n");
    printf("2- Subtrair\n");
    printf("3- Multiplicar\n");
    printf("4- Dividir\n");
    printf("5- Sair\n");

    printf("\nDigite uma opção que deseja utilizar:\n");
    scanf("\n%d", &opcao);

  if (opcao >= 1 && opcao <= 4) {
    
    printf("\nDigite o primeiro número:");
    scanf("%f", &num1);
    
    printf("\nDigite o segundo número:");
    scanf("%f", &num2);
  }
    switch (opcao) {
      case 1:
        resultado = num1 + num2;
        printf("\nA soma é: %.2f\n", resultado);
        break;

      case 2:;
        resultado = num1 - num2;
        printf("\nA subtração é: %.2f\n", resultado);
        break;

      case 3:;
        resultado = num1 * num2;
        printf("\nA multiplicação é: %.2f\n", resultado);
        break;

      case 4:; 
        if (num2 != 0) {
            resultado = num1 / num2;
            
          printf("\nA divisão é: %.2f\n", resultado);}
        else { 
          printf("\nNão é possível dividir por zero\n");
        }
        break;
        
      case 5:
        printf("\nSaindo do programa...\n");
        break;
    
      default:
        printf("\nOpção inválida, tente novamente.\n"); 
        break;
  }
  } while (opcao != 5);
    
  return 0; 
} 
