#include <stdio.h>

int meu_strlen(char str[]) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int main() {
    char texto[100];
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);
    printf("Tamanho: %d\n", meu_strlen(texto));
    return 0;
}
