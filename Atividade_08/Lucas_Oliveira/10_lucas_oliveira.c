#include <stdio.h>
int main() {
    int numeros[20];
    int contador = 0, numero = 0, i = 0;
    for (i = 0; i < 20; i++) {
        printf("Digite um numero para lista: ");
        scanf("%d", &numeros[i]);
    }
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (int i = 0; i < 20; i++) {
        if (numeros[i] == numero){
            contador++;
        }
    }
    if (contador > 0){
        printf("O numero %d aparece %d vezes na lista.\n", numero, contador);
    } else{
        printf("O numero %d nao aparece na lista.\n", numero);
    }

    return 0;
}