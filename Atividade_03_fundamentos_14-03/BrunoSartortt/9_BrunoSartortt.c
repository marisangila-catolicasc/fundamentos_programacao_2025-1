#include <stdio.h>
int main() {
    float valor1, valor2, imp, rep;
    printf("Digite o valor da compra: \n");
scanf("%f", &valor1);
  
    rep = valor1 * 0.20;
    imp = valor1 * 0.30;
    valor2 = valor1 + rep + imp;

    printf("O valor final é de: %f", valor2);
    return 0;
}