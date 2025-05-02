#include <stdio.h>

int main() {
    int vetor[15], soma = 0;

    for (int i = 0; i < 15; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 1; i < 15; i += 2) {  
        soma += vetor[i];
    }

    printf("Soma dos numeros impares: %d\n", soma);
    return 0;
}
