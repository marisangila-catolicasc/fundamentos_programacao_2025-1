#include <stdio.h>
int main() {
int tam, i;
float soma = 0, med;

printf("quanto de tamanho tera o vetor:");
    scanf("%d", &tam);
    float vetor[tam];

    for (i = 0; i < tam; i++) {
        printf("digite o numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

      med = soma / tam;

    printf("\na media do vetor é: %.2f\n", med);

    return 0;
}
