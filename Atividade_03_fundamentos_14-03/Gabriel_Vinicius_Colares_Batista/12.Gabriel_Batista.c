#include <stdio.h>
#include <math.h>

int num1;
int num2;

int main(void) {

  printf("Digite o primeiro número:\n");
  scanf("%d", &num1);

  printf("Digite o segundo número: ");
  scanf("%d", &num2);

  //operações

  printf("A soma dos números é: %d\n\n", num1 + num2);
  printf("A subtração do primeiro pelo segundo: %d\n\n", num1 - num2);
  printf("Multiplicação dos dois números: %d\n\n", num1 * num2);
  printf("A divisão do primeiro pelo segundo: %d\n\n", num1 / num2);
  double potencia = pow(num1, num2); // Calcula a potência (num1 elevado a num2)
  int resto = (num2 != 0) ? num1 % num2 : 0;

  double divisao;

  if (num2 != 0) {
      printf("Divisão: %.2f\n", divisao);
      printf("Resto da divisão: %d\n", resto);
  } else {
      printf("Divisão: Indefinido (divisão por zero)\n");
      printf("Resto da divisão: Indefinido (divisão por zero)\n");
  }

  printf("Exponentiação (primeiro elevado ao segundo): %.2f\n", potencia);


}
