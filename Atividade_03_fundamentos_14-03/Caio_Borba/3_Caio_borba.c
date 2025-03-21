#include <stdio.h>
int main(void) {
  int ano;
  printf("Digite o ano atual:\n");
  sacnf("%d", &ano);
  printf("ótimo %d", ano);
  return 0;
}