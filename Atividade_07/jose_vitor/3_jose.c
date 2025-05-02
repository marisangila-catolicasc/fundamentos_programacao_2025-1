#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int alvo, sorteio;

    printf("Digite um numero entre 0 e 100: ");
    scanf("%d", &alvo);
    
    srand(time(NULL));

    do {
        sorteio = rand() % 101;  
        printf("%d\n", sorteio);
    } while (sorteio != alvo);

    printf("\nO computador acertou! Numero: %d\n", sorteio);

    return 0;
}