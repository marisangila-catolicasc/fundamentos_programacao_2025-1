#include <stdio.h>

int main() {

  int num, num2, num3, total1, total2, total3, total4;

  printf("[+] - 1\n");
  printf("[/] - 2\n");
  printf("[-] - 3\n");
  printf("[*] - 4\n");

  printf("Digite o numero 1: ");
  scanf("%d", &num);
  printf("Digite o numero 2: ");
  scanf("%d", &num2);
  printf("Digite o tipo de operação que você deseja: \n");
  scanf("%d", &num3);

  switch (num3) {
  case 1:
    total1 = num + num2;
    printf("O resultado é: %d\n", total1);
    break;
  case 2:
    if (num2 == 0) {
      printf("Erro: divisão por zero não é permitida.\n");
    } else {
      total2 = num / num2;
      printf("Resultado da divisão = %d\n", total2);
    }
    break;
  case 3:
    total3 = num - num2;
    printf("O resultado é: %d\n", total3);
    break;
  case 4:
    total4 = num * num2;
    printf("O resultado é: %d\n", total4);
    break;
  default:
    printf("Operação inválida");
    break;
  }
  return 0;
}