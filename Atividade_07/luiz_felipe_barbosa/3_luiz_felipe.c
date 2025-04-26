#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, random_num;

    // Solicita que o usuário digite um número
    printf("Digite um numero: ");
    scanf("%d", &num);

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera números aleatórios até o número gerado ser igual ao informado
    do {
        // Gera um número aleatório entre 0 e 100
        random_num = rand() % 101;
        printf("Numero gerado: %d\n", random_num);
    } while (random_num != num); // Repete até o número gerado ser igual ao informado

    printf("Numero gerado igual ao informado: %d\n", random_num);

    return 0;
}
