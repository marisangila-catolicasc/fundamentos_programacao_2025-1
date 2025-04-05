#include <stdio.h>

int main() {

  int num, num2, num3, result1, resultado2, result3, result4;

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
    result1 = num + num2;
    printf("O resultado é: %d\n", result1);
    break;
  case 2:
    if (num2 == 0) {
      printf("Erro: divisão por zero não é permitida.\n");
    } else {
      resultado2 = num / num2;
      printf("Resultado da divisão = %d\n", resultado2);
    }
    break;
  case 3:
    result3 = num - num2;
    printf("O resultado é: %d\n", result3);
    break;
  case 4:
    result4 = num * num2;
    printf("O resultado é: %d\n", result4);
    break;
  default:
    printf("Operação inválida");
    break;
  }
  return 0;
}