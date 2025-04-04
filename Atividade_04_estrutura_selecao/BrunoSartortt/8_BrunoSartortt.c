#include <stdio.h>

int main() {
int ano;
    
    printf("Digite um ano que contenha 4 dígitos:\n");
scanf("%d", &ano);


    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
    printf("%d é ano bissexto.\n", ano);
    }
    else {
    printf("%d não é ano bissexto.\n", ano);
    }
    

    return 0;
}
// Compilador: gcc 8_BrunoSartortt.c -o 8_BrunoSartortt.exe
// Executador: .\8_BrunoSartortt.exe