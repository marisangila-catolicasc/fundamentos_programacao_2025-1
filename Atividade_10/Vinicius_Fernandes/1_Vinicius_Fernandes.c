#include <stdio.h>

int meu_strlen(const char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char texto[] = "Hello, World!";

    printf("Tamanho da string: %d\n", meu_strlen(texto));

    return 0;
}