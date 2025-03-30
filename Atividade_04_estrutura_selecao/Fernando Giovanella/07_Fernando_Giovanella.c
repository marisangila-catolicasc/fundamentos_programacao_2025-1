#include <stdio.h>

int main(){

  int x, y, z;

  printf("Informe o valor de de um lado: ");
  scanf("%d", &x);

  printf("Informe o valor de de um lado: ");
  scanf("%d", &y);

  printf("Informe o valor de de um lado: ");
  scanf("%d", &z);

  if (x == y && y == z){
    printf ("O triangulo e equilátero! ");
  }else if (x == y || y == z || z == x){
    printf ("O triangulo e isósceles! ");
  }else{
    printf ("O triangulo e escaleno! ");
  }
  
return 0;
}