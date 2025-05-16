#include <stdio.h>

int verifica_par_impar(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("É par? %d\n", verifica_par_impar(n));
    return 0;
}
