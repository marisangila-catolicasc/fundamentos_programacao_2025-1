#include <stdio.h>
#include <stdlib.h>

int main() {
  float a, b, resultado, equacao;
  char opcao;

  printf("Digite o primeiro valor:");
  scanf("%f", &a);
  printf("Digite o segundo valor:");
  scanf("%f", &b);
  printf("[+] para somar\n");
  printf("[-] para subtrair\n");
  printf("[X] para multiplicar\n");
  printf("[/] para dividir\n");
  printf("Escolha uma opção:");
  scanf(" %c", &opcao);
  switch (opcao) {

  case '+':
    resultado = a + b;
    break;
  case '-':
    resultado = a - b;
    break;
  case 'X':
    resultado = a * b;
    break;
  case '/':
    if (a == 0 || b == 0) {
      printf("Impossível dividir por zero!\n");
      return 0;
    } else {
      resultado = a / b;
    }
    break;
  default:
    printf("Opção inválida!\n");
    break;
  }
  printf("O resultado é %.2f\n", resultado);
  return 0;
}