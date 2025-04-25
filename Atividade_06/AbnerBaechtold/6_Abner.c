#include <stdio.h>

int main() {
    int numero, incremento, i;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);
    printf("Digite um numero incremento inteiro: \n");
    scanf("%d", &incremento);

    for(i = 0; i <= numero; i += incremento) {
        printf("%d\n", i);
    }

    return 0;
}