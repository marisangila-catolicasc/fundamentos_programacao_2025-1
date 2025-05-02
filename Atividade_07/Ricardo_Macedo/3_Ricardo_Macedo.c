#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, numero_gerado, tentativas = 0;

    // gerador de numeros aleat0rios em tempo real
    srand(time(NULL));

    printf("Digite um numero entre 0 e 99: ");
    scanf("%d", &num);

    do {
        numero_gerado = rand() % 100;
        printf("Numero gerado: %d\n", numero_gerado);
        tentativas++;
    } while (numero_gerado != num);

    printf("Numero encontrado apos %d tentativa(s)!\n", tentativas);

    return 0;
}