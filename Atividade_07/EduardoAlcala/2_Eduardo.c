#include <stdio.h>
int main() {

  int i = 0, num1, num2, total;

  while (1) {

    printf("Escolha o calculo que deseja fazer!\n\n");

  printf("1 - Somar");
  printf("\n2 - Subtrair");
  printf("\n3 - Multiplicar");
  printf("\n4 - Dividir");
  printf("\n5 - Sair");
  printf("\n\nEscolha uma opcao: ");
  scanf("%d", &i);
  
  printf("\nPrimeiro numero: ");
  scanf("%d", &num1);
  
  printf("\nSegundo numero: ");
  scanf("%d", &num2);

  
  if (i == 1){
    total = num1 + num2;
    printf("\n\nO resultado e: %d\n\n", total);
  } else if (i == 2) {
    total = num1 - num2;
    printf("\n\nO resultado e: %d\n\n", total);
  } else if (i == 3) {
    total = num1 * num2;
    printf("\n\nO resultado e: %d\n\n", total);
  } else if (i == 4) {
    total = num1 / num2;
    printf("\n\nO resultado e: %d\n\n", total);
  } else if (i == 5) {
    printf("Saindo...");
  }
}

printf("\n\nSaiuu");
  return 0;
}