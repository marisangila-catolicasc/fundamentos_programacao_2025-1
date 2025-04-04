#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O seu numero é par!\n");
    } else {
        printf("O seu numero é impar!\n");
    }

    return 0;
}
// Compilador: gcc 2_BrunoSartortt.c -o 2_BrunoSartortt.exe
// Executador: .\2_BrunoSartortt.exe