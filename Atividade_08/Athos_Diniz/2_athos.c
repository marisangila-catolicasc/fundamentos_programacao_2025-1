
#include <stdio.h>

int main() {
    int tamanho, i;
    float maior, menor;

    printf("Informe quantos valores deseja inserir: ");
    scanf("%d", &tamanho);

    float lista[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &lista[i]);
    }

    maior = lista[0];
    menor = lista[0];

    for (i = 1; i < tamanho; i++) {
        if (lista[i] > maior) {
            maior = lista[i];
        }
        if (lista[i] < menor) {
            menor = lista[i];
        }
    }

    printf("Maior número: %.2f\n", maior);
    printf("Menor número: %.2f\n", menor);

    return 0;
}
