
#include <stdio.h>

int main() {
    int valores[10], alvo, i;
    int achou = 0;

    printf("Digite 10 inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("Qual número deseja buscar? ");
    scanf("%d", &alvo);

    for (i = 0; i < 10; i++) {
        if (valores[i] == alvo) {
            printf("Encontrado na posição %d.\n", i + 1);
            achou = 1;
            break;
        }
    }

    if (!achou) {
        printf("Número não está no vetor.\n");
    }

    return 0;
}
