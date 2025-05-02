#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int n1, n2, tentativas = 0;

    printf("Digite um número inteiro, de 0 a 100: ");
scanf("%d", &n1);

srand(time(NULL));

    do {
        n2 = rand() % 101;
        tentativas++;
        printf("Tentativa %d: Número gerado = %d\n", tentativas, n2);
    } while (n2 != n1);

    printf("O número gerado foi %d, depois de %d tentativas!\n", n2, tentativas);

    return 0;
}