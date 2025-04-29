#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int alvo, sorteado, tentativas = 0;
    printf("Digite um numero: ");
    scanf("%d", &alvo);

    srand(time(NULL));
    do {
        sorteado = rand() % 100;  // limita de 0 a 99
        tentativas++;
        printf("Tentativa %d: %d\n", tentativas, sorteado);
    } while (sorteado != alvo);

    printf("Numero encontrado apos %d tentativas!\n", tentativas);
    return 0;
}
