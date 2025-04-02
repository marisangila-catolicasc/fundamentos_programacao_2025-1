#include <stdio.h>

int main(void) {
  int x, y, z;
  printf("Digite o primeiro lado:\n");
  scanf("%d", &x);
  printf("Digite o segundo lado:\n");
  scanf("%d", &y);
  printf("Digite o terceiro lado:\n");
  scanf("%d", &z);
  if (x == y && y == z)
    printf (">> Equilátero\n");
  else if (x == y || y == z || z == x)
    printf (">> Isósceles\n");
  else
    printf (">> Escaleno\n");
  
  
  
  
  
    
  return 0;
}