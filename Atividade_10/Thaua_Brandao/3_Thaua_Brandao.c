#include <stdio.h>

void meu_strcpy(char *destino, char *origem) {
    int i = 0;
    while (origem[i] != '\0') {
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0'; 
}

int main() {
    char origem[] = "Texto original";
    char destino[100];

    meu_strcpy(destino, origem);
    printf("String copiada: %s\n", destino);

    return 0;
}
