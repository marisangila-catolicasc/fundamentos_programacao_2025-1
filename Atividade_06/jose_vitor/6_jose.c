#include <stdio.h>

int main() {
    
    int i, incremento, numero;

    printf("Numero: ");
    scanf("%d", &numero);

    printf("Incremento: ");
    scanf("%d", &incremento);
    
    for (i = 0; i <= numero; i += incremento) {
        printf("%d\n", i);
    }

    return 0;
}