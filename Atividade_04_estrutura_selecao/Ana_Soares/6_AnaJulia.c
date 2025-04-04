#include <stdio.h>

int main(void) {
  int num1, num2, num3;
  ;

  printf("Digite o primeiro numero: \n");
  scanf(" %d", &num1);
  printf("Digite o segundo numero: \n");
  scanf(" %d", &num2);
  printf("Digite o terceiro numero: \n");
  scanf(" %d", &num3);

  if (num1 > num2 && num1 > num3) {
    printf("Numero 1 eh o maior");
  } else if (num2 > num1 && num2 > num3) {
    printf("Numero 2 eh o maior");
  } else {
    printf("Numero 3 eh o maior");
  }

  return 0;
}