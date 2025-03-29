#include <stdio.h>

int main() {
  int n1, n2; 
  printf("Digite um numero: ");
  scanf("%d", &n1);
  printf("Digite outro numero: ");
  scanf("%d", &n2);

  if (n1 > n2) {
    printf("o numero %d é maior que %d", n1, n2);
  } else if (n1 < n2) {
    printf("O numero %d é maior que %d", n2, n1);
  } else {
    printf("Os numeros são iguais");
  }

  return 0;
}
