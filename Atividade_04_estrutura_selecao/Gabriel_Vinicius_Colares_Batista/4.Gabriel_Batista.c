#include <stdio.h>

int main(void) {
  int num1;
  int num2;

  printf("Digite dois números e saberá qual é maior, menor ou se são iguais.\n");

  printf("Digite o primeiro número: ");
  scanf("%d", &num1);

  printf("Digite o segundo número: ");
  scanf("%d", &num2);

  
  if (num1 > num2){
    printf("O primeiro número é maior que o segundo.");
  } else if (num1 < num2) {
    printf("O segundo número é maior que o primeiro.");
  } else {
    printf("Os números são iguais.");
  }
  
  return 0;
}
