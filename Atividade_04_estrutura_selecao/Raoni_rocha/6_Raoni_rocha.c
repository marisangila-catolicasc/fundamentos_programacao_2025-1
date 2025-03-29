#include <stdio.h>

int main() {
  int n1, n2, n3; 
  printf("Digite um numero: ");
  scanf("%d", &n1);
  printf("Digite outro numero: ");
  scanf("%d", &n2);
  printf("Digite mais um numero: ");
  scanf("%d", &n3);
  
  if (n1 > n2 && n1 > n3) {
    printf("o numero %d é maior que %d e %d", n1, n2, n3);
  } else if (n1 < n2 && n3 < n2) {
    printf("O numero %d é maior que %d e %d", n2, n1, n3);
  } else {
    printf("O numero %d é maior que %d e %d", n3, n1, n2);
  }

  return 0;
}
