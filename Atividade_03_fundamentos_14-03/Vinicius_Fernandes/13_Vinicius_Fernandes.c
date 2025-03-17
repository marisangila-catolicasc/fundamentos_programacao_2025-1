#include <stdio.h>
#include <math.h>

int main(void) {
  int a, b, temp;
  
  printf("Me de duas váriaveis(A e B):\n");
  scanf("%d %d", &a, &b);

  temp = a;
  a = b;
  b = temp;
  
  printf("Agora A é %d e B é %d", a, b);
  
  return 0;
}