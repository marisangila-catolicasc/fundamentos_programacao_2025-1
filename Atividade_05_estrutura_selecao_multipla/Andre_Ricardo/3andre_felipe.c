#include <stdio.h>

int main() {
  int a, b;
  float resultado;
  char operacao;

  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);

  printf("[+] - Soma \n");
  printf("[-] - Subtracao \n");
  printf("[*] - Multiplicacao \n");
  printf("[/] - Divisao \n");
  printf("Digite a operacao desejada: ");
  scanf(" %c", &operacao);

  if (operacao == '+') {
    resultado = a + b;
    printf("O resultado eh: %.2f", resultado);
  } else if (operacao == '-') {
    resultado = a - b;
    printf("O resultado eh: %.2f", resultado);
  } else if (operacao == '*') {
    resultado = a * b;
    printf("O resultado eh: %.2f", resultado);
  } else if (operacao == '/') {
    if (b != 0) { 
      resultado = (float) a / b;
      printf("O resultado é: %.2f", resultado);
    } else {
      printf("Voce nao pode dividir por zero!");
    }
} else {
    printf("Operacao invalida");
}
  return 0;
}
