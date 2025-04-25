  #include <stdio.h>
  #include <math.h>

  int main() {

    int quadrado;

    for (int i=0; i<=15; i++) {

      quadrado = pow(i, 2);
      if (quadrado >= 15 && quadrado <= 200) {
        printf("%d \n", quadrado);
      }
    }

    return 0;
  }