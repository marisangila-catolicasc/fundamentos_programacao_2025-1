#include <stdio.h>
int main() {
    int tamanho, i;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int valores[tamanho];
    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    int menor = valores[0];
    int maior = valores[0];
    for (i = 1; i < tamanho; i++) {
        if (valores[i] < menor) {
            menor = valores[i];
        }
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }
    printf("\nMaior valor: %d", maior);
    printf("\nMenor valor: %d\n", menor);
    return 0;
}
