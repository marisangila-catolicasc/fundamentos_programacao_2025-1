#include <stdio.h>
int main() {
    int numeros[10];
    int i, numero;
    for (i = 0; i < 10; i++) {
        printf("Digite um numero para lista: ");
        scanf("%d", &numeros[i]);
    }
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (i = 0; i < 10; i++) {
        if (numeros[i] == numero){
            printf("O numero %d esta na posicao %d da lista!\n", numeros[i], i);
            break;
        }
    }
    if (i == 10){
        printf("O numero %d nao esta na lista!\n", numero);
    }

    return 0;
}