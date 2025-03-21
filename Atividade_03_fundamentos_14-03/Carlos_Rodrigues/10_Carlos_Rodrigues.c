#include <stdio.h>

int main() {

    float valor, valor_inicial, valor_final;
    printf("Me informe o valor do seu investimento: \n");
    scanf("%f", &valor_inicial);
     valor_final = valor_inicial + ( valor_inicial * 0.05 * 3);
    printf("O valor final do seu investimento é: %f", valor_final);
  
    return 0;
}
