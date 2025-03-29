#include <stdio.h>

/*
8. Fa¸ca um programa que verifique se o ano ´e bissexto. O ano deve ser
informado pelo usu´ario com 04 d´ıgitos e n˜ao pode ser menor ou igual a 0. Para
saber se o ano ´e bissexto: • Deve ser divis´ıvel por 4 e n˜ao divis´ıvel por
100 ou; • Deve ser divis´ıvel por 400.
*/

int main() {
  int ano;

  // Solicita o ano ao usuário
  printf("Digite um ano (com 4 dígitos): ");
  scanf("%d", &ano);

  if (ano <= 0) {
    printf("O ano tem q ser maior q 0\n");
    return 1;
  }
  // Verifica se o ano é bissexto
  if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
    printf("%d é bissexto.\n", ano);
  } else {
    printf("%d não é bissexto.\n", ano);
  }

  return 0;
}
