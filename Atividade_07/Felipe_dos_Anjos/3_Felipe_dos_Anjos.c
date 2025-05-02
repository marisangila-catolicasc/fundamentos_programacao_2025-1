#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_usuario, numero_gerado;
    int tentativas = 0;

    printf("Escolha um número inteiro entre 0 e 99: ");
    scanf("%d", &numero_usuario);

    srand(time(NULL));

    do {
        numero_gerado = rand() % 100; 
        printf("Valor sorteado: %d\n", numero_gerado);
        tentativas++;
    } while (numero_gerado != numero_usuario);

    printf("Parabéns! O número era %d. Você acertou em %d tentativas.\n", numero_gerado, tentativas);

    return 0;
}