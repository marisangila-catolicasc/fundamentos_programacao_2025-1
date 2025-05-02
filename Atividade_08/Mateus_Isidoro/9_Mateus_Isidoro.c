#include <stdio.h>
#include <stdlib.h>
int main() {
  int vetorA[5] = {5,10,1,9,11};
  int vetorB[5] = {13,8,9,6,23};
  int vetorC[10];
  int i = 0;
  int b = 0;
  while (i < 10) {
   if (vetorC[i] == 0){
      vetorC[i] = vetorA[b];
      vetorC[i+1] = vetorB[b];
      b++;
   }
  printf("%d ", vetorC[i]);
  i++;
  
  }
  return 0;
}