#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero, incremento;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Digite o incremento: ");
    scanf("%d", &incremento);

    printf("Saida do programa:\n");

    for (int i = 0; i <= numero; i += incremento) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
