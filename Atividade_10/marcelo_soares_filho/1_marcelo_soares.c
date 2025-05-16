#include <stdio.h>

int meu_strlen(char *str) {
    int tamanho = 0;

    while (str[tamanho] != '\0') {
        tamanho++;
    }

    return tamanho;
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    scanf("%[^\n]", texto);

    printf("Tamanho da string: %d\n", meu_strlen(texto));

    return 0;
}