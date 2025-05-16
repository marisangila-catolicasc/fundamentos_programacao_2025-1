#include <stdio.h>


int meu_strlen(char *texto) {
    int contador = 0;
    while (texto[contador] != '\0') {
        contador++;
    }
    return contador;
}

int main() {
    char frase[] = "Frase de teste abc 123";

    int tamanho = meu_strlen(frase);
    printf("O tamanho da frase eh: %d\n", tamanho);

    return 0;
}
