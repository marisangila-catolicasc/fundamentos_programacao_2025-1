include <stdio.h>
int main() {
  float number1, number2,
  char resultado;

  printf("digite o primeiro numero: ");
  scanf("%f", &number1);
  printf("digite o segundo numero: ");
  scanf("%f", &number2);

  printf("escolha a operacao (+, -, *, /): ");
  scanf(" %c", &resultado);

  switch(resultado){
    case '+':
      printf("%.2f + %.2f = %.2f\n", number1, number2, number1 + number2);
      break;
    case '-':
      printf("%.2f - %.2f = %.2f\n", number1, number2, number1 - number2);
      break;
    case '*':
      printf("%.2f * %.2f = %.2f\n", number1, number2, number1 * number2);
      break;
    case '/':
      if(number2 != 0)
        printf("%.2f / %.2f = %.2f\n", number1, number2, number1 / number2);
      else
        printf("erro: divisao por zero\n");
      break;
    default:
  }
} return 0;