#include <stdio.h>
#include <math.h>

int main() {
    int numeroUm, numeroDois, guardar_valor;

    printf("Digite o primeiro número: ");
    scanf("%d", &numeroUm);
    printf("Digite o segundo número: ");
    scanf("%d", &numeroDois);

    guardar_valor = numeroUm;
    numeroUm = numeroDois;
    numeroDois = guardar_valor;

    printf("O primeiro número agora é: %d\n", numeroUm);
}
