
#include <stdio.h>
#include <math.h>

int main(void) {
  int num1, num2;
  
  printf("Digite um numero: ");
  scanf("%d", &num1);
  
  printf("Digite outro numero: ");
  scanf("%d", &num2);
  
  printf("\nResultados:\n");
  printf("Soma: %d\n", num1 + num2);
  printf("Subtracao: %d\n", num1 - num2);
  printf("Multiplicacao: %d\n", num1 * num2);
  
  if (num2 != 0) {
    printf("Divisao: %.2f\n", (float)num1 / num2);
    printf("Resto da divisao: %d\n", num1 % num2);
  } else {
    printf("Divisao: Nao e possivel dividir por zero\n");
    printf("Resto da divisao: Nao e possivel dividir por zero\n");
  }
  
  printf("Potencia: %.0f\n", pow(num1, num2));
  
  return 0;
}
