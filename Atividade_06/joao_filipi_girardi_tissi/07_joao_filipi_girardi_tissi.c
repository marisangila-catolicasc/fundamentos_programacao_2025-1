#include <stdio.h>

int main() {
  int num, somatorio, media;
  num = 0;
  somatorio = 0;
  media = 0;

  for(int i = 1; i <= 8; i++){
    printf("Digite o %dº número: ", i);
    scanf("%d", &num);
    somatorio += num;
  }
  media = somatorio / 8;
  printf("A média dos números digitados é: %d", media);
  return 0;
}