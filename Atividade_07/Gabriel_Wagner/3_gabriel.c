#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int num, sorteado;
    printf("Digite um número: ");
    scanf("%d", &num);
    srand(time(NULL));
    do {
        sorteado = rand() % 100;
        printf("Sorteando: %d\n", sorteado);
    } while (sorteado != num);
    printf("Número encontrado!\n");
    return 0;
}