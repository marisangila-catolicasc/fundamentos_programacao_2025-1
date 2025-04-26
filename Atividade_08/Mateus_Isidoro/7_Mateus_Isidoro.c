#include <stdio.h>
int main() {
  int valor[10] = {5,10,1,8,3,6,9,4,7,8};
  int valor2[10];
   printf("lista 2: \n");
   for (int i = 9; i >= 0; i--) {
      valor2[i] = valor[i];
       printf("%d\n", valor2[i]);
   }

  return 0;
}