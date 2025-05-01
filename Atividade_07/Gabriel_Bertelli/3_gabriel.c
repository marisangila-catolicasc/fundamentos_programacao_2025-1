#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num_usuario, num_gerado, tentativas = 0;

    printf("Digite um número: ");
    scanf("%d", &num_usuario);

    srand(time(NULL));

    do {
        num_gerado = rand();
        tentativas++;
        printf("Número gerado: %d\n", num_gerado);
    } while (num_gerado != num_usuario);

    printf("O número foi encontrado após %d tentativas.\n", tentativas);

    return 0;
}
