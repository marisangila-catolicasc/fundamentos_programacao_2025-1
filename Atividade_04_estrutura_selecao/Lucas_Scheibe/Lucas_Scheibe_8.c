#include <stdio.h>

int main() {
  int a;

  printf("Digite o ano que voce nasceu:\n");
  scanf("%d", &a);

  if (a <= 0) {
    printf("erro");
  }
  else if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0)) {
    printf("e bissexto\n");
  }
  else {
    printf("nao e bissexto");
  }
}