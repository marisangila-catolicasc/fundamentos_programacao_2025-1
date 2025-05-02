#include <stdio.h>

int main()
{
    int vector[20];
    int number;
    int sum = 0;

    printf("Digite 20 valores inteiros para o vetor: ");
    for (int i=0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        scanf("%d", &vector[i]);
    }

    printf("Agora digite um valor inteiro: ");
    scanf("%d", &number);

    for (int i=0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        if (number == vector[i]) {
            sum++;
        }
    }

    printf("O numero digitado aparece %d vezes no vetor!", sum);

    return 0;
}