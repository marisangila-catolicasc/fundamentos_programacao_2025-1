#include <stdio.h>

int meu_strlen(const char *str) {
    int tam = 0;

    while (str[tam] != '\0') {
        tam++;
    }

    return tam;
}

int main() {
    const char *texto = "TESTE";
    int tamanho = meu_strlen(texto);

    printf("O valor de tamanho ficará: %d\n", tamanho);
    return 0;
}
