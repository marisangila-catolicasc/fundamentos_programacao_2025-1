#include <stdio.h>

void meu_strcpy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char origem[100], destino[100];
    printf("Digite a string de origem: ");
    scanf("%s", origem);

    meu_strcpy(destino, origem);
    printf("String que foi copiada é: %s\n", destino);
    return 0;
}
