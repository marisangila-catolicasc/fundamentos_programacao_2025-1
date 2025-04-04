#include <stdio.h>
int main() {
  
  int ano;
    printf("Ano (4 digito)?\n");
    scanf("%d", &ano);

    if (ano > 0) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            printf("Eh ano bissexto/n");
        } 
        else {
            printf("Nao eh ano bissexto\n");
        }
    } else {
        printf("Ano Incorreto\n");
    }
    return 0;
}
