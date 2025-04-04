#include <stdio.h>

int main() {
  float a, b, resultado;
  char operador;

  printf("Digite dois números \n");
  scanf("%f %f", &a, &b);

  printf("Digite a operação desejada (+ para soma, - para subtração, * para multiplicação e / para divisão): \n");
  scanf(" %c", &operador);

  switch (operador)
    {
      case '+':
        resultado = a + b;
        printf("O resultado é: %.2f", resultado);
        break;
      case '-':
        resultado = a - b;
        printf("O resultado é: %.2f", resultado);
        break;
      case '*':
        resultado = a * b;
        printf("O resultado é: %.2f", resultado);
        break;
      case '/':
        if (b <= 0)
        {
          printf("Não é possível dividir por zero ou por um número negativo");
        }
        else {
          resultado = a / b;
          printf("O resultado é: %.2f", resultado);
        }
        break;
      default:
        printf("Operação inválida");
        break;
    }
    

  return 0;
}