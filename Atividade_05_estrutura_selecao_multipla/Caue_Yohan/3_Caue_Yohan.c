#include <stdio.h>

int main(void) {
  char operacao;
  float num1, num2, resultado;
  printf("DIgite um número: \n");
  scanf("%f", &num1);
  printf("Digite outro número: \n");
  scanf("%f", &num2);
  printf("|CÓDIGO|OPERAÇÃO| \n");
  printf("|+| Soma | \n");
  printf("|-| Subtração | \n");
  printf("|*| Multiplicação | \n");
  printf("|/| Divisão | \n");
  printf("Digite um dos simbolos matemáticos a cima: ");
  scanf(" %c", &operacao);
    switch(operacao){
  case '+':
      resultado = num1 + num2;
      printf("Resultado: %.2f\n", resultado);
      break;
      case '-':
      resultado = num1 - num2;
      printf("Resultado: %.2f\n", resultado);
      break;
      case '*':
      resultado = num1 * num2;
      printf("Resultado: %.2f\n", resultado);
      break;
      case '/':
      resultado = num1 / num2;
      printf("Resultado: %.2f\n", resultado);
  
      default:
        printf("Código inválido\n");
   
  return 0;
}
}