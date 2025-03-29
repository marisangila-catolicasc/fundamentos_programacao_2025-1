#include <stdio.h>

int main(void) {
  int X, Y, Z;

  printf("Digite o valor de X: ");
  scanf("%d", &X);
  printf("Digite o valor de Y: ");
  scanf("%d", &Y);
  printf("Digite o valor de Z: ");
  scanf("%d", &Z);

  if(X == Y && Y == Z){
    printf("Os valores formam um triângulo equilatero.\n");
  }else if(X == Y || Y == Z || X == Z){
    printf("Os valores formam um triângulo isósceles.\n");
  }else{
    printf("Os valores formam um triângulo escaleno.\n");
  }
    return 0;
}