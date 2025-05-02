#include <stdio.h>

int main() {
float valores[5];
float maior, menor;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &valores[i]);
    }

    maior = menor = valores[0];

    for (int i = 1; i < 5; i++) {
        if (valores[i] > maior) maior = valores[i];
        if (valores[i] < menor) menor = valores[i];
    }

    printf("O maior número será: %.2f\n", maior);
    printf("O menor número será: %.2f\n", menor);

    return 0;
}
