#include <stdio.h>

int main() {
  int num1, num2;

  printf("primeiro numero: ");
  scanf("%d", &num1);

  printf("segundo numero: ");
  scanf("%d", &num2);

  if (num1 < num2) {
    printf("\ndeixando eles iguais:\n");
    while (num1 < num2) {
      printf("%d\n", num1);
      num1++;
    }
  } else if (num1 > num2) {
    printf("\ndeixando eles iguais:\n");
    while (num1 > num2) {
      printf("%d\n", num1);
      num1--;
    }
  } else {
    printf("\neles ja são iguais\n");
  }

  printf("\n agora os dois numeros são: %d\n", num1);

  return 0;
}
