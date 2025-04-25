#include <stdio.h>
int main() {
    int n, soma = 0;
    float media;

    for (int i = 0; i < 8; i++)   {
        printf("Digite um numero: ");
        scanf("%d", &n);
        soma += n;
    }
    media = soma / 8.0;
    printf("A media dos numeros eh: %.2f\n", media);

    return 0;
}
