#include <stdio.h>

int main() {
  int num1, num2;
  printf("Digite 1 numero\n");
  scanf("%d", &num1);
  printf("Digite 1 numero\n");
  scanf("%d", &num2);

  if (num1 > num2) {
    printf("O numero %d é maior que o %d", num1, num2);
  } else if (num2 > num1) {
    printf("O numero %d é maior que o %d", num2, num1);
  } else {
    printf("Os dois sao iguais");
  }
  return 0;
}
