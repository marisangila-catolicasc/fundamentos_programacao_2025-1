#include <stdio.h>
int main() {

    float valor, valor_inicial, valor_final;

    
    printf("Digite o valor do investimento: ");
    
    scanf("%f", &valor_inicial);

    
     valor_final = valor_inicial + ( valor_inicial * 0.05 * 3);
    
    
    printf("O valor final do investimento será de: %f", valor_final);



    return 0;
}