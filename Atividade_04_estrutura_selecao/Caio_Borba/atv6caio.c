#include <stdio.h>

int main(void) {
  int n1, n2, n3;
  printf("Insira 3 numeros inteiros: \n");
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  if (n1 > n2 && n1 > n3) {
    printf("O %d é o maior numero", n1);
  } else if (n2 > n1 && n2 > n3) {
    printf("O %d é o maior numero", n2);
  } else if (n3 > n1 && n3 > n2) {
    printf("O %d é o maior numero", n3);
  } else {
    printf("Os numeros informados são todos iguais");
  }
  return 0;
}
