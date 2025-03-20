#include <stdio.h>

int main() {
    float valor_inicial, valor_final;
    
    printf("Qual foi o valor Investido?\n");
    scanf("%f", &valor_inicial);
    
    valor_final = valor_inicial * 1.15;
    
    printf("Depois de 3 anos: ");
    printf("%.2f", valor_final);
    printf("\n");

    return 0;
}
