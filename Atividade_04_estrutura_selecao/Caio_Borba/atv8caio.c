#include <stdio.h>

int main() {
int ano;

  printf("Digite um ano:\n");
  scanf("%d", &ano);
  if (ano % 4 == 0) {
    if (ano % 100 != 0 || ano % 400 == 0) {
      printf("Esse ano ainda não foi ou vai ser um ano bissexto!");
    } else {
      printf("Esse ano ainda nao foi ou vai ser um ano bissexto");
    }
  } else {
    printf("Esse ano ainda nao foi ou vai ser um ano bissexto");
  }
}
