
#include <stdio.h>

int main() {
    int ano;
    
    do {
        printf("Digite um ano com 4 dígitos: ");
        scanf("%d", &ano);
        
        if (ano <= 0) {
            printf("Ano inválido. O ano deve ser maior que 0.\n");
        }
    } while (ano <= 0);
    
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d é um ano bissexto\n", ano);
    } else {
        printf("%d não é um ano bissexto\n", ano);
    }
    
    return 0;
}
