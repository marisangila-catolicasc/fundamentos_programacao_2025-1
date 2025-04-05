include <stdio.h>
int main(){
  float number1, number2;
  char resultado;

  printf("Digite o primeiro numero: ");
  scanf("%f", &number1);
  printf("Digite o segundo numero: ");
  scanf("%f", &number2);
  printf("Digite a operação desejada (+, -, *, /): ");
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
    else {
      printf("Erro: divisão por zero\n");
    } 
    return 0;
  } 
}
