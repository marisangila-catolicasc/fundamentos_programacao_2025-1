#include <stdlib.h>
#include <stdio.h>
int main() {
    int numero, somatorio;
    numero = 0;
    somatorio = 0;
    for (int contador = 0; contador < 8; contador++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        somatorio += numero;
       
    }
    printf("\nA media dos numeros eh %d", somatorio/8);
    return 0;
}