#include <stdio.h>

int meu_strlen(char *str) {
    int tamanho = 0;
    while (str[tamanho] != '\0') {
        tamanho++;
    }
    return tamanho;
}

int main() {
    char texto[] = "Exemplo de string";
    int tamanho = meu_strlen(texto);
    printf("Tamanho da string: %d\n", tamanho);
    return 0;
}