#include <stdio.h>

int main(int argc, char const *argv[]) {
    int numero;
    int soma = 0;

    for (int i = 0; i < 8; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numero);
        soma += numero;
    }

    float media = soma / 8.0;

    printf("A media dos numeros informados é: %.2f\n", media);

    return 0;
}
