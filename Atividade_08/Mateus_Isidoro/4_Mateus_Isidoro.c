#include <stdio.h>
int main() {
  int valor[10] = {5,10,1,8,3,6,9,4,7,8};
   printf("Lendo os numeros na ordem de entrada: \n");
  for (int i = 0; i < 10; i++) {
    printf("%d\n", valor[i]);
  }
   printf("Lendo na ordem inversa: \n");
   for (int i = 9; i >= 0; i--) {
       printf("%d\n", valor[i]);
   }

  return 0;
}