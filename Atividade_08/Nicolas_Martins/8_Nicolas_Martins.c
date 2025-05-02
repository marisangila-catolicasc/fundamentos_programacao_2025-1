#include <stdio.h>

int main() {
    int lista[10], alvo, achou = 0;
    int i;

    printf("Informe 10 números inteiros:\n");
    for (i = 0; i < 10; ++i) {
        printf("Posição %d: ", i + 1);
        scanf("%d", &lista[i]);
    }

    printf("\nQual valor deseja localizar? ");
    scanf("%d", &alvo);
    for (i = 0; i < 10; ++i) {
        if (lista[i] == alvo) {
            printf("Valor %d encontrado na posição %d\n", alvo, i + 1);
            achou = 1;
        }
    }
    if (!achou) {
        printf("Valor não está presente na lista.\n");
    }


    return 0;
}
