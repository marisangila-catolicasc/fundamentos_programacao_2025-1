#include <stdio.h>

int verifica_par_impar(int n) {
    return (n % 2 == 0);
}

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (verifica_par_impar(n))
        printf("Par\n");
    else
        printf("Ímpar\n");
    return 0;
}
