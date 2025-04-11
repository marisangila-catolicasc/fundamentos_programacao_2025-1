#include <stdlib.h>
#include <stdio.h>
int main() {
    int numero, incremento;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Digite um incrementador: ");
    scanf("%d", &incremento);

    for (int contador = 0; contador <= numero; contador += incremento)
    {
        printf("%d\n", contador);
    }
    return 0;
}