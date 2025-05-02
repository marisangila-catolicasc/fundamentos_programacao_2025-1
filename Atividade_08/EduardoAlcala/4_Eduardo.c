#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int valores[10] = {8, 9, 7, 2, 8, 6, 14, 86, 12, 43}; 
  printf("Os números do vetor em ordem de entrada é:\n");
  for (int i = 0; i <10; i++) {
   printf("%d\n", valores[i]);
  }
  printf("Os números do vetor em ordem de entrada inversa é:\n");
  for (int i = 9; i >=0; i--){
    printf("%d\n", valores[i]);
    }
   return 0;
}