
#include <stdio.h>
int main() {
  int opcao;
  float num1, num2, resultado;
  
  do {
    printf("\n=== Calculadora ===\n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Sair\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);
    
    if (opcao >= 1 && opcao <= 4) {
      printf("Digite o primeiro numero: ");
      scanf("%f", &num1);
      printf("Digite o segundo numero: ");
      scanf("%f", &num2);
      
      switch(opcao) {
        case 1:
          resultado = num1 + num2;
          printf("\nResultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
          break;
        case 2:
          resultado = num1 - num2;
          printf("\nResultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
          break;
        case 3:
          resultado = num1 * num2;
          printf("\nResultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
          break;
        case 4:
          if (num2 != 0) {
            resultado = num1 / num2;
            printf("\nResultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
          } else {
            printf("\nErro: Divisao por zero!\n");
          }
          break;
      }
    } else if (opcao != 5) {
      printf("\nOpcao invalida!\n");
    }
    
  } while (opcao != 5);
  
  printf("\nCalculadora encerrada!\n");
  return 0;
}
