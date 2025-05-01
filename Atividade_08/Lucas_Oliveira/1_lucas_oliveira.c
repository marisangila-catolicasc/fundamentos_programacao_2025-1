#include <stdio.h>
int main() {
    float numeros[5];
    float soma = 0;
    int i;
    for (i = 0; i < 4; i++) {
        printf("Digite um numero: ");
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }
    printf("A media dos numeros e: %.2f\n", soma / i);
    return 0;
}