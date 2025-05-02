#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int alvo, chute, tentativas = 0;

    printf("Digite um numero entre 0 e 100: ");
    scanf("%d", &alvo);

    srand(time(NULL));

    do {
        chute = rand() % 101;
        printf("Tentativa %d: %d\n", tentativas + 1, chute);
        tentativas++;
    } while (chute != alvo);

    printf("\nAcertou em %d tentativas!", tentativas);

    return 0;
}
