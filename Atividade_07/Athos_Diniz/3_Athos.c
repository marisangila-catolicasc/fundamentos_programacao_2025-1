
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num_usuario, aleatorio, tentativas = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num_usuario);

    srand(time(NULL));

    do {
        aleatorio = rand();
        tentativas++;
        printf("Tentativa %d: número = %d\n", tentativas, aleatorio);
    } while (aleatorio != num_usuario);

    printf("Número encontrado após %d tentativas!\n", tentativas);

    return 0;
}
