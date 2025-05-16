#include <stdio.h>

int verifica_par_impar(int valor) {
    if (valor % 2 == 0)
        return 1;
    else
        return 0;
}
int main() {
    int num;

    printf("Informe um número inteiro: ");
    scanf("%d", &num);

    int resultado = verifica_par_impar(num);

    if (resultado == 1) {
        printf("Esse Número eh par.\n");
    } else {
        printf("Esse Número eh ímpar.\n");
    }

    return 0;
}
