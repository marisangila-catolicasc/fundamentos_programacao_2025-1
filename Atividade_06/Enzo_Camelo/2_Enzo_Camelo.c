#include <stdio.h>

int main() {

  int quadrado;

  for (int i=0; i<=15; i++) {

    quadrado = i * i;
    
    if (quadrado >= 15 && quadrado <= 200) {
      printf("%d \n", quadrado);
    }
  }
}