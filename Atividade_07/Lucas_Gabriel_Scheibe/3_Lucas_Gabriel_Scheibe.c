
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num_u, num_g, tentativas = 0;

    printf("Digite um numero menor que 100:\n");
    scanf("%d", &num_u);

    srand(time(NULL));

    do {
        num_g = rand() % 100;
        tentativas++;
        printf("Numero gerado: %d\n", num_g);
    } while (num_g != num_u);

    printf("O numero foi encontrado apos %d tentativas.\n", tentativas);

    return 0;
}
