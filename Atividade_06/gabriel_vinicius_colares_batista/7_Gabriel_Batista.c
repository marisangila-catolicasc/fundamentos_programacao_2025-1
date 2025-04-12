#include <stdio.h>
int main() {

  int nota, media = 0;
  for (int i = 0; i < 8; i++) {
    printf("Digite uma nota:\n");
    scanf("%d", &nota);
    media += nota;

  }
  media = media / 8;
  printf("A média das notas é: %d\n", media);

  return 0;
}