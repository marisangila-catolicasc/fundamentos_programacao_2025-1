#include <stdio.h>

int main() {
  float n1, n2, resultado;
  char operacao;
  
  printf("Insira o primeiro número: ");
  scanf("%f", &n1);
  
  printf("Insira o segundo número: ");
  scanf("%f", &n2);

  printf("Digite a operação: \n");
  printf("[+] - Soma\n");
  printf("[-] - Subtração\n");
  printf("[/] - Divisão\n");
  printf("[*] - Multiplicação\n");
  scanf(" %c", &operacao);
  
  switch (operacao)
  {
    case '+':
      resultado = n1 + n2;
      printf("%.2f + %.2f = %.2f\n", n1, n2, resultado);
      break;

    case '-':
      resultado = n1 - n2;
      printf("%.2f - %.2f = %.2f\n", n1, n2, resultado);
      break;

    case '/':
      if (n2 == 0) {
        printf("O divisor não pode ser zero\n");
      }
        
      else {
        resultado = n1 / n2;
        printf("%.2f / %.2f = %.2f\n", n1, n2, resultado);
      }
      break;

    case '*':
      resultado = n1 * n2;
      printf("%.2f * %.2f = %.2f\n", n1, n2, resultado);
      break;

    default:
      printf("Operação nula\n");
  }


  return 0;
}