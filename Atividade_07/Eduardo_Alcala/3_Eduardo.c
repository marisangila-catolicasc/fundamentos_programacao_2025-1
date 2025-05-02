#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, numero_gerado, tentativas = 0;

    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(time(NULL)); // Garante aleatoriedade diferente a cada execução

    // Pede para o usuário digitar um número
    printf("Digite um numero entre 0 e 99: ");
    scanf("%d", &num);

    // Gera números até encontrar o número digitado
    do {
        numero_gerado = rand() % 100; // Gera número entre 0 e 99
        printf("Numero gerado: %d\n", numero_gerado);
        tentativas++;
    } while (numero_gerado != num);

    printf("Numero encontrado apos %d tentativa(s)!\n", tentativas);

    return 0;
}
