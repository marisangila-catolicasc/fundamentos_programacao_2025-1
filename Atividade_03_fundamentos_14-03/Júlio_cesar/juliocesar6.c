#include <stdio.h>
int main() {
  int valor, antecessor, sucessor;

    printf(" Digite um valor inteiro: ");
    scanf("%d", &valor);


  
     antecessor = valor - 1;
     sucessor = valor + 1;
    printf("O sucessor de %d será: %d\n", valor, sucessor);
    printf("O antecessor de %d será: %d\n", valor, antecessor);

    return 0;
}