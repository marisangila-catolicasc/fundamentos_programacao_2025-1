#include <stdio.h>

int main(void) {
  int N1, N2;
  printf("Insira um número:\n");
  scanf("%d", &N1);
  printf("Insira outro número:\n");
  scanf("%d", &N2);
  while (N1 < N2) {
    printf("%d\n", N1);
    N1++;
    if (N1 == N2) {
      printf("%d\n", N1);
    }
  }
  while (N1 > N2) {
    printf(
        "Agora decrementaremos até deixar os dois com o mesmo valor: %d\n",
        N1);
    N1--;
    if (N1 == N2) {
      printf("%d\n", N1);
    }
  }
  return 0;
}