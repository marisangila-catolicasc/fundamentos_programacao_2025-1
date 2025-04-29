#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int number;
    int sorted;
    int attempt = 0;

    printf("Digite um numero de 0 a 250: ");
    scanf("%d", &number);

    srand(time(NULL));
    do {
        sorted = rand() % 251;
        attempt++;
    } while(number != sorted);

    printf("O numero %d foi acertado na tentativa %d!", sorted, attempt);

    return 0;
}