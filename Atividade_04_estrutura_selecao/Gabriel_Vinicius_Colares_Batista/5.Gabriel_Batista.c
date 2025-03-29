#include <stdio.h>

int main(void) {
  int idade;

  printf("Digite sua idade para saber se pode votar e sua classe:\n");
  scanf("%d", &idade);

  if (idade < 18) {
    printf("Sua classe é: Não Eleitor e você não pode votar.\n");
  } else if (idade >= 18 && idade <= 65) {
    printf("Sua classe é: Eleitor Obrigatório e você pode votar.\n");
  } else {
    printf("Sua classe é: Eleitor Facultativo e você pode votar.\n");
  }

  return 0;
}
