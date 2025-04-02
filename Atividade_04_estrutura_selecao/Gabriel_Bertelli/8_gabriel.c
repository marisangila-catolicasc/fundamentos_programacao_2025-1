#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    int ano;
    
    printf("Digite um ano com 4 dígitos: ");
    scanf("%d", &ano);
    
    if (ano <= 0) {
        printf("Ano inválido. O ano deve ser maior que 0.\n");
    } else if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }
    
    return 0;
}