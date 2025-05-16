#include <stdio.h>

int meu_strlen(char str[]) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    printf("Tamanho: %d\n", meu_strlen(str));
    return 0;
}
