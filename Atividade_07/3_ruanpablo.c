#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, sorteio;
    printf("Digite um numero: ");
    scanf("%d", &num);

    srand(time(NULL));

    do {
        sorteio = rand() % 100;
        printf("Sorteio: %d\n", sorteio);
    } while (sorteio != num);

    printf("Acertou!\n");
    return 0;
}