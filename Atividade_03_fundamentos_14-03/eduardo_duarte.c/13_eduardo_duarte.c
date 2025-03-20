#include <stdio.h>

int main(){
    int valor1;
    int valor2;
    int inversor;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &valor1);
    printf("Digite o segundo valor:\n");
    scanf("%d", &valor2);

    inversor = valor1;
    valor1 = valor2;
    valor2 = inversor;

    printf("Agora o primeiro valor eh %d e o segundo valor eh %d", valor1, valor2 );

    return 0;
}