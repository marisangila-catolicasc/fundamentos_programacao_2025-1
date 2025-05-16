#include <stdio.h>

void meu_strcpy(char destino[], char origem[]) {
    int i = 0;
    while (origem[i] != '\0') {
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0';
}

int main() {
    char origem[100], destino[100];
    printf("Digite a string: ");
    fgets(origem, 100, stdin);
    meu_strcpy(destino, origem);
    printf("Cópia: %s", destino);
    return 0;
}
