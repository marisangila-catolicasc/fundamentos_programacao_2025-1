#include <stdio.h>

int main() {
    int i, num, maior;

    printf("Digite o numero 1: ");
    scanf("%d", &maior);

    for(i = 1; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &num);

        if(num > maior) {
            maior = num;
        }
    }

    printf("O maior numero eh: %d\n", maior);
    return 0;
}