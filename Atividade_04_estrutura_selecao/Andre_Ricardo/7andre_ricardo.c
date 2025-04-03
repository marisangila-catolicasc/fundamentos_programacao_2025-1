#include <stdio.h>

void verificar_ano_bissexto(int ano) {
    if (ano > 0) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            printf("O ano %d é bissexto.\n", ano);
        } else {
            printf("O ano %d não é bissexto.\n", ano);
        }
    } else {
        printf("Ano inválido. Digite um ano maior que 0.\n");
    }
}

int main() {
    int ano;

    printf("Digite um ano com 4 dígitos: ");
    scanf("%d", &ano);

    verificar_ano_bissexto(ano);

    return 0;
}
