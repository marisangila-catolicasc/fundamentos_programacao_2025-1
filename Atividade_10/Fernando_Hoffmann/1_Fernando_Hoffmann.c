#include <stdio.h>

int meu_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int main() {
    char tamanho[100];
    printf("Digite uma string: ");
    scanf("%s", tamanho);

    printf("Tamanho da string: %d\n", meu_strlen(tamanho));
    return 0;
}
