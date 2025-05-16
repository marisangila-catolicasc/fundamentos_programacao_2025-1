#include <stdio.h>

int verifica_par_impar(int num) {
    return (num % 2 == 0) ? 1 : 0;
}

int main() {
int numero;

    printf("Digite um número:\n");
    scanf("%d", &numero);
    printf("%d\n", verifica_par_impar(numero));

    return 0;
}