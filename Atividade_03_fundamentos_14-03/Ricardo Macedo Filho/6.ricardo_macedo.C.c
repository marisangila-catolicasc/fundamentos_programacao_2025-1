#include <stdio.h>

int main() {
    int numero, antecessor, sucessor;

    printf("digite um numero inteiro: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;
    
    printf("o numero informado foi %d, o antecessor é %d e o sucessor é %d.\n", numero, antecessor, sucessor);

    return 0;
}
