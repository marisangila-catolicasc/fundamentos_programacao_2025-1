#include <stdio.h>

int meu_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int main() {
    char texto[100];
    printf("Digite um texto: ");
    scanf("%s", texto);

    printf("Tamanho da string: %d\n", meu_strlen(texto));
    return 0;
}
