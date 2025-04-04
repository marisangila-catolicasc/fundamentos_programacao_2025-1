#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano com 4 digitos: ");
    scanf("%d", &ano);

    if (ano <= 0) {
        printf("Ano invalido. Digite um ano maior que 0.\n");
    } else {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            printf("O ano %d e bissexto.\n", ano);
        } else {
            printf("O ano %d nao e bissexto.\n", ano);
        }
    }

}
