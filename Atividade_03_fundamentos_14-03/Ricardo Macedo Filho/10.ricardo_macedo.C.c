#include <stdio.h>

int main() {
    float valorInicial, valorFinal;
    float taxaJuros = 0.05;
    int anos = 3; 

    printf("digite o valor investido: ");
    scanf("%f", &valorInicial);

    valorFinal = valorInicial + (valorInicial * taxaJuros * anos);

    printf("após %d anos, porto terá R$ %.2f\n", anos, valorFinal);

    return 0;
}
