#include <stdio.h>

int main() {
    int value[10], alvo, i;
    int found = 0;

    printf("Digite 10 inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &value[i]);
    }

    printf("Qual número deseja buscar? ");
    scanf("%d", &alvo);

    for (i = 0; i < 10; i++) {
        if (value[i] == alvo) {
            printf("Encontrado na posição %d.\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Número não está no vetor.\n");
    }

    return 0;
}