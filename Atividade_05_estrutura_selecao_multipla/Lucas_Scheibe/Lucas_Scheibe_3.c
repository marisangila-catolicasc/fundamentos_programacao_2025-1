#include <stdio.h>
#include <stdlib.h>

int main() {
  float a, b, resu, equa;
  char opc;

  printf("Digite um valor:\n");
  scanf("%f", &a);
  printf("Digite outro valor:\n");
  scanf("%f", &b);
  printf("[+] somar\n");
  printf("[-] subtrair\n");
  printf("[X] multiplicar\n");
  printf("[/] dividir\n");
  printf("Selecione uma opção:\n");
  scanf(" %c", &opc);
  switch (opc) {

  case '+':
    resu = a + b;
    break;
  case '-':
    resu = a - b;
    break;
  case 'X':
    resu = a * b;
    break;
  case '/':
    if (a == 0 || b == 0) {
      printf("Impossível dividir por zero!\n");
      return 0; // unico jeito que encontrei de não aparecer o resultado quando for 0 dividido por 0
    } else {
      resu = a / b;
      break;
    }

  default:
    printf("Opção inválida!\n");
    break;
  }
  printf("O resultado é %.2f\n", resu);
  return 0;
}
