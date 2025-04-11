#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    for (numero = 1; numero <= 100; numero++) {
        soma += numero;
    }
    
    printf("A soma dos primeiros 100 numero naturais eh de: %d\n", soma);
    
  return 0;
}