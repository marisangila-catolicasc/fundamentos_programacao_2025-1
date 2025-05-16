#include <stdio.h>

int meu_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int main() {
    char texto[100];
    printf("digite uma string: ");
    scanf("%s", texto);

    printf("tamanho da string: %d\n", meu_strlen(texto));
    return 0;
}
