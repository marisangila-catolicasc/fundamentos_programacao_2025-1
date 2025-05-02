#include <stdio.h>
int main() {
    int vetor[20], i, num, cont = 0;

    for (i = 0; i < 20; i++) {
        printf("digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("digite o numero pra contar: ");
    scanf("%d", &num);

    for (i = 0; i < 20; i++) {
        if (vetor[i] == num) {
            cont++;
        }
    }

    printf("\nnumeros de vezes que aparece %d \n", cont);

    return 0;
}
