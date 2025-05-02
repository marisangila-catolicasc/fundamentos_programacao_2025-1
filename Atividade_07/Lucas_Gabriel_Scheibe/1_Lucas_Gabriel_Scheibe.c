#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);

    printf("Digite o segundo numero:\n");
    scanf("%d", &b);

    while (a != b) {
        printf("primeiro numero = %d, segundo numero = %d\n", a, b);
        if (a < b) {
            a++;
        } else {
            a--;
        }
    }

    printf("Agora os números sao iguais: %d\n", a);

    return 0;
}