#include <stdio.h>

int main() {
    float numero, soma = 0;
    int i;

    for(i = 1; i <= 8; i++) {
        
        printf("Digite o numero: ", i);
        scanf("%f", &numero);
        
        soma += numero;
    }

    printf("A média dos números é: %.2f\n", soma / 8);

    return 0;
}
