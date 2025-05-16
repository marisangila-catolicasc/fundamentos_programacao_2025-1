#include <stdio.h>

void meu_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
}

int main() {
    char destino[100];
    const char *origem = "salamaleicon";

    meu_strcpy(destino, origem);

    printf("copiado: %s\n", destino);

    return 0;
}

