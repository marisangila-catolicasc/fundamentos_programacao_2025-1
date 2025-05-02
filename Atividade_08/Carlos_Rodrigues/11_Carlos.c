#include <stdio.h>

int main() {
    int vetor[15], soma = 0;

    for (int x = 0; x < 15; x++) {
        printf("Digite o %d número: ", x + 1);
        scanf("%d", &vetor[x]);
    }

    for (int x = 1; x < 15; x += 2) {  
        soma += vetor[x];
    }
    printf("Soma dos numeros impares: %d\n", soma);
    return 0;
}
